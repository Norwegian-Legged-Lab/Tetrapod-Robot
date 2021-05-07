#include "static_gait_controller/static_gait_controller.h"

StaticGaitController::StaticGaitController(double _step_length, double _step_width, double _iterations_per_gait_period, double _shoulder_height)
{
    step_length = _step_length;
    step_width = _step_width;
    iteration_max = _iterations_per_gait_period/4.0 - 1.0;
    shoulder_height_over_ground = _shoulder_height;

    for(int i = 0; i < 12; i++)
    {
        joint_angles(i) = UNINITIALIZED_JOINT_STATE;

        joint_command_msg.position.push_back(1000);
        //joint_command_msg.velocity.push_back(1000); // Needed for real system
        //joint_command_msg.effort.push_back(1000);
    }
}

bool StaticGaitController::setInitialConfiguration()
{

    rl_foot_position_in_body = calculateStanceLegFootPositionInBody( step_width, 3.0, -x_offset_min + step_length); // Is this correct offset?
    fl_foot_position_in_body = calculateStanceLegFootPositionInBody( step_width, 2.0, x_offset_min);
    rr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 1.0,-(x_offset_min + step_length));
    fr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 0.0, x_offset_min);

    ROS_INFO("Initial foot positions calculated");
    ROS_INFO("FL: %f, %f, %f", fl_foot_position_in_body(0), fl_foot_position_in_body(1), fl_foot_position_in_body(2));
    ROS_INFO("FR: %f, %f, %f", fr_foot_position_in_body(0), fr_foot_position_in_body(1), fr_foot_position_in_body(2));
    ROS_INFO("RL: %f, %f, %f", rl_foot_position_in_body(0), rl_foot_position_in_body(1), rl_foot_position_in_body(2));
    ROS_INFO("RR: %f, %f, %f", rr_foot_position_in_body(0), rr_foot_position_in_body(1), rr_foot_position_in_body(2));

    if(!moveFootToBodyPosition(fl_foot_position_in_body, fl_offset, 0))
    {
        ROS_ERROR("Failed to move front left foot to the initial position");
        return false;
    }
    ROS_INFO("FL moved successfully");
    if(!moveFootToBodyPosition(fr_foot_position_in_body, fr_offset, 3))
    {
        ROS_ERROR("Failed to move front right foot to the intial position");
        return false;
    }
    ROS_INFO("FR moved successfully");
    if(!moveFootToBodyPosition(rl_foot_position_in_body, rl_offset, 6))
    {
        ROS_ERROR("Failed to move rear left foot to the initial position");
        return false;
    }
    ROS_INFO("RL moved successfully");
    if(!moveFootToBodyPosition(rr_foot_position_in_body, rr_offset, 9))
    {
        ROS_ERROR("Failed to move rear right foot to the initial position");
        return false;
    }
    ROS_INFO("RR moved successfully");
    current_gait_phase = swing_rl;

    return true;
}

bool StaticGaitController::moveFootToBodyPosition(Eigen::Matrix<double, 3, 1> _foot_pos, bool _offset, int _leg_index)
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
            sendJointPositionCommand();
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

void StaticGaitController::updateFeetReferencePositionsInBody()
{
    switch(current_gait_phase)
    {
        case swing_rl:
            rl_foot_position_in_body = calculateSwingLegFootPositionInBody(step_width, -(x_offset_min + step_length));
            fl_foot_position_in_body = calculateStanceLegFootPositionInBody( step_width, 2.0, x_offset_min);
            rr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 1.0,-(x_offset_min + step_length));
            fr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 0.0, x_offset_min);
            break;
        case swing_fl:
            fl_foot_position_in_body = calculateSwingLegFootPositionInBody( step_width, x_offset_min);
            rr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 2.0, -(x_offset_min + step_length));
            fr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 1.0, x_offset_min);  
            rl_foot_position_in_body = calculateStanceLegFootPositionInBody(step_width, 0.0, -(x_offset_min + step_length));          
            break;
        case swing_rr:
            rr_foot_position_in_body = calculateSwingLegFootPositionInBody(-step_width, -(x_offset_min + step_length));
            fr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 2.0, x_offset_min);  
            rl_foot_position_in_body = calculateStanceLegFootPositionInBody(step_width, 1.0, -(x_offset_min + step_length));  
            fl_foot_position_in_body = calculateStanceLegFootPositionInBody( step_width, 0.0, x_offset_min);
            break;
        case swing_fr:
            fr_foot_position_in_body = calculateSwingLegFootPositionInBody(-step_width, x_offset_min);
            rr_foot_position_in_body = calculateStanceLegFootPositionInBody(-step_width, 2.0, -(x_offset_min + step_length));
            fl_foot_position_in_body = calculateStanceLegFootPositionInBody(step_width, 1.0, x_offset_min);
            rl_foot_position_in_body = calculateStanceLegFootPositionInBody(step_width, 0.0, -(x_offset_min + step_length));
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

/*
Eigen::Matrix3d<double, 3, 1> calculateTurningStanceFootPositionInBody(double _x_offset, double _phase_offset, double side_sign)
{
    // front left leg
    Eigen::Matrix<double, 3, 1> foot_position_in_hip_frame;

    double x = step_length*(1.0 - )

}
*/

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
        joint_angles(i) = _msg->data[i + 6];
    }
}

void StaticGaitController::generalizedVelocityCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < 12; i++)
    {
        joint_velocities(i) = _msg->data[i + 6];
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
        ROS_INFO("%f", joint_angle_commands(i));
    }
}

void StaticGaitController::updateFootPositionsTurning()
{
    switch(current_turning_phase)
    {
        case quad_stance_before_fl_rr:
            fl_foot_position_in_body = calculateTurningQuadStanceFootPosition(fl);

            fr_foot_position_in_body = calculateTurningQuadStanceFootPosition(fr);

            current_iteration_turning_quad_stance++;
            break;
        case swing_fl_rr:
            fl_foot_position_in_body = calculateTurningSwingFootPosition(fl);
            
            fr_foot_position_in_body = calculateTurningStanceFootPosition(fr);

            current_iteration_turning_double_stance++;
            break;
        case quad_stance_before_fr_rl:
            fl_foot_position_in_body = calculateTurningQuadStanceFootPosition(fl);
            
            fr_foot_position_in_body = calculateTurningQuadStanceFootPosition(fr);

            current_iteration_turning_quad_stance++;
            break;
        case swing_fr_rl:
            fl_foot_position_in_body = calculateTurningStanceFootPosition(fl);

            fr_foot_position_in_body = calculateTurningSwingFootPosition(fr);

            current_iteration_turning_double_stance++;
            break;
        default:
        {
            ROS_WARN("Turning gait phase not set");
        }
    }

    rr_foot_position_in_body = reverseXY(fl_foot_position_in_body);

    rl_foot_position_in_body = reverseXY(fr_foot_position_in_body);



    if((current_iteration_turning_quad_stance == max_iteration_turning_quad_stance) && (current_turning_phase == quad_stance_before_fl_rr))
    {
        current_turning_phase = swing_fl_rr;
        current_iteration_turning_double_stance = 0.0;
    }
    else if((current_iteration_turning_double_stance == max_iteration_turning_double_stance) && (current_turning_phase == swing_fl_rr))
    {
        current_turning_phase = quad_stance_before_fr_rl;
        current_iteration_turning_quad_stance = 0.0;
    }
    else if((current_iteration_turning_quad_stance == max_iteration_turning_quad_stance) && (current_turning_phase == quad_stance_before_fr_rl))
    {
        current_turning_phase = swing_fr_rl;
        current_iteration_turning_double_stance = 0.0;
    }
    else if((current_iteration_turning_double_stance == max_iteration_turning_quad_stance) && (current_turning_phase == swing_fr_rl))
    {
        current_turning_phase = quad_stance_before_fl_rr;
        current_iteration_turning_quad_stance = 0.0;
    }
}

void StaticGaitController::updateTurningPhase()
{
    if((current_iteration_turning_quad_stance == max_iteration_turning_quad_stance) && (current_turning_phase == quad_stance_before_fl_rr))
    {
        current_turning_phase = swing_fl_rr;
    }
    else if((current_iteration_turning_double_stance == max_iteration_turning_double_stance) && (current_turning_phase == swing_fl_rr))
    {
        current_turning_phase = quad_stance_before_fr_rl;
    }
    else if((current_iteration_turning_quad_stance == max_iteration_turning_quad_stance) && (current_turning_phase == quad_stance_before_fr_rl))
    {
        current_turning_phase = swing_fr_rl;
    }
    else if((current_iteration_turning_double_stance == max_iteration_turning_quad_stance) && (current_turning_phase == swing_fr_rl))
    {
        current_turning_phase = quad_stance_before_fl_rr;
    }
}

Eigen::Matrix<double, 3, 1> StaticGaitController::calculateTurningSwingFootPosition(LegID _foot)
{
    Eigen::Matrix<double, 3, 1> foot_position;

    double angle = angle_offset + max_angle_deflection*(current_iteration_turning_double_stance/max_iteration_turning_double_stance);

    if(_foot == fl)
    {
        foot_position(0) = turning_radius*cos(angle) - distance_body_to_hip;
        foot_position(1) = turning_radius*sin(angle) - distance_body_to_hip;
    }
    else if(_foot == fr)
    {
        foot_position(0) = turning_radius*cos(angle) - distance_body_to_hip;
        foot_position(1) = - turning_radius*sin(angle) + distance_body_to_hip;
    }
    else if(_foot == rl)
    {
        foot_position(0) = - turning_radius*cos(angle) + distance_body_to_hip;
        foot_position(1) = turning_radius*sin(angle) - distance_body_to_hip;
    }
    else if(_foot == rr)
    {
        foot_position(0) = - turning_radius*cos(angle) + distance_body_to_hip;
        foot_position(1) = - turning_radius*sin(angle) + distance_body_to_hip;
    }
    else
    {
        ROS_WARN("Invalid foot selected");
    }

    foot_position(2) = calculateSwingFootHeightInHip(current_iteration_turning_double_stance, max_iteration_turning_double_stance);

    return foot_position;
}

Eigen::Matrix<double, 3, 1> StaticGaitController::calculateTurningStanceFootPosition(LegID _leg)
{
    Eigen::Matrix<double, 3, 1> foot_position;

    double angle;

    if(current_turning_phase == swing_fr_rl)
    {
        angle = angle_offset + max_angle_deflection*(quad_stance_phase_period + double_stance_phase_period*(1.0 - current_iteration_turning_double_stance/max_iteration_turning_double_stance));
    }
    else
    {
        angle = angle_offset + max_angle_deflection*(quad_stance_phase_period + double_stance_phase_period*(current_iteration_turning_double_stance/max_iteration_turning_double_stance));
    }

    

    switch(_leg)
    {
        case fl:
            foot_position(0) = turning_radius*cos(angle) - distance_body_to_hip;
            foot_position(1) = turning_radius*sin(angle) - distance_body_to_hip;
            break;
        case fr:
            foot_position(0) = turning_radius*cos(angle) - distance_body_to_hip;
            foot_position(1) =-turning_radius*sin(angle) + distance_body_to_hip;
            break;
        case rl:
            foot_position(0) =-turning_radius*cos(angle) + distance_body_to_hip;
            foot_position(1) = turning_radius*sin(angle) - distance_body_to_hip; 
            break;
        case rr:
            foot_position(0) =-turning_radius*cos(angle) + distance_body_to_hip;
            foot_position(1) =-turning_radius*sin(angle) + distance_body_to_hip;
            break;
        default:
        {
            ROS_WARN("Leg does not exist");
        }
    }

    return foot_position;
}

Eigen::Matrix<double, 3, 1> StaticGaitController::calculateTurningQuadStanceFootPosition(LegID _leg)
{
    Eigen::Matrix<double, 3, 1> foot_position;

    double angle; 

    if((current_turning_phase == quad_stance_before_fl_rr) && ((_leg == fl) || (_leg == rr)))
    {
        angle = angle_offset + max_angle_deflection*quad_stance_phase_period*(1.0 - current_iteration_turning_quad_stance/max_iteration_turning_quad_stance);
        ROS_INFO("Angle 1: %f", angle);
        //M_PI/2.0 - (angle_offset + max_angle_defelction*(quad_stance_phase_period + double_stance_phase_period + quad_stance_phase_period*current_iteration_turning_quad_stance/max_iteration_turning_quad_stance));
    }
    else if((current_turning_phase == quad_stance_before_fl_rr) && ((_leg == fr) || (_leg == rl)))
    {
        angle = angle_offset + max_angle_deflection*quad_stance_phase_period*current_iteration_turning_quad_stance/max_iteration_turning_quad_stance;
        ROS_INFO("Angle 2: %f", angle);
    }
    else if((current_turning_phase == quad_stance_before_fr_rl) && ((_leg == fl) || (_leg == rr)))
    {
        angle = M_PI/2.0 - (angle_offset + max_angle_deflection*quad_stance_phase_period*current_iteration_turning_quad_stance/max_iteration_turning_quad_stance);
        ROS_INFO("Angle 3: %f", angle);
    }
    else
    {
        angle = angle_offset + max_angle_deflection*(quad_stance_phase_period + double_stance_phase_period + quad_stance_phase_period*current_iteration_turning_quad_stance/max_iteration_turning_quad_stance);
        ROS_INFO("Angle 4: %f", angle);
    }
    
    switch(_leg)
    {
        case fl:
            foot_position(0) = turning_radius*cos(angle) - distance_body_to_hip;
            foot_position(1) = turning_radius*sin(angle) - distance_body_to_hip;
            break;
        case fr:
            foot_position(0) = turning_radius*cos(angle) - distance_body_to_hip;
            foot_position(1) =-turning_radius*sin(angle) + distance_body_to_hip;
            break;
        case rl:
            foot_position(0) =-turning_radius*cos(angle) + distance_body_to_hip;
            foot_position(1) = turning_radius*sin(angle) - distance_body_to_hip; 
            break;
        case rr:
            foot_position(0) =-turning_radius*cos(angle) + distance_body_to_hip;
            foot_position(1) =-turning_radius*sin(angle) + distance_body_to_hip;
            break;
        default:
        {
            ROS_WARN("Leg does not exist");
        }
    }

    foot_position(2) = -shoulder_height_over_ground;

    return foot_position;
}

Eigen::Matrix<double, 3, 1> StaticGaitController::reverseXY(Eigen::Matrix<double, 3, 1> _v_in)
{
    Eigen::Matrix<double, 3, 1> v_out(-_v_in(0), -_v_in(1), _v_in(2));
    return v_out;
}

double StaticGaitController::calculateSwingFootHeightInHip(double _current_iteration, double _max_iteration)
{
    double x = _current_iteration/_max_iteration;

    return 4.0*(step_max_height - shoulder_height_over_ground)*(x - x*x);
}

bool StaticGaitController::prepareForTurning()
{
    ROS_INFO("Max angle deflection: %f", max_angle_deflection*180.0/M_PI);

    ROS_INFO("Angle_offset: %f", angle_offset*180.0/M_PI);
    current_turning_phase = quad_stance_before_fl_rr;
    
    current_iteration_turning_quad_stance = 0.0;

    fl_foot_position_in_body = calculateTurningQuadStanceFootPosition(fl);
    fr_foot_position_in_body = calculateTurningQuadStanceFootPosition(fr);
    rl_foot_position_in_body = calculateTurningQuadStanceFootPosition(rl);
    rr_foot_position_in_body = calculateTurningQuadStanceFootPosition(rr);

    ROS_INFO("Initial foot rotation position");
    ROS_INFO("FL: %f, %f, %f", fl_foot_position_in_body(0), fl_foot_position_in_body(1), fl_foot_position_in_body(2));
    ROS_INFO("FR: %f, %f, %f", fr_foot_position_in_body(0), fr_foot_position_in_body(1), fr_foot_position_in_body(2));
    ROS_INFO("RL: %f, %f, %f", rl_foot_position_in_body(0), rl_foot_position_in_body(1), rl_foot_position_in_body(2));
    ROS_INFO("RR: %f, %f, %f", rr_foot_position_in_body(0), rr_foot_position_in_body(1), rr_foot_position_in_body(2));

    if(!moveFootToBodyPosition(fl_foot_position_in_body, fl_offset, 0))
    {
        ROS_ERROR("Failed to move front left foot to the initial position");
        return false;
    }
    ROS_INFO("FL moved successfully");

    if(!moveFootToBodyPosition(fr_foot_position_in_body, fr_offset, 3))
    {
        ROS_ERROR("Failed to move front right foot to the intial position");
        return false;
    }
    ROS_INFO("FR moved successfully");

    if(!moveFootToBodyPosition(rl_foot_position_in_body, rl_offset, 6))
    {
        ROS_ERROR("Failed to move rear left foot to the initial position");
        return false;
    }
    ROS_INFO("RL moved successfully");

    if(!moveFootToBodyPosition(rr_foot_position_in_body, rr_offset, 9))
    {
        ROS_ERROR("Failed to move rear right foot to the initial position");
        return false;
    }
    ROS_INFO("RR moved successfully");

    return true;
}