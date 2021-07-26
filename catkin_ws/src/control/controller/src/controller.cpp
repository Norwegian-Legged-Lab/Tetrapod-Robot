#include "controller/controller.h"

Controller::Controller(int controller_freq) : 
    controller_freq(controller_freq)
{
    this->initROS();
}

Controller::~Controller()
{
    this->nodeHandle->shutdown();
}

void Controller::waitForReadyToProceed()
{
    ros::Rate rate(5);

    while(!ready_to_proceed)
    {
        ros::spinOnce();

        rate.sleep();
    }

    ready_to_proceed = false;
}

bool Controller::UpdateJointCommands()
{
    bool solved_fl, solved_fr, solved_rl, solved_rr;

    Eigen::Vector3d single_leg_joint_angles = Eigen::Vector3d::Zero();

    solved_fl = kinematics.SolveSingleLegInverseKinematics(false, Eigen::Vector3d::Zero(), fl_position_body, single_leg_joint_angles);

    if (solved_fl)
    {
        joint_angle_commands.block<3, 1>(0, 0) = single_leg_joint_angles;
    }
    
    solved_fr = kinematics.SolveSingleLegInverseKinematics(true, Eigen::Vector3d::Zero(), fr_position_body, single_leg_joint_angles);

    if (solved_fr)
    {
        joint_angle_commands.block<3, 1>(3, 0) = single_leg_joint_angles;
    }

    solved_rl = kinematics.SolveSingleLegInverseKinematics(true, Eigen::Vector3d::Zero(), rl_position_body, single_leg_joint_angles);

    if (solved_rl)
    {
        joint_angle_commands.block<3, 1>(6, 0) = single_leg_joint_angles;
    }

    solved_rr = kinematics.SolveSingleLegInverseKinematics(false, Eigen::Vector3d::Zero(), rr_position_body, single_leg_joint_angles);

    if (solved_rr)
    {
        joint_angle_commands.block<3, 1>(9, 0) = single_leg_joint_angles;
    }

    return solved_fl && solved_fr && solved_rl && solved_rr;
}

bool Controller::UpdateVelocityCommands()
{
    if((joint_angle_commands(2) == 0.0) || (joint_angle_commands(5) == 0.0) || (joint_angle_commands(8) == 0.0) || (joint_angle_commands(11) == 0.0))
    {
        ROS_WARN("UpdateVelocityCommands - Could not calculate inverse kinematics because of singular translation jacobian");
        return false;
    }
    Eigen::Matrix<double, 3, 3> J_s_fl = this->kinematics.GetTranslationJacobianInB(Kinematics::LegType::frontLeft, Kinematics::BodyType::foot, joint_angle_commands(0), joint_angle_commands(1), joint_angle_commands(2));
    Eigen::Matrix<double, 3, 3> J_s_fr = this->kinematics.GetTranslationJacobianInB(Kinematics::LegType::frontRight, Kinematics::BodyType::foot, joint_angle_commands(3), joint_angle_commands(4), joint_angle_commands(5));
    Eigen::Matrix<double, 3, 3> J_s_rl = this->kinematics.GetTranslationJacobianInB(Kinematics::LegType::rearLeft, Kinematics::BodyType::foot, joint_angle_commands(6), joint_angle_commands(7), joint_angle_commands(8));
    Eigen::Matrix<double, 3, 3> J_s_rr = this->kinematics.GetTranslationJacobianInB(Kinematics::LegType::rearRight, Kinematics::BodyType::foot, joint_angle_commands(9), joint_angle_commands(10), joint_angle_commands(11));

    this->joint_velocity_commands.block<3, 1>(0, 0) = J_s_fl.inverse() * this->fl_velocity_body;
    this->joint_velocity_commands.block<3, 1>(3, 0) = J_s_fr.inverse() * this->fr_velocity_body;
    this->joint_velocity_commands.block<3, 1>(6, 0) = J_s_rl.inverse() * this->rl_velocity_body;
    this->joint_velocity_commands.block<3, 1>(9, 0) = J_s_rr.inverse() * this->rr_velocity_body;

    return true;
}

bool Controller::sendJointPositionCommands()
{
    //ROS_INFO("Hy: %f\tHp: %f\tKp: %f", joint_angle_commands(0), joint_angle_commands(1), joint_angle_commands(2));
    // Check if the position commands are within the joint angle limit constraints
    if (this->kinematics.ValidateSolution(this->joint_angle_commands) == false)
    {
        // If they are violated report the problem and don't send a command to the motors
        ROS_WARN("Position setpoint violates joint limits. Command canceled.");

        return false;
    }
    else // If the joint angles are valid
    {
        // Create a joint state message
        sensor_msgs::JointState joint_state_msg;

        // Set the time of the joint state message
        joint_state_msg.header.stamp = ros::Time::now();

        // Create a float array for joint angle commands
        std_msgs::Float64MultiArray position_commands;

        // Put the joint angle reference vector into the position command message
        tf::matrixEigenToMsg(this->joint_angle_commands, position_commands);

        // Add the position commands to the joint state message
        joint_state_msg.position = position_commands.data;

        // Publish the message
        joint_command_publisher.publish(joint_state_msg);

        return true;
    }
}

void Controller::setInitialConfiguration()
{
    //Eigen::Vector3d height_offset(0, 0, -0.25);
    Eigen::Vector3d height_offset(0, 0, - nominal_base_height);

    fl_position_body = fl_offset + height_offset;
    
    fr_position_body = fr_offset + height_offset;
    
    rl_position_body = rl_offset + height_offset;
    
    rr_position_body = rr_offset + height_offset;

    UpdateJointCommands();

    sendJointPositionCommands();
}

//ROS related functions
void Controller::initROS()
{
    // Check if ROS has been initialized. If false, initialize ROS.
    if(!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init
        (
            argc,
            argv,
            node_name,
            ros::init_options::NoSigintHandler
        );
    }

    nodeHandle.reset(new ros::NodeHandle(node_name));

    this->shutdownService = nodeHandle->advertiseService(
        "/my_robot/controller/shutdown",
        &Controller::Shutdown,
        this
    );

    this->readyToProceedService = nodeHandle->advertiseService(
        "/my_robot/controller/ready_to_proceed",
        &Controller::ReadyToProceed,
        this
    );

    // Initialize the ready to move subscriber
    this->ready_to_proceed_subscriber = nodeHandle->subscribe
    (
        "/ready_to_proceed",
        1, 
        &Controller::readyToProceedCallback,
        this
    );

    this->joint_state_subscriber = nodeHandle->subscribe
    (
        "/my_robot/joint_state",
        1,
        &Controller::jointStateCallback,
        this
    );

    this->twist_command_subscriber = nodeHandle->subscribe
    (
        "/twist_command",
        1,
        &Controller::TwistCommandCallback,
        this
    );

    this->twist_state_subscriber = nodeHandle->subscribe
    (
        "/twist_state",
        1,
        &Controller::TwistStateCallback,
        this
    );

    this->base_pose_state_subscriber = nodeHandle->subscribe
    (
        "/my_robot/base_pose",
        1,
        &Controller::BasePoseStateCallback,
        this
    );

    // Initialize the joint command publisher
    joint_command_publisher = nodeHandle->advertise<sensor_msgs::JointState>("/" + robot_name + "/joint_state_cmd", 1);

    // Initialize the joint state logger
    joint_state_logger = nodeHandle->advertise<sensor_msgs::JointState>("/log/joint_states", 1);

    // Initialize the joint command logger
    joint_command_logger = nodeHandle->advertise<sensor_msgs::JointState>("/log/joint_commands", 1);

    // Initialize the base twist state logger
    base_twist_state_logger = nodeHandle->advertise<std_msgs::Float64MultiArray>("/log/base_twist_state", 1);

    // Initialize the base pose state logger
    base_pose_state_logger = nodeHandle->advertise<std_msgs::Float64MultiArray>("/log/base_pose_state", 1);

    // Initialize the base twist command logger
    base_twist_command_logger = nodeHandle->advertise<std_msgs::Float64MultiArray>("/log/base_twist_commands", 1);

    // Initialize the base pose command logger
    base_pose_command_logger = nodeHandle->advertise<std_msgs::Float64MultiArray>("/log/base_pose_commands", 1);
}

void Controller::readyToProceedCallback(const std_msgs::Bool &msg)
{
    ready_to_proceed = msg.data;
}

void Controller::jointStateCallback(const sensor_msgs::JointStatePtr &msg)
{
    for(int i = 0; i < 12; i++)
    {
        // Store the jont angles
        this->joint_angles(i) = msg->position[i];

        // Store the joint velocities
        this->joint_velocities(i) = msg->velocity[i];

        // Store th joint torques
        this->joint_torques(i) = msg->effort[i];
    }

    this->UpdateFeetPositions();
}

void Controller::TwistCommandCallback(const geometry_msgs::TwistConstPtr &_msg)
{
    this->lin_vel_x = _msg->linear.x;
    this->lin_vel_y = _msg->linear.y;
    this->ang_vel_z = _msg->angular.z; 
}

void Controller::TwistStateCallback(const geometry_msgs::TwistConstPtr &_msg)
{
    this->_lin_vel_x_estimated = _msg->linear.x;
    this->_lin_vel_y_estimated = _msg->linear.y;
    this->_ang_vel_z_estimated = _msg->angular.z;

    this->_lin_vel_z_measured = _msg->linear.z;
    this->_ang_vel_x_measured = _msg->angular.x;
    this->_ang_vel_y_measured = _msg->angular.y;
}

void Controller::BasePoseStateCallback(const std_msgs::Float64MultiArrayConstPtr &msg)
{
    for(int i = 0; i < 6; i++)
    {
        this->base_pose_state(i) = msg->data[i];
    }
}

void Controller::SetTwistCommand(double lin_vel_cmd_x, double lin_vel_cmd_y, double ang_vel_cmd_z)
{
    this->lin_vel_x = lin_vel_cmd_x;
    this->lin_vel_y = lin_vel_cmd_y;
    this->ang_vel_z = ang_vel_cmd_z;
}

void Controller::WriteToLog()
{
    // Creating a general joint state message

    sensor_msgs::JointState joint_state_msg;

    std_msgs::Float64MultiArray joint_state_position;
    std_msgs::Float64MultiArray joint_state_velocity;
    std_msgs::Float64MultiArray joint_state_torque;

    joint_state_msg.header.stamp = ros::Time::now();

    // Fill in data for the joint state message

    tf::matrixEigenToMsg(this->joint_angles, joint_state_position);
    tf::matrixEigenToMsg(this->joint_velocities, joint_state_velocity);
    tf::matrixEigenToMsg(this->joint_torques, joint_state_torque);

    joint_state_msg.position = joint_state_position.data;
    joint_state_msg.velocity = joint_state_velocity.data;
    joint_state_msg.effort = joint_state_torque.data;

    // Publish the joint state message

    this->joint_state_logger.publish(joint_state_msg);

    // Fill in data for the joint command message

    tf::matrixEigenToMsg(this->joint_angle_commands, joint_state_position);
    tf::matrixEigenToMsg(this->joint_velocity_commands, joint_state_velocity);
    tf::matrixEigenToMsg(this->joint_torque_commands, joint_state_torque);

    joint_state_msg.position = joint_state_position.data;
    joint_state_msg.velocity = joint_state_velocity.data;
    joint_state_msg.effort = joint_state_torque.data;

    // Publish the joint command message

    this->joint_command_logger.publish(joint_state_msg);

    // Create a twist message

    std_msgs::Float64MultiArray base_twist_state_msg;

    Eigen::Matrix<double, 6, 1> base_twist_state_data = Eigen::Matrix<double, 6, 1>::Zero();

    base_twist_state_data(0) = this->_lin_vel_x_estimated;
    base_twist_state_data(1) = this->_lin_vel_y_estimated;
    base_twist_state_data(2) = this->_lin_vel_z_measured;
    base_twist_state_data(3) = this->_ang_vel_x_measured;
    base_twist_state_data(4) = this->_ang_vel_y_measured;
    base_twist_state_data(5) = this->_ang_vel_z_estimated;

    tf::matrixEigenToMsg(base_twist_state_data, base_twist_state_msg);

    this->base_twist_state_logger.publish(base_twist_state_msg);

    // Create a twist command message

    std_msgs::Float64MultiArray base_twist_command_msg;

    Eigen::Matrix<double, 6, 1> base_twist_command_data = Eigen::Matrix<double, 6, 1>::Zero();

    base_twist_command_data(0) = this->lin_vel_x;
    base_twist_command_data(1) = this->lin_vel_y;
    base_twist_command_data(5) = this->ang_vel_z;

    tf::matrixEigenToMsg(base_twist_command_data, base_twist_command_msg);

    this->base_twist_command_logger.publish(base_twist_command_msg);

    // Create a pose message

    std_msgs::Float64MultiArray base_pose_msg;

    tf::matrixEigenToMsg(base_pose_state, base_pose_msg);

    this->base_pose_state_logger.publish(base_pose_msg);

    // Create a pose command message

    std_msgs::Float64MultiArray base_pose_command_msg;

    tf::matrixEigenToMsg(base_pose_commands, base_pose_command_msg);

    this->base_pose_command_logger.publish(base_pose_command_msg);
    
}

void Controller::WaitForInitialState()
{
    while(joint_angles[0] == UNINITIALIZED_JOINT_STATE)
    {
        ros::Duration(1.0).sleep();
        ROS_WARN("Waiting for initial states");
        ros::spinOnce();
    }
}

bool Controller::RunStandUpSequence()
{    
    // Stage 1
    // We want to move the yaw actuators so that they all face in a direction of +-45 or +-135 degrees
    // At the same time we want to keep the hip pitch and knee pitch angles equal to zero

    Eigen::Matrix<double, 12, 1> goal_joint_angles = Eigen::Matrix<double, 12, 1>::Zero();
    goal_joint_angles(0) = M_PI/4.0;
    goal_joint_angles(3) = - M_PI/4.0;
    goal_joint_angles(6) = M_PI*3.0/4.0;
    goal_joint_angles(9) = - M_PI*3.0/4.0;

    this->MoveJointsToSetpoints(goal_joint_angles);
    /*
    joint_angle_commands(0) = M_PI/4.0;
    joint_angle_commands(3) = - M_PI/4.0;
    joint_angle_commands(6) = M_PI*3.0/4.0;
    joint_angle_commands(9) = - M_PI*3.0/4.0;
    */
    /*
    Eigen::Matrix<double, 3, 1> fl_desired_joint_angles(joint_angles(0), 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> fr_desired_joint_angles(joint_angles(3), 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> rl_desired_joint_angles(joint_angles(6), 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> rr_desired_joint_angles(joint_angles(9), 0.0, 0.0);

    fl_goal_foot_pos = this->kinematics.SolveSingleLegForwardKinematics(fl_desired_joint_angles);
    fr_goal_foot_pos = this->kinematics.SolveSingleLegForwardKinematics(fr_desired_joint_angles);
    rl_goal_foot_pos = this->kinematics.SolveSingleLegForwardKinematics(rl_desired_joint_angles);
    rr_goal_foot_pos = this->kinematics.SolveSingleLegForwardKinematics(rr_desired_joint_angles);
    */

    //this->MoveFeetToPositions(fl_goal_foot_pos, fr_goal_foot_pos, rl_goal_foot_pos, rr_goal_foot_pos);

    ROS_WARN("RunStandUpSequence - Stage 1 Complete");

    // Stage 2
    // We want to move the feet to their nominal xy positions while keeping the height equal to zero
    Eigen::Matrix<double, 3, 1> fl_goal_foot_pos;
    Eigen::Matrix<double, 3, 1> fr_goal_foot_pos;
    Eigen::Matrix<double, 3, 1> rl_goal_foot_pos;
    Eigen::Matrix<double, 3, 1> rr_goal_foot_pos;

    double x_nominal = 0.30;
    double y_nominal = 0.30;

    fl_goal_foot_pos(0) = x_nominal;
    fl_goal_foot_pos(1) = x_nominal;
    fl_goal_foot_pos(2) = 0.0;

    fr_goal_foot_pos(0) = x_nominal;
    fr_goal_foot_pos(1) =-x_nominal;
    fr_goal_foot_pos(2) = 0.0;

    rr_goal_foot_pos = - fl_goal_foot_pos;
    rl_goal_foot_pos = - fr_goal_foot_pos;

    this->MoveFeetToPositions(fl_goal_foot_pos, fr_goal_foot_pos, rl_goal_foot_pos, rr_goal_foot_pos);

    ROS_WARN("RunStandUpSequence - Stage 2 Complete");

    // Stage 3
    // We want to keep the feet at their nominal xy positions while increasing the the height to the nominal height
    fl_goal_foot_pos(2) = - nominal_base_height;
    fr_goal_foot_pos(2) = - nominal_base_height;
    rl_goal_foot_pos(2) = - nominal_base_height;
    rr_goal_foot_pos(2) = - nominal_base_height;

    this->MoveFeetToPositions(fl_goal_foot_pos, fr_goal_foot_pos, rl_goal_foot_pos, rr_goal_foot_pos);

    ROS_WARN("RunStandUpSequence - Stage 3 Complete");

    // Stage 4
    // Move each of the feet to the nominal position
    
    this->StandStill(0.5);

    fl_goal_foot_pos(0) = LEG_OFFSET_LENGTH;
    fl_goal_foot_pos(1) = LEG_OFFSET_LENGTH;
    fl_goal_foot_pos(2) = - nominal_base_height;

    this->MoveFootToPosition(Kinematics::LegType::frontLeft, fl_goal_foot_pos);

    ROS_WARN("RunStandUpSequence - FL moved successfully");
    
    this->StandStill(0.5);

    ROS_WARN("RunStandUpSequence - FL stance completed");

    rr_goal_foot_pos(0) = - LEG_OFFSET_LENGTH;
    rr_goal_foot_pos(1) = - LEG_OFFSET_LENGTH;
    rr_goal_foot_pos(2) = - nominal_base_height;

    this->MoveFootToPosition(Kinematics::LegType::rearRight, rr_goal_foot_pos);

    ROS_WARN("RunStandUpSequence - RR moved successfully");

    this->StandStill(0.5);

    ROS_WARN("RunStandUpSequence - RR stance completed");

    fr_goal_foot_pos(0) = LEG_OFFSET_LENGTH;
    fr_goal_foot_pos(1) = - LEG_OFFSET_LENGTH;
    fr_goal_foot_pos(2) = - nominal_base_height;
    
    this->MoveFootToPosition(Kinematics::LegType::frontRight, fr_goal_foot_pos);

    ROS_WARN("RunStandUpSequence - FR moved successfully");

    this->StandStill(0.5);

    ROS_WARN("RunStandUpSequence - FR stance completed");

    rl_goal_foot_pos(0) = - LEG_OFFSET_LENGTH;
    rl_goal_foot_pos(1) = LEG_OFFSET_LENGTH;
    rl_goal_foot_pos(2) = - nominal_base_height;

    this->MoveFootToPosition(Kinematics::LegType::rearLeft, rl_goal_foot_pos);

    ROS_WARN("RunStandUpSequence - RL moved successfully");

    this->StandStill(0.5);

    ROS_WARN("RunStandUpSequence - RL stance completed");
    
    return true;
}

bool Controller::MoveFeetToPositions(Eigen::Matrix<double, 3, 1> fl_goal_foot_pos, 
                                     Eigen::Matrix<double, 3, 1> fr_goal_foot_pos, 
                                     Eigen::Matrix<double, 3, 1> rl_goal_foot_pos, 
                                     Eigen::Matrix<double, 3, 1> rr_goal_foot_pos)
{
    Eigen::Matrix<double, 3, 1> fl_initial_foot_pos = fl_position_body;

    Eigen::Matrix<double, 3, 1> fr_initial_foot_pos = fr_position_body;

    Eigen::Matrix<double, 3, 1> rl_initial_foot_pos = rl_position_body; 

    Eigen::Matrix<double, 3, 1> rr_initial_foot_pos = rr_position_body;
    /*
    Eigen::Matrix<double, 3, 1> fl_goal_foot_pos = feet_goal_pos.block<3, 1>(0, 0);

    Eigen::Matrix<double, 3, 1> fr_goal_foot_pos = feet_goal_pos.block<3, 1>(3, 0);

    Eigen::Matrix<double, 3, 1> rl_goal_foot_pos = feet_goal_pos.block<3, 1>(6, 0);

    Eigen::Matrix<double, 3, 1> rr_goal_foot_pos = feet_goal_pos.block<3, 1>(9, 0);
    */
    Eigen::Matrix<double, 3, 1> fl_desired_foot_pos;

    Eigen::Matrix<double, 3, 1> fr_desired_foot_pos;

    Eigen::Matrix<double, 3, 1> rl_desired_foot_pos;

    Eigen::Matrix<double, 3, 1> rr_desired_foot_pos;
    
    Eigen::Matrix<double, 3, 1> fl_desired_joint_angles;

    Eigen::Matrix<double, 3, 1> fr_desired_joint_angles;

    Eigen::Matrix<double, 3, 1> rl_desired_joint_angles;

    Eigen::Matrix<double, 3, 1> rr_desired_joint_angles;


    // Find the largest position error between the start and the end
    // This is used to select the number of iterations needed for the trajectory

    double max_error = 0.0;

    for(int i = 0; i < ACTUATORS_PER_LEG; i++)
    {
        double fl_foot_pos_error = abs(fl_initial_foot_pos(i) - fl_goal_foot_pos(i));
        double fr_foot_pos_error = abs(fr_initial_foot_pos(i) - fr_goal_foot_pos(i));
        double rl_foot_pos_error = abs(rl_initial_foot_pos(i) - rl_goal_foot_pos(i));
        double rr_foot_pos_error = abs(rr_initial_foot_pos(i) - rr_goal_foot_pos(i));

        if(fl_foot_pos_error > max_error)
        {
            max_error = fl_foot_pos_error;
        }

        if(fr_foot_pos_error > max_error)
        {
            max_error = fr_foot_pos_error;
        }

        if(rl_foot_pos_error > max_error)
        {
            max_error = rl_foot_pos_error;
        }

        if(rr_foot_pos_error > max_error)
        {
            max_error = rr_foot_pos_error;
        }
    }

    double max_velocity = 0.1; // [m/s]

    double trajectory_duration = max_error / max_velocity;

    int number_of_iterations = int(trajectory_duration * controller_freq);

    // Move
    ROS_INFO("Max error: %f", max_error);
    ROS_INFO("Iterations: %d", number_of_iterations);
    ros::Rate publish_rate(controller_freq);

    ROS_INFO("Initial Angles - FL1: %f\tFL2: %f\tFL3: %f\tFR1: %f\tFR2: %f\tFR3: %f\tRL1: %f\tRL2: %f\tRL3: %f\tRR1: %f\tRR2: %f\tRR3: %f",
    joint_angles(0), joint_angles(1), joint_angles(2), joint_angles(3), joint_angles(4), joint_angles(5),
    joint_angles(6), joint_angles(7), joint_angles(8), joint_angles(9), joint_angles(10), joint_angles(11));

    ROS_INFO("Initial - FL1: %f\tFL2: %f\tFL3: %f\tFR1: %f\tFR2: %f\tFR3: %f\tRL1: %f\tRL2: %f\tRL3: %f\tRR1: %f\tRR2: %f\tRR3: %f",
    fl_initial_foot_pos(0), fl_initial_foot_pos(1), fl_initial_foot_pos(2),
    fr_initial_foot_pos(0), fr_initial_foot_pos(1), fr_initial_foot_pos(2),
    rl_initial_foot_pos(0), rl_initial_foot_pos(1), rl_initial_foot_pos(2),
    rr_initial_foot_pos(0), rr_initial_foot_pos(1), rr_initial_foot_pos(2));

    for(int i = 0; i < number_of_iterations; i++)
    {
        ros::spinOnce();

        // Calculate the desired foot positions
        fl_desired_foot_pos = fl_initial_foot_pos + double(i)/double(number_of_iterations) * (fl_goal_foot_pos - fl_initial_foot_pos);
        fr_desired_foot_pos = fr_initial_foot_pos + double(i)/double(number_of_iterations) * (fr_goal_foot_pos - fr_initial_foot_pos);
        rl_desired_foot_pos = rl_initial_foot_pos + double(i)/double(number_of_iterations) * (rl_goal_foot_pos - rl_initial_foot_pos);
        rr_desired_foot_pos = rr_initial_foot_pos + double(i)/double(number_of_iterations) * (rr_goal_foot_pos - rr_initial_foot_pos);

        ROS_INFO("Current - FL1: %f\tFL2: %f\tFL3: %f\tFR1: %f\tFR2: %f\tFR3: %f\tRL1: %f\tRL2: %f\tRL3: %f\tRR1: %f\tRR2: %f\tRR3: %f",
        fl_desired_foot_pos(0), fl_desired_foot_pos(1), fl_desired_foot_pos(2),
        fr_desired_foot_pos(0), fr_desired_foot_pos(1), fr_desired_foot_pos(2),
        rl_desired_foot_pos(0), rl_desired_foot_pos(1), rl_desired_foot_pos(2),
        rr_desired_foot_pos(0), rr_desired_foot_pos(1), rr_desired_foot_pos(2));

        // Calculate the inverse joint angles
        if(this->kinematics.SolveSingleLegInverseKinematics(this->kinematics.GetflOffset(), fl_desired_foot_pos, fl_desired_joint_angles) == false)
        {
            ROS_WARN("MoveFeetToPositions - Failed to solve IK for FL");
            return false;
        }
        if(this->kinematics.SolveSingleLegInverseKinematics(this->kinematics.GetfrOffset(), fr_desired_foot_pos, fr_desired_joint_angles) == false)
        {
            ROS_WARN("MoveFeetToPositions - Failed to solve IK for FR");
            return false;
        }
        if(this->kinematics.SolveSingleLegInverseKinematics(this->kinematics.GetrlOffset(), rl_desired_foot_pos, rl_desired_joint_angles) == false)
        {
            ROS_WARN("MoveFeetToPositions - Failed to solve IK for RL");
            return false;
        }
        if(this->kinematics.SolveSingleLegInverseKinematics(this->kinematics.GetrrOffset(), rr_desired_foot_pos, rr_desired_joint_angles) == false)
        {
            ROS_WARN("MoveFeetToPositions - Failed to solve IK for RR");
            return false;
        }

        this->joint_angle_commands.block<3, 1>(0, 0) = fl_desired_joint_angles;
        this->joint_angle_commands.block<3, 1>(3, 0) = fr_desired_joint_angles;
        this->joint_angle_commands.block<3, 1>(6, 0) = rl_desired_joint_angles;
        this->joint_angle_commands.block<3, 1>(9, 0) = rr_desired_joint_angles;

        ROS_INFO("Angle commands - FL1: %f\tFL2: %f\tFL3: %f\tFR1: %f\tFR2: %f\tFR3: %f\tRL1: %f\tRL2: %f\tRL3: %f\tRR1: %f\tRR2: %f\tRR3: %f",
        joint_angle_commands(0), joint_angle_commands(1), joint_angle_commands(2), joint_angle_commands(3), joint_angle_commands(4), joint_angle_commands(5),
        joint_angle_commands(6), joint_angle_commands(7), joint_angle_commands(8), joint_angle_commands(9), joint_angle_commands(10), joint_angle_commands(11));

        this->sendJointPositionCommands();
        this->WriteToLog();
        publish_rate.sleep();
    }

    return true;
}

bool Controller::MoveJointsToSetpoints(Eigen::Matrix<double, 12, 1> goal_joint_angles)
{
    if(this->kinematics.ValidateSolution(goal_joint_angles) == false)
    {
        ROS_WARN("MoveJointToSetpoints - Invalid goal joint positions");
        return false;
    }

    Eigen::Matrix<double, 12, 1> initial_joint_angles = this->joint_angles;

    double max_error = 0.0;

    for(int i = 0; i < 12; i++)
    {
        double error = abs(initial_joint_angles(i) - goal_joint_angles(i));

        if(error > max_error)
        {
            max_error = error;
        }
    }

    double max_angle_rate = 0.3;

    double trajectory_duration = max_error / max_angle_rate;

    int number_of_iterations = int(trajectory_duration * controller_freq);

    ros::Rate publish_rate(controller_freq);

    for(int i = 0; i < number_of_iterations; i++)
    {
        ros::spinOnce();

        joint_angle_commands = initial_joint_angles + double(i)/double(number_of_iterations) * (goal_joint_angles - initial_joint_angles);

        this->sendJointPositionCommands();
        this->WriteToLog();
        publish_rate.sleep();
    }

    return true;
}

void Controller::UpdateFeetPositions()
{
    fl_position_body = kinematics.SolveSingleLegHipToFootForwardKinematics(Kinematics::LegType::frontLeft, joint_angles.block<3, 1>(0, 0));
    fr_position_body = kinematics.SolveSingleLegHipToFootForwardKinematics(Kinematics::LegType::frontRight, joint_angles.block<3, 1>(3, 0));
    rl_position_body = kinematics.SolveSingleLegHipToFootForwardKinematics(Kinematics::LegType::rearLeft, joint_angles.block<3, 1>(6, 0));
    rr_position_body = kinematics.SolveSingleLegHipToFootForwardKinematics(Kinematics::LegType::rearRight, joint_angles.block<3, 1>(9, 0));
}

bool Controller::MoveFootToPosition(const Kinematics::LegType &leg_type, const Eigen::Matrix<double, 3, 1> &goal_foot_position)
{
    Eigen::Matrix<double, 3, 1> initial_foot_position;

    bool leg_offset;

    int joint_index_start;

    switch (leg_type)
    {
    case Kinematics::LegType::frontLeft:
    {
        ROS_WARN("MoveFootToPosition - FL");
        initial_foot_position = this->fl_position_body;
        leg_offset = this->kinematics.GetflOffset();
        joint_index_start = 0;
        break;
    }
    case Kinematics::LegType::frontRight:
    {
        initial_foot_position = this->fr_position_body;
        leg_offset = this->kinematics.GetfrOffset();
        joint_index_start = 3;
        break;
    }
    case Kinematics::LegType::rearLeft:
    {
        initial_foot_position = this->rl_position_body;
        leg_offset = this->kinematics.GetrlOffset();
        joint_index_start = 6;
        break;
    }
    case Kinematics::LegType::rearRight:
    {
        initial_foot_position = this->rr_position_body;
        leg_offset = this->kinematics.GetrrOffset();
        joint_index_start = 9;
        break;
    }
    default:
        ROS_WARN("MoveFootToPosition - Invalid leg chosen");
        return false;
        break;
    }

    // Can add check to see if the target foot position is feasible

    double swing_period = 0.3;

    double step_height = 0.1;

    int number_of_iterations = int(swing_period * controller_freq);

    int half_number_of_iterations = number_of_iterations/2; 

    number_of_iterations = half_number_of_iterations * 2; // This is to ensure that we have a parallel number of iterations

    Eigen::Matrix<double, 3, 1> desired_foot_position;

    Eigen::Matrix<double, 3, 1> desired_joint_angles;

    ros::Rate publish_rate(controller_freq);

    for(int i = 0; i <= number_of_iterations; i++)
    {
        ros::spinOnce();

        ROS_INFO("Iteration: %d\tN: %d", i, number_of_iterations);
        desired_foot_position = initial_foot_position + double(i)/double(number_of_iterations) * (goal_foot_position - initial_foot_position);

        if(i <= half_number_of_iterations)
        {
            desired_foot_position(2) = - nominal_base_height + step_height * double(i)/double(half_number_of_iterations);
        }
        else
        {
            desired_foot_position(2) = - nominal_base_height + step_height * (1.0 - double(i - half_number_of_iterations)/double(half_number_of_iterations));
        }
 
        if(this->kinematics.SolveSingleLegInverseKinematics(leg_offset, desired_foot_position, desired_joint_angles) == false)
        {
            ROS_WARN("MoveFootToPosition - Failed to solve IK");



            return false;
        }
        else
        {
            joint_angle_commands.block<3, 1>(joint_index_start, 0) = desired_joint_angles;

            ROS_INFO("FL joint angles - hy: %f\thp: %f\tkp: %f", joint_angle_commands(0), joint_angle_commands(1), joint_angle_commands(2));

            this->sendJointPositionCommands();

            this->WriteToLog();
            
            publish_rate.sleep();
        }
    }

    return true;
}

void Controller::StandStill(const double &duration)
{
    ros::Rate control_rate(controller_freq);

    int number_of_iterations = duration * controller_freq;

    for(int i = 0; i < number_of_iterations; i++)
    {
        ros::spinOnce();

        this->sendJointPositionCommands();

        this->WriteToLog();

        control_rate.sleep();
    }
}

bool Controller::ReadyToProceed(std_srvs::Empty::Request &_req,
                                std_srvs::Empty::Response &_res)
{
    this->ready_to_proceed = true;

    return true;
}

bool Controller::Shutdown(std_srvs::Empty::Request &_req,
                          std_srvs::Empty::Response &_res)
{
    this->nodeHandle->shutdown();

    return true;
}