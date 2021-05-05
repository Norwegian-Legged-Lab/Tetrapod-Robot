#include "static_gait_controller/static_gait_controller.h"
/*
StaticGaitController::StaticGaitController(double _dt)
{
    // Set the timestep for all the reference generators
    filter_ref_foot_speed_x.setTimestep(_dt);
    filter_ref_foot_speed_y.setTimestep(_dt);
    filter_ref_foot_speed_z.setTimestep(_dt);

    // Populate the joint state message with idle commands for each joint
    for(int i = 0; i < 3; i++)
    {
        motor_command_msg.position.push_back(1000);
        motor_command_msg.velocity.push_back(1000);
        motor_command_msg.effort.push_back(1000);
    }
}

void StaticGaitController::generalizedCoordinatesCallback(const sensor_msgs::JointStateConstPtr &_msg)
{
    for(int i = 0; i < 3; i++)
    {
        joint_angles(i) = _msg->position[i];
    }
}

void StaticGaitController::readyToMoveCallback(const std_msgs::Bool &_msg)
{
    ready_to_move = _msg.data;
}

void StaticGaitController::initROS()
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
            "static_gait_controller_node",
            ros::init_options::NoSigintHandler
        );
    }

    // WHY DO THIS?
    nodeHandle.reset(new ros::NodeHandle("static_gait_controller_node"));

    // Initialize the generalized coordinates subscriber
    generalizedCoordinatesSubscriber = nodeHandle->subscribe
    (
        "/generalized_coordinates", 
        10, 
        &StaticGaitController::generalizedCoordinatesCallback,
        this
    );

    // Initialize the ready to move subscriber
    readyToMoveSubscriber = nodeHandle->subscribe
    (
        "/ready_to_move",
        1, 
        &StaticGaitController::readyToMoveCallback,
        this
    );

    // FOR SIMULATOR 
    simulator_generalized_coordinates_subscriber = nodeHandle->subscribe
    (
        "/my_robot/gen_coord",
        10,
        &StaticGaitController::simulatorGeneralizedCoordinateCallback,
        this
    );

    simulator_generalized_velocity_subscriber = nodeHandle->subscribe
    (
        "/my_robot/gen_vel",
        10,
        &StaticGaitController::simulatorGeneralizedVelocityCallback,
        this
    );

    // FOR SIMULATOR 
    simulator_joint_state_publisher = nodeHandle->advertise<sensor_msgs::JointState>("/my_robot/joint_state_cmd", 10);

    // Initialize the joint command publisher
    jointCommandPublisher = nodeHandle->advertise<sensor_msgs::JointState>("/joint_command", 10);

    /// For logging
    log_state_publisher = nodeHandle->advertise<sensor_msgs::JointState>("/single_leg/joint_states", 10);

    /// For logging
    log_command_publisher = nodeHandle->advertise<sensor_msgs::JointState>("/single_leg/joint_commands", 10);
}

void StaticGaitController::checkForNewMessages()
{
    ros::spinOnce();
}

void StaticGaitController::setFootGoalPos(double _desired_foot_pos_x, double _desired_foot_pos_y, double _desired_foot_pos_z)
{
    filter_ref_foot_speed_x.setReference(_desired_foot_pos_x);
    filter_ref_foot_speed_y.setReference(_desired_foot_pos_y);
    filter_ref_foot_speed_z.setReference(_desired_foot_pos_z);
}

void StaticGaitController::setReferenceParameters
(
    double _omega_x, double _omega_y, double _omega_z,
    double _damping_x, double _damping_y, double _damping_z
)
{
    filter_ref_foot_speed_x.setParameters(_omega_x, _damping_x);
    filter_ref_foot_speed_y.setParameters(_omega_y, _damping_y);
    filter_ref_foot_speed_z.setParameters(_omega_z, _damping_z);
}

void StaticGaitController::setCurrentReferencePosition(double _pos_x, double _pos_y, double _pos_z)
{
    filter_ref_foot_speed_x.setCurrentPos(_pos_x);
    filter_ref_foot_speed_y.setCurrentPos(_pos_y);
    filter_ref_foot_speed_z.setCurrentPos(_pos_z);
}

void StaticGaitController::updateSpeedControlCommands()
{
    // Update the filter references based on current value,target value, and filter parameters
    filter_ref_foot_speed_x.updateFilter();
    filter_ref_foot_speed_y.updateFilter();
    filter_ref_foot_speed_z.updateFilter();

    // Get the desired foot velocity 
    Eigen::Matrix<double, 3, 1> vel_foot;
    vel_foot(0) = filter_ref_foot_speed_x.getSpeed();
    vel_foot(1) = filter_ref_foot_speed_y.getSpeed();
    vel_foot(2) = filter_ref_foot_speed_z.getSpeed();

    // Convert the desired foot velocity into desired joint angles
    Eigen::Matrix<double, 3, 3> foot_jacobian = kinematics.GetSingleLegTranslationJacobianInB(joint_angles(0), joint_angles(1), joint_angles(2)); 

    //Eigen::Matrix<double, 3, 3> foot_jacobian = Eigen::Matrix<double, 3, 3>::Zero();
    //for(int i = 0; i < 3; i++){foot_jacobian(i, i) = 1.0;} // TODO Replace with true Jacobian

    velocity_controller_joint_target = foot_jacobian.inverse()*vel_foot;
    //joint_velocity = vel_foot;
}

void StaticGaitController::sendSpeedJointCommand()
{
    for(int i = 0; i < 3; i++)
    {
        motor_command_msg.position[i] = CONTROL_IDLE;
        motor_command_msg.velocity[i] = velocity_controller_joint_target(i);
        motor_command_msg.effort[i] = CONTROL_IDLE;
    }
    motor_command_msg.header.stamp = ros::Time::now();
    jointCommandPublisher.publish(motor_command_msg);
}

bool StaticGaitController::moveFootToPosition(double _foot_pos_x, double _foot_pos_y, double _foot_pos_z)
{
    Eigen::Matrix<double, 3, 1> hip_position = Eigen::Matrix<double, 3, 1>::Zero();

    Eigen::Matrix<double, 3, 1> foot_target_pos(_foot_pos_x, _foot_pos_y, _foot_pos_z);

    if(kinematics.SolveSingleLegInverseKinematics(false, hip_position, foot_target_pos, position_controller_joint_target))
    {   
        ros::Rate send_position_command_rate(10);

        while(!is_target_position_reached)
        {
            if(isTargetPositionReached())
            {
                ROS_INFO("Success, close enough");
                is_target_position_reached = true;
            }
            else
            {
                ROS_INFO("Error too large");
                simulatorSendJointPositionCommand();
                sendJointPositionCommand();
                ros::spinOnce();
                send_position_command_rate.sleep();
            }
            
        }
        ROS_INFO("Successfully reached target position");
        return true;
    }
    else
    {
        ROS_WARN("Failed to find solution to ik problem");
        return false;
    }
}

void StaticGaitController::setJointPositions(double _theta_hy, double _theta_hp, double _theta_kp)
{
    position_controller_joint_target(0) = _theta_hy;
    position_controller_joint_target(1) = _theta_hp;
    position_controller_joint_target(2) = _theta_kp;

    ros::Rate send_position_command_rate(10);

    while(!is_target_position_reached)
    {
        if(isTargetPositionReached())
        {
            ROS_INFO("Success, close enough");
            is_target_position_reached = true;
        }
        else
        {
            ROS_INFO("Error too large");
            simulatorSendJointPositionCommand();
            sendJointPositionCommand();
            ros::spinOnce();
            send_position_command_rate.sleep();
        }
        
    }
    ROS_INFO("Successfully reached target position");
}

void StaticGaitController::sendJointPositionCommand()
{
    for(int i = 0; i < 3; i++)
    {
        motor_command_msg.position[i] = position_controller_joint_target(i);
        motor_command_msg.velocity[i] = CONTROL_IDLE;
        motor_command_msg.effort[i] = CONTROL_IDLE;
    }

    motor_command_msg.header.stamp = ros::Time::now();

    jointCommandPublisher.publish(motor_command_msg);
}

bool StaticGaitController::isTargetPositionReached()
{
    Eigen::Matrix<double, 3, 1> joint_error = joint_angles - position_controller_joint_target;
    ROS_INFO("Current joint angles: %f, %f, %f", joint_angles(0), joint_angles(1), joint_angles(2));
    ROS_INFO("Target joint angles: %f, %f, %f", position_controller_joint_target(0), position_controller_joint_target(1), position_controller_joint_target(2));
    ROS_INFO("dx = %f, dy = %f, dz = %f", joint_error(0), joint_error(1), joint_error(2));
    if(joint_error.transpose()*joint_error < POSITION_CONVERGENCE_CRITERIA)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void StaticGaitController::setJointVelocityToZero()
{
    velocity_controller_joint_target = Eigen::Matrix<double, 3, 1>::Zero();
    
    sendSpeedJointCommand();

    simulatorSendJointVelocityCommand();
}

// FOR SIMULATOR //
void StaticGaitController::simulatorGeneralizedCoordinateCallback(const std_msgs::Float64MultiArrayConstPtr &msg)
{
    for(int i = 0; i < 3; i++)
    {
        joint_angles(i) = msg->data[i + 6];
    }

    //ROS_INFO("Joint angles updated");
}

void StaticGaitController::simulatorGeneralizedVelocityCallback(const std_msgs::Float64MultiArrayConstPtr &msg)
{
    for(int i = 0; i < 3; i++)
    {
        joint_velocity(i) = msg->data[i + 6];
    }

    //ROS_INFO("Joint angles updated");
}

void StaticGaitController::simulatorSendJointPositionCommand()
{
    std_msgs::Float64MultiArray pos_msg;

    tf::matrixEigenToMsg(position_controller_joint_target, pos_msg);

    sensor_msgs::JointState joint_state_msg;
    
    joint_state_msg.header.stamp = ros::Time::now();
    
    joint_state_msg.position = pos_msg.data;

    simulator_joint_state_publisher.publish(joint_state_msg);
}

void StaticGaitController::simulatorSendJointVelocityCommand()
{
    std_msgs::Float64MultiArray vel_msg;

    tf::matrixEigenToMsg(velocity_controller_joint_target, vel_msg);

    sensor_msgs::JointState joint_state_msg;

    joint_state_msg.header.stamp = ros::Time::now();

    joint_state_msg.velocity = vel_msg.data;

    simulator_joint_state_publisher.publish(joint_state_msg);
}

void StaticGaitController::logStatesAndCommands()
{
    sensor_msgs::JointState joint_state_msg;
    joint_state_msg.header.stamp = ros::Time::now();

    std_msgs::Float64MultiArray pos_msg;
    std_msgs::Float64MultiArray vel_msg;

    // Log state
    tf::matrixEigenToMsg(joint_angles, pos_msg);
    tf::matrixEigenToMsg(joint_velocity, vel_msg);

    joint_state_msg.position = pos_msg.data;
    joint_state_msg.velocity = vel_msg.data;

    log_state_publisher.publish(joint_state_msg);

    // Log commands
    tf::matrixEigenToMsg(position_controller_joint_target, pos_msg);
    tf::matrixEigenToMsg(velocity_controller_joint_target, vel_msg);

    joint_state_msg.position = pos_msg.data;
    joint_state_msg.velocity = vel_msg.data;

    log_command_publisher.publish(joint_state_msg);
}





*/


void StaticGaitController::updateFeetReferencePositionsInBody()
{
    switch(current_gait_phase)
    {
        case swing_rl:
            rl_foot_position_in_body = calculateSwingLegFootPositionInBody(-step_width);
            break;
        case swing_fl:
            fl_foot_position_in_body = calculateSwingLegFootPositionInBody(step_width);
            break;
        case swing_rr:
            rr_foot_position_in_body = calculateSwingLegFootPositionInBody(-step_width);
            break;
        case swing_fr:
            fr_foot_position_in_body = calculateSwingLegFootPositionInBody(step_width);
            break;
        default:
        {
            
        }
    }

    // Check if it is the end of a gait cycle
    if(iteration == iteration_max)
    {
        iteration = 0;
        switch(current_gait_phase)
        {
            case swing_rl:
                current_gait_phase = swing_fl;
                break;
            case swing_fl:
                current_gait_phase = swing_rr;
                break;
            case swing_rr:
                current_gait_phase = swing_fr;
                break;
            case swing_fr:
                current_gait_phase = swing_rl;
                break;
            default:
            {
                ROS_WARN("Gait phase is not set");
            }
        }
    }
    else
    {
        iteration++;
    }
    
}

Eigen::Matrix<double, 3, 1> StaticGaitController::calculateSwingLegFootPositionInBody(double _step_width)
{
    // Initialize the foot position vector given in the hip frame
    Eigen::Matrix<double, 3, 1> foot_position_in_hip_frame;

    // The x coordinate is 
    double x = step_length*iteration/iteration_max;

    foot_position_in_hip_frame(0) = x;
    foot_position_in_hip_frame(1) = _step_width;

    double a = - 4*step_max_height/(step_length*step_length);

    double step_height_over_ground = step_max_height + a*(x - step_length/2.0)*(x - step_length/2.0);

    foot_position_in_hip_frame(2) = step_height_over_ground - shoulder_height_over_ground;

    return foot_position_in_hip_frame;
}

Eigen::Matrix<double, 3, 1> StaticGaitController::calculateStanceLegFootPositionInBody(double _step_width, double _phase_offset, double _x_offset)
{
    Eigen::Matrix<double, 3, 1> foot_position_in_hip_frame;

    double x = step_length*(1.0 - (_phase_offset + iteration/iteration_max)/3.0);

    foot_position_in_hip_frame(0) = x + _x_offset;
    foot_position_in_hip_frame(1) = _step_width;
    foot_position_in_hip_frame(2) = -shoulder_height_over_ground;

    return foot_position_in_hip_frame;
}
