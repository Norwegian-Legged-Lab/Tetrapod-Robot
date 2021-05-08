
#include "gait_controller/gait_controller.h"

GaitController::GaitController()
{
    for(int i = 0; i < 12; i++)
    {
        joint_angles(i) = UNINITIALIZED_JOINT_STATE;

        joint_command_msg.position.push_back(1000);
        //joint_command_msg.velocity.push_back(1000); // Needed for real system
        //joint_command_msg.effort.push_back(1000);
    } 
}

void GaitController::initROS()
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
            "gait_controller_node",
            ros::init_options::NoSigintHandler
        );
    }

    // WHY DO THIS?
    nodeHandle.reset(new ros::NodeHandle("gait_controller_node"));

    // Initialize the generalized coordinates subscriber
    generalized_position_subscriber = nodeHandle->subscribe
    (
        "/my_robot/gen_coord", 
        10, 
        &GaitController::generalizedPositionCallback,
        this
    );

    // Initialize the generalized coordinates subscriber
    generalized_velocity_subscriber = nodeHandle->subscribe
    (
        "/my_robot/gen_vel",
        10,
        &GaitController::generalizedVelocityCallback,
        this
    );

    // Initialize the ready to move subscriber
    ready_to_proceed_subscriber = nodeHandle->subscribe
    (
        "/ready_to_proceed",
        1, 
        &GaitController::readyToProceedCallback,
        this
    );

    twist_command_subscriber = nodeHandle->subscribe
    (
        "/twist_command",
        10,
        &GaitController::twistCommandCallback,
        this
    );

    // Initialize the joint command publisher
    joint_command_publisher = nodeHandle->advertise<sensor_msgs::JointState>("/my_robot/joint_state_cmd", 10);
}

void GaitController::generalizedPositionCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < 12; i++)
    {
        joint_angles(i) = _msg->data[i + 6];
    }
}

void GaitController::generalizedVelocityCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < 12; i++)
    {
        joint_velocities(i) = _msg->data[i + 6];
    }
}

void GaitController::readyToProceedCallback(const std_msgs::Bool &_msg)
{
    ready_to_proceed = _msg.data;
}

void GaitController::twistCommandCallback(const geometry_msgs::TwistConstPtr &_msg)
{
    lin_vel_x = _msg->linear.x;
    lin_vel_y = _msg->linear.y;
    ang_vel_z = _msg->angular.z;
}

void GaitController::checkForNewMessages()
{
    ros::spinOnce();
}

bool GaitController::setInitialConfiguration()
{
    rl_foot_position_in_body = calculateFullStanceFootPosition(rl);
    fl_foot_position_in_body = calculateFullStanceFootPosition(fl);
    rr_foot_position_in_body = calculateFullStanceFootPosition(rr);
    fr_foot_position_in_body = calculateFullStanceFootPosition(fr);

    ROS_INFO("Initial foot positions calculated");
    ROS_INFO("FL: %f, %f, %f", fl_foot_position_in_body(0), fl_foot_position_in_body(1), fl_foot_position_in_body(2));
    ROS_INFO("FR: %f, %f, %f", fr_foot_position_in_body(0), fr_foot_position_in_body(1), fr_foot_position_in_body(2));
    ROS_INFO("RL: %f, %f, %f", rl_foot_position_in_body(0), rl_foot_position_in_body(1), rl_foot_position_in_body(2));
    ROS_INFO("RR: %f, %f, %f", rr_foot_position_in_body(0), rr_foot_position_in_body(1), rr_foot_position_in_body(2));

    if(!moveFootToPosition(fl_foot_position_in_body, fl_offset, 0))
    {
        ROS_ERROR("Failed to move front left foot to the initial position");
        return false;
    }
    ROS_INFO("FL moved successfully");
    if(!moveFootToPosition(fr_foot_position_in_body, fr_offset, 3))
    {
        ROS_ERROR("Failed to move front right foot to the intial position");
        return false;
    }
    ROS_INFO("FR moved successfully");
    if(!moveFootToPosition(rl_foot_position_in_body, rl_offset, 6))
    {
        ROS_ERROR("Failed to move rear left foot to the initial position");
        return false;
    }
    ROS_INFO("RL moved successfully");
    if(!moveFootToPosition(rr_foot_position_in_body, rr_offset, 9))
    {
        ROS_ERROR("Failed to move rear right foot to the initial position");
        return false;
    }
    ROS_INFO("RR moved successfully");

    current_gait_phase = pre_swing_fl_rr;

    current_iteration_full_stance = 0.0;

    return true;
}

void GaitController::updateFeetReferences()
{
    switch(current_gait_phase)
    {
        case pre_swing_fl_rr:
            fl_foot_position_in_body = calculateFullStanceFootPosition(fl);
            rr_foot_position_in_body = calculateFullStanceFootPosition(rr);

            fr_foot_position_in_body = calculateFullStanceFootPosition(fr);
            rl_foot_position_in_body = calculateFullStanceFootPosition(rl);

            current_iteration_full_stance++;
            break;
        case swing_fl_rr:
            fl_foot_position_in_body = calculateSwingFootPosition(fl);
            rr_foot_position_in_body = calculateSwingFootPosition(rr);
            
            fr_foot_position_in_body = calculateStanceFootPosition(fr);
            rl_foot_position_in_body = calculateStanceFootPosition(rl);

            current_iteration_swing++;
            break;
        case pre_swing_fr_rl:
            fl_foot_position_in_body = calculateFullStanceFootPosition(fl);
            rr_foot_position_in_body = calculateFullStanceFootPosition(rr);

            fr_foot_position_in_body = calculateFullStanceFootPosition(fr);
            rl_foot_position_in_body = calculateFullStanceFootPosition(rl);

            current_iteration_full_stance++;
            break;
        case swing_fr_rl:
            fl_foot_position_in_body = calculateStanceFootPosition(fl);
            rr_foot_position_in_body = calculateStanceFootPosition(rr);

            fr_foot_position_in_body = calculateSwingFootPosition(fr);
            rl_foot_position_in_body = calculateSwingFootPosition(rl);

            current_iteration_swing++;
            break;
        default:
        {
            ROS_WARN("Gait phase not set");
        }
    }

    if((current_iteration_full_stance == max_iteration_full_stance) && (current_gait_phase == pre_swing_fl_rr))
    {
        current_gait_phase = swing_fl_rr;
        current_iteration_swing = 0.0;
    }
    else if((current_iteration_swing == max_iteration_swing) && (current_gait_phase == swing_fl_rr))
    {
        current_gait_phase = pre_swing_fr_rl;
        current_iteration_full_stance = 0.0;
    }
    else if((current_iteration_full_stance == max_iteration_full_stance) && (current_gait_phase == pre_swing_fr_rl))
    {
        current_gait_phase = swing_fr_rl;
        current_iteration_swing = 0.0;
    }
    else if((current_iteration_swing == max_iteration_swing) && (current_gait_phase == swing_fr_rl))
    {
        current_gait_phase = pre_swing_fl_rr;
        current_iteration_full_stance = 0.0;
    }
}

bool GaitController::updateJointCommands()
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
    
    ROS_INFO("P: %d, I2: %f, I4: %f\tYaw: %f, %f, %f, %f\tFL: %f, %f, %f\tFR: %f, %f, %f\tRL: %f, %f, %f\tRR: %f, %f, %f", 
    current_gait_phase, current_iteration_swing, current_iteration_full_stance,
    joint_angle_commands(0), joint_angle_commands(3), joint_angle_commands(6), joint_angle_commands(9),
    fl_foot_position_in_body(0), fl_foot_position_in_body(1), fl_foot_position_in_body(2),
    fr_foot_position_in_body(0), fr_foot_position_in_body(1), fr_foot_position_in_body(2),
    rl_foot_position_in_body(0), rl_foot_position_in_body(1), rl_foot_position_in_body(2),
    rr_foot_position_in_body(0), rr_foot_position_in_body(1), rr_foot_position_in_body(2));

    return found_solution;
}

void GaitController::publishJointCommands()
{
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

void GaitController::waitForReadyToProceedMessage()
{
    ros::Rate check_for_messages_rate(1);

    while(!ready_to_proceed)
    {
        ros::spinOnce();

        check_for_messages_rate.sleep();
    }

    ready_to_proceed = false;
}

void GaitController::waitForPositionJointStates()
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
        ROS_INFO("%f", joint_angle_commands(i));
    }
}

bool GaitController::moveFootToPosition(Eigen::Matrix<double, 3, 1> _foot_pos, bool _offset, int _leg_index)
{
    Eigen::Matrix<double, 3, 1> hip_position = Eigen::Matrix<double, 3, 1>::Zero();

    Eigen::Matrix<double, 3, 1> single_leg_joint_values;

    Eigen::Matrix<double, 3, 1> single_leg_joint_targets;

    Eigen::Matrix<double, 3, 1> single_leg_joint_error(1.0, 1.0, 1.0);

    if(kinematics.SolveSingleLegInverseKinematics(_offset, hip_position, _foot_pos, single_leg_joint_targets))
    {
        ros::Rate send_position_command_rate(10);

        joint_angle_commands.block<3, 1>(_leg_index, 0) = single_leg_joint_targets;

        while(single_leg_joint_error.transpose()*single_leg_joint_error > 0.023) // Approximately 5 degrees error for each joint
        {
            ROS_INFO("Error too large. Foot %d", _leg_index);
            publishJointCommands();
            single_leg_joint_values = joint_angles.block<3, 1>(_leg_index, 0);
            ROS_INFO("Current: %f, %f, %f", single_leg_joint_values(0), single_leg_joint_values(1), single_leg_joint_values(2));
            ROS_INFO("Target: %f, %f, %f", single_leg_joint_targets(0), single_leg_joint_targets(1), single_leg_joint_targets(2));
            single_leg_joint_error = single_leg_joint_values - single_leg_joint_targets;
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

Eigen::Matrix<double, 3, 1> GaitController::reverseXY(Eigen::Matrix<double, 3, 1> _v_in)
{
    Eigen::Matrix<double, 3, 1> v_out(-_v_in(0), -_v_in(1), _v_in(2));
    return v_out;
}

Eigen::Matrix<double, 3, 1> GaitController::calculateFullStanceFootPosition(LegID _leg)
{
    Eigen::Matrix<double, 3, 1> foot_position;

    double t_offset; 

    if((current_gait_phase == pre_swing_fl_rr) && ((_leg == fl) || (_leg == rr)))
    {
        t_offset = t_full + t_double + t_full*current_iteration_full_stance/max_iteration_full_stance;
    }
    else if((current_gait_phase == pre_swing_fl_rr) && ((_leg == fr) || (_leg == rl)))
    {
        t_offset = t_full*current_iteration_full_stance/max_iteration_full_stance;
    }
    else if((current_gait_phase == pre_swing_fr_rl) && ((_leg == fl) || (_leg == rr)))
    {
        t_offset = t_full*current_iteration_full_stance/max_iteration_full_stance;
    }
    else
    {
        t_offset = t_full + t_double + current_iteration_full_stance/max_iteration_full_stance;
    }
    
    switch(_leg)
    {
        case fl:
            foot_position(0) = x_0 - dx_max*t_offset + dr_max*t_offset;
            foot_position(1) = y_0 - dy_max*t_offset - dr_max*t_offset;
            break;
        case fr:
            foot_position(0) = x_0 - dx_max*t_offset - dr_max*t_offset;
            foot_position(1) =-y_0 - dy_max*t_offset - dr_max*t_offset;
            break;
        case rl:
            foot_position(0) =-x_0 - dx_max*t_offset + dr_max*t_offset;
            foot_position(1) = y_0 - dy_max*t_offset + dr_max*t_offset;
            break;
        case rr:
            foot_position(0) =-x_0 - dx_max*t_offset - dr_max*t_offset;
            foot_position(1) =-y_0 - dy_max*t_offset + dr_max*t_offset;
            break;
        default:
        {
            ROS_WARN("Leg does not exist");
        }
    }

    foot_position(2) = -hip_height;

    return foot_position;
}

Eigen::Matrix<double, 3, 1> GaitController::calculateStanceFootPosition(LegID _leg)
{
    Eigen::Matrix<double, 3, 1> foot_position;

    double t_offset = t_full + t_double*current_iteration_swing/max_iteration_swing;

    switch(_leg)
    {
        case fl:
            foot_position(0) = x_0 - dx_max*t_offset + dr_max*t_offset;
            foot_position(1) = y_0 - dy_max*t_offset - dr_max*t_offset;
            break;
        case fr:
            foot_position(0) = x_0 - dx_max*t_offset - dr_max*t_offset;
            foot_position(1) =-y_0 - dy_max*t_offset - dr_max*t_offset;
            break;
        case rl:
            foot_position(0) =-x_0 - dx_max*t_offset + dr_max*t_offset;
            foot_position(1) = y_0 - dy_max*t_offset + dr_max*t_offset;
            break;
        case rr:
            foot_position(0) =-x_0 - dx_max*t_offset - dr_max*t_offset;
            foot_position(1) =-y_0 - dy_max*t_offset + dr_max*t_offset;
            break;
        default:
        {
            ROS_WARN("Leg does not exist");
        }
    }

    foot_position(2) = -hip_height;

    return foot_position;
}


Eigen::Matrix<double, 3, 1> GaitController::calculateSwingFootPosition(LegID _leg)
{
    Eigen::Matrix<double, 3, 1> foot_position;

    double t_offset = 1.0 - current_iteration_swing/max_iteration_swing;

    switch(_leg)
    {
        case fl:
            foot_position(0) = x_0 - dx_max*t_offset + dr_max*t_offset;
            foot_position(1) = y_0 - dy_max*t_offset - dr_max*t_offset;
            break;
        case fr:
            foot_position(0) = x_0 - dx_max*t_offset - dr_max*t_offset;
            foot_position(1) =-y_0 - dy_max*t_offset - dr_max*t_offset;
            break;
        case rl:
            foot_position(0) =-x_0 - dx_max*t_offset + dr_max*t_offset;
            foot_position(1) = y_0 - dy_max*t_offset + dr_max*t_offset;
            break;
        case rr:
            foot_position(0) =-x_0 - dx_max*t_offset - dr_max*t_offset;
            foot_position(1) =-y_0 - dy_max*t_offset + dr_max*t_offset;
            break;
        default:
        {
            ROS_WARN("Leg does not exist");
        }
    }

    foot_position(2) = calculateSwingFootHeight(current_iteration_swing, max_iteration_swing);

    return foot_position;
}

double GaitController::calculateSwingFootHeight(double _current_iteration, double _max_iteration)
{
    double x = _current_iteration/_max_iteration;

    return 4.0*(max_step_height)*(x - x*x) - hip_height;
}