#include "static_gait_controller/static_gait_controller.h"

StaticGaitController::StaticGaitController(double _step_length, double _step_width, double _iterations_per_gait_period)
{
    step_length = _step_length;
    step_width = _step_width;
    iteration_max = _iterations_per_gait_period/4.0 - 1.0;

    for(int i = 0; i < 12; i++)
    {
        joint_angles(i) = UNINITIALIZED_JOINT_STATE;
    }
}

bool StaticGaitController::setInitialConfiguration()
{
    rl_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 3.0, -x_offset_min + step_length); // Is this correct offset?
    fl_foot_position_in_body = calculateStanceLegFootPositionInBody( step_width, 2.0, x_offset_min);
    rr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 1.0,-(x_offset_min + step_length));
    fr_foot_position_in_body = calculateStanceLegFootPositionInBody( step_width, 0.0, x_offset_min);

    if(!moveFootToBodyPosition(fl_foot_position_in_body, fl_offset, 0))
    {
        ROS_ERROR("Failed to move front left foot to the initial position");
        return false;
    }

    if(!moveFootToBodyPosition(fr_foot_position_in_body, fr_offset, 3))
    {
        ROS_ERROR("Failed to move front right foot to the intial position");
        return false;
    }

    if(!moveFootToBodyPosition(rl_foot_position_in_body, rl_offset, 6))
    {
        ROS_ERROR("Failed to move rear left foot to the initial position");
        return false;
    }

    if(!moveFootToBodyPosition(rr_foot_position_in_body, rr_offset, 9))
    {
        ROS_ERROR("Failed to move rear right foot to the initial position");
        return false;
    }

    current_gait_phase = swing_rl;

    return true;
}

bool StaticGaitController::moveFootToBodyPosition(Eigen::Matrix<double, 3, 1> _foot_pos, bool _offset, int _leg_index)
{
    Eigen::Matrix<double, 3, 1> hip_position = Eigen::Matrix<double, 3, 1>::Zero();

    Eigen::Matrix<double, 3, 1> single_leg_joint_targets;

    Eigen::Matrix<double, 3, 1> single_leg_joint_error(1.0, 1.0, 1.0);

    if(kinematics.SolveSingleLegInverseKinematics(_offset, hip_position, _foot_pos, single_leg_joint_targets))
    {
        ros::Rate send_position_command_rate(10);

        while(single_leg_joint_error.transpose()*single_leg_joint_error > 0.023) // Approximately 5 degrees error for each joint
        {
            ROS_INFO("Error too large");
            //sendJointPositionCommands();
            single_leg_joint_error = joint_angles.block<3, 1>(_leg_index, 0) - single_leg_joint_targets;
            ros::spinOnce();
            send_position_command_rate.sleep();
        }
        return true;
    }
    else
    {
        ROS_WARN("Failed to find solution to ik problem");
        return false;
    }
    
}

void StaticGaitController::updateFeetReferencePositionsInBody()
{
    switch(current_gait_phase)
    {
        case swing_rl:
            rl_foot_position_in_body = calculateSwingLegFootPositionInBody(-step_width, -(x_offset_min + step_length));
            fl_foot_position_in_body = calculateStanceLegFootPositionInBody( step_width, 2.0, x_offset_min);
            rr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 1.0,-(x_offset_min + step_length));
            fr_foot_position_in_body = calculateStanceLegFootPositionInBody( step_width, 0.0, x_offset_min);
            break;
        case swing_fl:
            fl_foot_position_in_body = calculateSwingLegFootPositionInBody( step_width, x_offset_min);
            rr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 2.0, -(x_offset_min + step_length));
            fr_foot_position_in_body = calculateStanceLegFootPositionInBody( step_width, 1.0, x_offset_min);  
            rl_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 0.0, -(x_offset_min + step_length));          
            break;
        case swing_rr:
            rr_foot_position_in_body = calculateSwingLegFootPositionInBody(-step_width, -(x_offset_min + step_length));
            fr_foot_position_in_body = calculateStanceLegFootPositionInBody( step_width, 2.0, x_offset_min);  
            rl_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 1.0, -(x_offset_min + step_length));  
            fl_foot_position_in_body = calculateStanceLegFootPositionInBody( step_width, 0.0, x_offset_min);
            break;
        case swing_fr:
            fr_foot_position_in_body = calculateSwingLegFootPositionInBody(step_width, x_offset_min);
            rr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 2.0, -(x_offset_min + step_length));
            fl_foot_position_in_body = calculateStanceLegFootPositionInBody(step_width, 1.0, x_offset_min);
            rl_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 0.0, -(x_offset_min + step_length));
            break;
        default:
        {
            ROS_WARN("Gait phase is not set");
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

Eigen::Matrix<double, 3, 1> StaticGaitController::calculateSwingLegFootPositionInBody(double _step_width, double _x_offset)
{
    // Initialize the foot position vector given in the hip frame
    Eigen::Matrix<double, 3, 1> foot_position_in_hip_frame;

    // The x coordinate is 
    double x = step_length*iteration/iteration_max;

    foot_position_in_hip_frame(0) = x + _x_offset;
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

bool StaticGaitController::updateReferenceJointAngles()
{
    bool found_solution = true;

    Eigen::Matrix<double, 3, 1> zero_vector = Eigen::Matrix<double, 3, 1>::Zero();

    Eigen::Matrix<double, 3, 1> single_leg_joint_angles = Eigen::Matrix<double, 3, 1>::Zero();

    if(!kinematics.SolveSingleLegInverseKinematics(fl_offset, zero_vector, fl_foot_position_in_body, single_leg_joint_angles))
    {
        found_solution = false;
    }
    else
    {
        joint_angle_commands.block<3, 1>(0, 0) = single_leg_joint_angles;
    }

    if(!kinematics.SolveSingleLegInverseKinematics(fr_offset, zero_vector, fr_foot_position_in_body, single_leg_joint_angles))
    {
        found_solution = false;
    }
    else
    {
        joint_angle_commands.block<3, 1>(3, 0) = single_leg_joint_angles;
    }

    if(!kinematics.SolveSingleLegInverseKinematics(rl_offset, zero_vector, rl_foot_position_in_body, single_leg_joint_angles))
    {
        found_solution = false;
    }
    else
    {
        joint_angle_commands.block<3, 1>(6, 0) = single_leg_joint_angles;
    }

    if(!kinematics.SolveSingleLegInverseKinematics(rr_offset, zero_vector, rr_foot_position_in_body, single_leg_joint_angles))
    {
        found_solution = false;
    }
    else
    {
        joint_angle_commands.block<3, 1>(9, 0) = single_leg_joint_angles;
    }
    
    return found_solution;
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
    generalized_position_subscriber = nodeHandle->subscribe
    (
        "/my_robot/gen_coord", 
        10, 
        &StaticGaitController::generalizedPositionCallback,
        this
    );

    // Initialize the generalized coordinates subscriber
    generalized_velocity_subscriber = nodeHandle->subscribe
    (
        "/my_robot/gen_vel",
        10,
        &StaticGaitController::generalizedVelocityCallback,
        this
    );

    // Initialize the ready to move subscriber
    ready_to_proceed_subscriber = nodeHandle->subscribe
    (
        "/ready_to_proceed",
        1, 
        &StaticGaitController::readyToProceedCallback,
        this
    );

    // Initialize the joint command publisher
    joint_command_publisher = nodeHandle->advertise<sensor_msgs::JointState>("/my_robot/joint_state_cmd", 10);
}

void StaticGaitController::generalizedPositionCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < 12; i++)
    {
        joint_angles(i) = _msg->data[i];
    }
}

void StaticGaitController::generalizedVelocityCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < 12; i++)
    {
        joint_velocities(i) = _msg->data[i];
    }
}

void StaticGaitController::readyToProceedCallback(const std_msgs::Bool &_msg)
{
    ready_to_proceed = _msg.data;
}

void StaticGaitController::checkForNewMessages()
{
    ros::spinOnce();
}


void StaticGaitController::sendJointPositionCommand()
{
    sensor_msgs::JointState joint_command_msg;

    for(int i = 0; i < 12; i++)
    {
        joint_command_msg.position[i] = joint_angle_commands(i);

        // Needed for physical system 
        //motor_command_msg.velocity[i] = CONTROL_IDLE;
        //motor_command_msg.effort[i] = CONTROL_IDLE;
    }

    joint_command_msg.header.stamp = ros::Time::now();

    joint_command_publisher.publish(joint_command_msg);
}

void StaticGaitController::waitForReadyToProceedMessage()
{
    ros::Rate check_for_messages_rate(1);

    while(!ready_to_proceed)
    {
        ros::spinOnce();

        check_for_messages_rate.sleep();
    }

    ready_to_proceed = false;
}

void StaticGaitController::waitForPositionJointStates()
{
    ros::Rate check_for_messages_rate(1);

    while(joint_angles(11) == UNINITIALIZED_JOINT_STATE)
    {
        ros::spinOnce();

        check_for_messages_rate.sleep();
    }

    for(int i = 0; i < 12; i++)
    {
        joint_angle_commands(i) = joint_angles(i);
    }
}