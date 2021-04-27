#include "single_leg_controller_test/single_leg_controller_test.h"

SingleLegController::SingleLegController(double _dt)
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

void SingleLegController::generalizedCoordinatesCallback(const sensor_msgs::JointStateConstPtr &_msg)
{
    for(int i = 0; i < 3; i++)
    {
        joint_angles(i) = _msg->position[i];
    }
}

void SingleLegController::readyToMoveCallback(const std_msgs::Bool &_msg)
{
    ready_to_move = _msg.data;
}

void SingleLegController::initROS()
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
            "single_leg_controller_test_node",
            ros::init_options::NoSigintHandler
        );
    }

    // WHY DO THIS?
    nodeHandle.reset(new ros::NodeHandle("single_leg_controller_test_node"));

    // Initialize the generalized coordinates subscriber
    generalizedCoordinatesSubscriber = nodeHandle->subscribe
    (
        "/generalized_coordinates", 
        10, 
        &SingleLegController::generalizedCoordinatesCallback,
        this
    );

    // Initialize the ready to move subscriber
    readyToMoveSubscriber = nodeHandle->subscribe
    (
        "/ready_to_move",
        1, 
        &SingleLegController::readyToMoveCallback,
        this
    );

    /*** FOR SIMULATOR ***/
    simulator_generalized_coordinates_subscriber = nodeHandle->subscribe
    (
        "/my_robot/gen_coord",
        10,
        &SingleLegController::simulatorGeneralizedCoordinateCallback,
        this
    );

    /*** FOR SIMULATOR ***/
    simulator_joint_state_publisher = nodeHandle->advertise<sensor_msgs::JointState>("/my_robot/joint_state_cmd", 100);

    // Initialize the joint command publisher
    jointCommandPublisher = nodeHandle->advertise<sensor_msgs::JointState>("/joint_command", 10);
}

void SingleLegController::checkForNewMessages()
{
    ros::spinOnce();
}

void SingleLegController::setFootGoalPos(double _desired_foot_pos_x, double _desired_foot_pos_y, double _desired_foot_pos_z)
{
    filter_ref_foot_speed_x.setReference(_desired_foot_pos_x);
    filter_ref_foot_speed_y.setReference(_desired_foot_pos_y);
    filter_ref_foot_speed_z.setReference(_desired_foot_pos_z);
}

void SingleLegController::setReferenceParameters
(
    double _omega_x, double _omega_y, double _omega_z,
    double _damping_x, double _damping_y, double _damping_z
)
{
    filter_ref_foot_speed_x.setParameters(_omega_x, _damping_x);
    filter_ref_foot_speed_y.setParameters(_omega_y, _damping_y);
    filter_ref_foot_speed_z.setParameters(_omega_z, _damping_z);
}

void SingleLegController::setCurrentReferencePosition(double _pos_x, double _pos_y, double _pos_z)
{
    filter_ref_foot_speed_x.setCurrentPos(_pos_x);
    filter_ref_foot_speed_y.setCurrentPos(_pos_y);
    filter_ref_foot_speed_z.setCurrentPos(_pos_z);
}

void SingleLegController::updateSpeedControlCommands()
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
    //Eigen::Matrix<double, 3, 3> foot_jacobian = kinematics.GetSingleLegJocobian(0.0, joint_angles(0), joint_angles(1), joint_angles(2)); 

    //Eigen::Matrix<double, 3, 3> foot_jacobian = Eigen::Matrix<double, 3, 3>::Zero();
    //for(int i = 0; i < 3; i++){foot_jacobian(i, i) = 1.0;} // TODO Replace with true Jacobian

    //joint_velocities = foot_jacobian.inverse()*vel_foot;
    joint_velocities = vel_foot;
}

void SingleLegController::sendSpeedJointCommand()
{
    for(int i = 0; i < 3; i++)
    {
        motor_command_msg.position[i] = CONTROL_IDLE;
        motor_command_msg.velocity[i] = joint_velocities(i);
        motor_command_msg.effort[i] = CONTROL_IDLE;
    }
    motor_command_msg.header.stamp = ros::Time::now();
    jointCommandPublisher.publish(motor_command_msg);
}

bool SingleLegController::moveFootToPosition(double _foot_pos_x, double _foot_pos_y, double _foot_pos_z)
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

void SingleLegController::sendJointPositionCommand()
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

bool SingleLegController::isTargetPositionReached()
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

//*** FOR SIMULATOR ***//
void SingleLegController::simulatorGeneralizedCoordinateCallback(const std_msgs::Float64MultiArrayConstPtr &msg)
{
    for(int i = 0; i < 12; i++)
    {
        simulator_joint_angles(i) = msg->data[i + 6];
    }
    joint_angles(0) = simulator_joint_angles(0);
    joint_angles(1) = simulator_joint_angles(1);
    joint_angles(2) = simulator_joint_angles(2);

    ROS_INFO("Joint angles updated");
}

//*** FOR SIMULATOR ***//
void SingleLegController::simulatorSendJointPositionCommand()
{
    std_msgs::Float64MultiArray pos_msg;

    tf::matrixEigenToMsg(simulator_joint_angles, pos_msg);

    pos_msg.data[0] = position_controller_joint_target(0);
    pos_msg.data[1] = position_controller_joint_target(1);
    pos_msg.data[2] = position_controller_joint_target(2);

    sensor_msgs::JointState joint_state_msg;
    
    joint_state_msg.header.stamp = ros::Time::now();
    
    joint_state_msg.position = pos_msg.data;

    simulator_joint_state_publisher.publish(joint_state_msg);
}