#include "controller/controller.h"

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

bool Controller::sendJointPositionCommands()
{
    ROS_INFO("Hy: %f\tHp: %f\tKp: %f", joint_angle_commands(0), joint_angle_commands(1), joint_angle_commands(2));
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
    Eigen::Vector3d height_offset(0, 0, -0.25);

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

    // Initialize the ready to move subscriber
    ready_to_proceed_subscriber = nodeHandle->subscribe
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

    // Initialize the joint command publisher
    joint_command_publisher = nodeHandle->advertise<sensor_msgs::JointState>("/" + robot_name + "/joint_state_cmd", 1);

    // Initialize the joint state logger
    joint_state_logger = nodeHandle->advertise<sensor_msgs::JointState>("/log/joint_states", 1);

    // Initialize the joint command logger
    joint_command_logger = nodeHandle->advertise<sensor_msgs::JointState>("/log/joint_commands", 1);
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

    joint_state_logger.publish(joint_state_msg);

    // Fill in data for the joint command message

    tf::matrixEigenToMsg(this->joint_angle_commands, joint_state_position);
    tf::matrixEigenToMsg(this->joint_velocity_commands, joint_state_velocity);
    tf::matrixEigenToMsg(this->joint_torque_commands, joint_state_torque);

    joint_state_msg.position = joint_state_position.data;
    joint_state_msg.velocity = joint_state_velocity.data;
    joint_state_msg.effort = joint_state_torque.data;

    // Publish the joint command message

    joint_command_logger.publish(joint_state_msg);
    
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
    Eigen::Matrix<double, 3, 1> fl_goal_foot_pos;
    Eigen::Matrix<double, 3, 1> fr_goal_foot_pos;
    Eigen::Matrix<double, 3, 1> rl_goal_foot_pos;
    Eigen::Matrix<double, 3, 1> rr_goal_foot_pos;
    
    // Stage 1
    // We want to move the yaw actuators so that they all face in a direction of +-45 or +-135 degrees
    // At the same time we want to keep the hip pitch and knee pitch angles equal to zero
    joint_angle_commands(0) = M_PI/4.0;
    joint_angle_commands(3) = - M_PI/4.0;
    joint_angle_commands(6) = M_PI*3.0/4.0;
    joint_angle_commands(9) = - M_PI*3.0/4.0;

    Eigen::Matrix<double, 3, 1> fl_desired_joint_angles(joint_angles(0), 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> fr_desired_joint_angles(joint_angles(3), 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> rl_desired_joint_angles(joint_angles(6), 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> rr_desired_joint_angles(joint_angles(9), 0.0, 0.0);

    fl_goal_foot_pos = this->kinematics.SolveSingleLegForwardKinematics(fl_desired_joint_angles);
    fr_goal_foot_pos = this->kinematics.SolveSingleLegForwardKinematics(fr_desired_joint_angles);
    rl_goal_foot_pos = this->kinematics.SolveSingleLegForwardKinematics(rl_desired_joint_angles);
    rr_goal_foot_pos = this->kinematics.SolveSingleLegForwardKinematics(rr_desired_joint_angles);

    //this->MoveFeetToPositions(fl_goal_foot_pos, fr_goal_foot_pos, rl_goal_foot_pos, rr_goal_foot_pos);

    ROS_WARN("RunStandUpSequence - Stage 1 Complete");

    // Stage 2
    // We want to move the feet to their nominal xy positions while keeping the height equal to zero
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

    ROS_WARN("RunStandUpSequence - Stage 1 Complete");

    // Stage 3
    // We want to keep the feet at their nominal xy positions while increasing the the height to the nominal height
    fl_goal_foot_pos(2) = - nominal_base_height;
    fr_goal_foot_pos(2) = - nominal_base_height;
    rl_goal_foot_pos(2) = - nominal_base_height;
    rr_goal_foot_pos(2) = - nominal_base_height;

    this->MoveFeetToPositions(fl_goal_foot_pos, fr_goal_foot_pos, rl_goal_foot_pos, rr_goal_foot_pos);

    return false;
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

    double max_velocity = 0.05; // [m/s]

    double trajectory_duration = max_error / max_velocity;

    int number_of_iterations = int(trajectory_duration * controller_freq);

    // Move
    ROS_INFO("Max error: %f", max_error);
    ROS_INFO("Iterations: %d", number_of_iterations);
    ros::Rate publish_rate(controller_freq);

    for(int i = 0; i < number_of_iterations; i++)
    {
        ros::spinOnce();

        // Calculate the desired foot positions
        fl_desired_foot_pos = fl_initial_foot_pos + double(i)/double(number_of_iterations) * (fl_goal_foot_pos - fl_initial_foot_pos);
        fr_desired_foot_pos = fr_initial_foot_pos + double(i)/double(number_of_iterations) * (fr_goal_foot_pos - fr_initial_foot_pos);
        rl_desired_foot_pos = rl_initial_foot_pos + double(i)/double(number_of_iterations) * (rl_goal_foot_pos - rl_initial_foot_pos);
        rr_desired_foot_pos = rr_initial_foot_pos + double(i)/double(number_of_iterations) * (rr_goal_foot_pos - rr_initial_foot_pos);

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

        this->sendJointPositionCommands();

        publish_rate.sleep();
    }

    return true;
}

void Controller::UpdateFeetPositions()
{
    fl_position_body = kinematics.SolveSingleLegForwardKinematics(joint_angles.block<3, 1>(0, 0));
    fr_position_body = kinematics.SolveSingleLegForwardKinematics(joint_angles.block<3, 1>(3, 0));
    rl_position_body = kinematics.SolveSingleLegForwardKinematics(joint_angles.block<3, 1>(6, 0));
    rr_position_body = kinematics.SolveSingleLegForwardKinematics(joint_angles.block<3, 1>(9, 0));
}