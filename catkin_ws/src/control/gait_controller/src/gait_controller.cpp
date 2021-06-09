
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

    dx_max = lin_vel_x*0.1;
    dy_max = lin_vel_y*0.1;
    dr_max = ang_vel_z*0.1;

    max_pronk_travel_distance = lin_vel_x*0.3;
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

    joint_states_received = true;
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

bool GaitController::moveJointsToSetpoints()
{
    ros::Rate publish_rate(50);

    while(!jointSetpointsReached())
    {
        ros::spinOnce();

        publishJointCommands();

        publish_rate.sleep();
    }

    return true;
}

bool GaitController::jointSetpointsReached()
{
    Eigen::Matrix<double, 12, 1> joint_errors = joint_angle_commands - joint_angles;
    
    for(int i = 0; i < 12; i++)
    {
        if(abs(joint_errors(i)) > 3.0*M_PI/180.0)
        {
            ROS_INFO("Joint error %d is too large: %f [deg]", i, joint_errors(i)*180.0/M_PI);

            return false;
        }
    }

    return true;
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
    
    t_offset = 2.0*(t_offset - 0.5);

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

    t_offset = 2.0*(t_offset - 0.5);

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

    t_offset = 2.0*(t_offset - 0.5);

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

bool GaitController::standUp()
{
    ros::Rate publish_rate(1);

    double x_0_start = 0.3;
    double y_0_start = 0.3;

    // Get Initial States
    if(!joint_states_received)
    {
        waitForPositionJointStates();
        ROS_INFO("JOINT STATES RECEIVED!");
    }
    
    joint_angle_commands = Eigen::Matrix<double, 12, 1>::Zero();

    joint_angle_commands(0) = joint_angles(0);
    joint_angle_commands(3) = joint_angles(3);
    joint_angle_commands(6) = joint_angles(6);
    joint_angle_commands(9) = joint_angles(9);

    printJointStates();
    printJointCommandStates();
    updateFeetPositions();
    printFeetPositions();

    moveJointsToSetpoints();

    ROS_INFO("Stage 1 complete");

    printJointStates();
    printJointCommandStates();
    updateFeetPositions();
    printFeetPositions();

    double x_start = feet_positions(0);
    double y_start = feet_positions(0);
    //while(true);

    joint_angle_commands(0) = M_PI/4.0;
    joint_angle_commands(3) = - M_PI/4.0;
    joint_angle_commands(6) = M_PI*3.0/4.0;
    joint_angle_commands(9) = - M_PI*3.0/4.0;

    moveJointsToSetpoints();

    ROS_INFO("Stage 2 complete");

    printJointStates();
    printJointCommandStates();
    updateFeetPositions();
    printFeetPositions();

    fl_foot_position_in_body = feet_positions.block<3, 1>(0, 0);
    fr_foot_position_in_body = feet_positions.block<3, 1>(3, 0);
    //rl_foot_position_in_body = feet_positions.block<3, 1>(6, 0);
    //rr_foot_position_in_body = feet_positions.block<3, 1>(9, 0);

    fl_foot_position_in_body(2) = 0.0;
    fr_foot_position_in_body(2) = 0.0;

    rl_foot_position_in_body = - fr_foot_position_in_body;
    rr_foot_position_in_body = - fl_foot_position_in_body;

    updateJointCommands();
    moveJointsToSetpoints();

    double number_of_steps = (fl_foot_position_in_body(0) - x_0_start)*100.0;

    ROS_INFO("Steps: %f", number_of_steps);

    publish_rate = number_of_steps*0.5;

    for(int i = 1; i < number_of_steps; i++)
    {
        checkForNewMessages();

        fl_foot_position_in_body(0) -= 0.01;
        fl_foot_position_in_body(1) -= 0.01;

        fr_foot_position_in_body(0) -= 0.01;
        fr_foot_position_in_body(1) += 0.01;

        rl_foot_position_in_body = - fr_foot_position_in_body;
        rr_foot_position_in_body = - fl_foot_position_in_body;

        updateJointCommands();

        publishJointCommands();

        publish_rate.sleep();
    }

    ROS_INFO("Stage 3 complete");

    printJointStates();
    printJointCommandStates();
    updateFeetPositions();
    printFeetPositions();

    double number_of_elevation_steps = hip_height*100.0;

    Eigen::Matrix<double, 3, 1> single_leg_joint_angles;

    publish_rate = (number_of_elevation_steps*0.5);

    for(int i = 1; i < number_of_elevation_steps; i++)
    {
        checkForNewMessages();

        fl_foot_position_in_body(2) -= 0.01;
        fr_foot_position_in_body(2) -= 0.01;
        rl_foot_position_in_body(2) -= 0.01;
        rr_foot_position_in_body(2) -= 0.01;

        updateJointCommands();

        publishJointCommands();

        publish_rate.sleep();
    }

    ROS_INFO("Stage 4 complete");
    while(true);

    return true;
}
double GaitController::calculateSwingFootHeight(double _hip_height, double _max_swing_foot_height, double _current_iteration, double _max_iteration)
{
    double x = _current_iteration/_max_iteration;

    return 4.0*(_max_swing_foot_height)*(x - x*x) - _hip_height;
}

bool GaitController::initializePronking()
{
    current_pronk_iteration = 0.0;

    pronk_phase = PronkPhase::swing_rear;

    fl_foot_position_in_body = calculatePronkStanceFootPosition(LegID::fl);
    fr_foot_position_in_body = calculatePronkStanceFootPosition(LegID::fr);
    rl_foot_position_in_body = calculatePronkStanceFootPosition(LegID::rl);
    rr_foot_position_in_body = calculatePronkStanceFootPosition(LegID::rr);

    ROS_INFO("Initial pronking foot positions calculated");
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

    return true;
}

void GaitController::updatePronkController()
{
    switch (pronk_phase)
    {
    case PronkPhase::swing_front:
        fl_foot_position_in_body = calculatePronkSwingFootPosition(LegID::fl);
        fr_foot_position_in_body = calculatePronkSwingFootPosition(LegID::fr);
        rl_foot_position_in_body = calculatePronkStanceFootPosition(LegID::rl);
        rr_foot_position_in_body = calculatePronkStanceFootPosition(LegID::rr);
        break;
    case PronkPhase::swing_rear:
        fl_foot_position_in_body = calculatePronkStanceFootPosition(LegID::fl);
        fr_foot_position_in_body = calculatePronkStanceFootPosition(LegID::fr);
        rl_foot_position_in_body = calculatePronkSwingFootPosition(LegID::rl);
        rr_foot_position_in_body = calculatePronkSwingFootPosition(LegID::rr);        
        break;
    default:
        break;
    }

    current_pronk_iteration++;

    if(current_pronk_iteration == max_pronk_iteration)
    {
        current_pronk_iteration = 0.0;
        if(pronk_phase == PronkPhase::swing_front)
        {
            pronk_phase = PronkPhase::swing_rear;
        }
        else if(pronk_phase == PronkPhase::swing_rear)
        {
            pronk_phase = PronkPhase::swing_front;
        }
        else
        {
            ROS_WARN("Pronk phase does not exist");
        }
    }
}

Eigen::Matrix<double, 3, 1> GaitController::calculatePronkStanceFootPosition(LegID _leg)
{
    Eigen::Matrix<double, 3, 1> stance_foot_position;

    stance_foot_position(0) = x_0 + max_pronk_travel_distance*(1.0 - 2.0*current_pronk_iteration/max_pronk_iteration);

    if((_leg == LegID::rl) || (_leg == LegID::rr))
    {
        stance_foot_position(0) = - stance_foot_position(0);
    }

    stance_foot_position(1) = 0.001;

    if((_leg == LegID::fl) || (_leg == LegID::rr))
    {
        stance_foot_position(1) = - stance_foot_position(1);
    }
    
    stance_foot_position(2) = - pronk_height;

    return stance_foot_position;
}

Eigen::Matrix<double, 3, 1> GaitController::calculatePronkSwingFootPosition(LegID _leg)
{
    Eigen::Matrix<double, 3, 1> swing_foot_position;

    swing_foot_position(0) = x_0 + max_pronk_travel_distance*(2.0*current_pronk_iteration/max_pronk_iteration - 1.0);

    if((_leg == LegID::rl) || (_leg == LegID::rr))
    {
        swing_foot_position(0) = - swing_foot_position(0);
    }

    swing_foot_position(1) = 0.001;

    if((_leg == LegID::fl) || (_leg == LegID::rr))
    {
        swing_foot_position(1) = - swing_foot_position(1);
    }

    swing_foot_position(2) = calculateSwingFootHeight(pronk_height, 0.1, current_pronk_iteration, max_pronk_iteration);

    return swing_foot_position;
}

void GaitController::printJointStates()
{
    ROS_INFO("fl: %f, %f, %f\tfr: %f, %f, %f\trl: %f, %f, %f\trr: %f, %f, %f", 
    joint_angles(0), joint_angles(1), joint_angles(2),
    joint_angles(3), joint_angles(4), joint_angles(5),
    joint_angles(6), joint_angles(7), joint_angles(8),
    joint_angles(9), joint_angles(10), joint_angles(11)
    );
}

void GaitController::printJointCommandStates()
{
    ROS_INFO("fl: %f, %f, %f\tfr: %f, %f, %f\trl: %f, %f, %f\trr: %f, %f, %f", 
    joint_angle_commands(0), joint_angle_commands(1), joint_angle_commands(2),
    joint_angle_commands(3), joint_angle_commands(4), joint_angle_commands(5),
    joint_angle_commands(6), joint_angle_commands(7), joint_angle_commands(8),
    joint_angle_commands(9), joint_angle_commands(10), joint_angle_commands(11)
    );
}

void GaitController::printFeetPositions()
{
    ROS_INFO("fl: %f, %f, %f\tfr: %f, %f, %f\trl: %f, %f, %f\trr: %f, %f, %f", 
    feet_positions(0), feet_positions(1), feet_positions(2),
    feet_positions(3), feet_positions(4), feet_positions(5),
    feet_positions(6), feet_positions(7), feet_positions(8),
    feet_positions(9), feet_positions(10), feet_positions(11)
    );
}

void GaitController::updateFeetPositions()
{
    for(int i = 0; i < 4; i++)
    {
        feet_positions.block<3, 1>(3*i, 0) = kinematics.SolveSingleLegForwardKinematics(joint_angles.block<3, 1>(3*i, 0));
    }
}