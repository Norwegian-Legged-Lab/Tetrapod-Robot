#include "single_motor_controller/single_motor_controller.h"

SingleMotorController::SingleMotorController(double _publish_frequency, bool _use_position_control)
{
    publish_frequency = _publish_frequency;  

    max_iterations = period*publish_frequency;
}

void SingleMotorController::initROS()
{
    if(!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init
        (
            argc,
            argv,
            "single_motor_controller_node",
            ros::init_options::NoSigintHandler
        );
    }

    node_handle.reset(new ros::NodeHandle("single_motor_controller_node"));

    motor_state_subscriber = node_handle->subscribe
    (
        "/motor/states",
        100,
        &SingleMotorController::motorStateCallback,
        this
    );

    ready_to_proceed_subscriber = node_handle->subscribe
    (
        "/readyToProceed",
        1,
        &SingleMotorController::readyToProceedCallback,
        this
    );

    set_goal_subscriber = node_handle->subscribe
    (
        "/set_goal",
        1,
        &SingleMotorController::setGoalCallback,
        this
    );

    motor_confirmation_subscriber = node_handle->subscribe
    (
        "/motor/confirmation",
        10,
        &SingleMotorController::motorConfirmationCallback,
        this
    );

    keep_logging_subscriber = node_handle->subscribe
    (
        "/logging/continue",
        10,
        &SingleMotorController::keepLoggingCallback,
        this
    );

    joint_command_publisher = node_handle->advertise<sensor_msgs::JointState>("/motor/commands", 10);

    motor_gain_publisher = node_handle->advertise<std_msgs::Float64MultiArray>("/motor/gains", 1);

    log_motor_state_publisher = node_handle->advertise<sensor_msgs::JointState>("/logging/states", 10);

    log_motor_reference_publisher = node_handle->advertise<sensor_msgs::JointState>("/logging/references", 10);

    ROS_INFO("initROS complete");
}

void SingleMotorController::motorStateCallback(const sensor_msgs::JointStatePtr &_msg)
{
    ROS_INFO("MOTOR STATE CALLBACK");
    angle_pos = _msg->position[0];
    angle_vel = _msg->velocity[0];
}

void SingleMotorController::readyToProceedCallback(const std_msgs::Bool &_msg)
{
    ROS_INFO("READY!");
    ready_to_proceed = _msg.data;
}

void SingleMotorController::setGoalCallback(const std_msgs::Float32 &_msg)
{
    double angle_goal_pos = _msg.data*M_PI/180.0;

    max_travel = angle_goal_pos - angle_offset;

    current_iteration = 0.0;
}

void SingleMotorController::motorConfirmationCallback(const std_msgs::Bool &_msg)
{
    if(_msg.data)
    {
        motor_initialized = true;
    }
}

void SingleMotorController::keepLoggingCallback(const std_msgs::Bool &_msg)
{
    keep_logging = _msg.data;
}

void SingleMotorController::calculateSingleAxisTrajectory
(
    const double &_percentage, 
    const double &_period, 
    const double &_max_travel,
    double &_x, 
    double &_x_d, 
    double &_x_dd
)
{
    double a = 30.0*_max_travel;
    double b = -15.0*_max_travel;
    double c = 1.875*_max_travel;
    double d = -_max_travel*7.0/16.0;

    _x = 0.2*a*pow((_percentage - 0.5), 5.0) + b*pow((_percentage - 0.5), 3.0)/3.0 + c*_percentage + d;
    _x_d = (a*pow((_percentage - 0.5), 4.0) + b*pow((_percentage - 0.5), 2.0) + c)/_period;
    _x_dd = (4.0*a*pow((_percentage - 0.5), 3.0) + 2.0*b*(_percentage - 0.5))/(_period*_period);
}

void SingleMotorController::updateTrajectory()
{
    double desired_angle_travel;
    
    calculateSingleAxisTrajectory(current_iteration/max_iterations, period, max_travel, desired_angle_travel, angle_vel_ref, angle_acc_ref);

    angle_pos_ref = angle_offset + desired_angle_travel;
}

void SingleMotorController::sendJointPositionCommand()
{
    sensor_msgs::JointState joint_command_msg;

    joint_command_msg.position.push_back(angle_pos_ref);
    joint_command_msg.velocity.push_back(IDLE_COMMAND);
    joint_command_msg.effort.push_back(IDLE_COMMAND);

    joint_command_msg.header.stamp = ros::Time::now();

    joint_command_publisher.publish(joint_command_msg);
}

void SingleMotorController::sendJointTorqueCommand()
{
    sensor_msgs::JointState joint_command_msg;

    torque = inertia*(angle_acc_ref + k_p_torque*(angle_pos_ref - angle_pos) + k_d_torque*(angle_vel_ref - angle_vel));

    joint_command_msg.position.push_back(IDLE_COMMAND);
    joint_command_msg.velocity.push_back(IDLE_COMMAND);
    joint_command_msg.effort.push_back(torque);

    joint_command_msg.header.stamp = ros::Time::now();

    joint_command_publisher.publish(joint_command_msg);
}

void SingleMotorController::increaseIterator()
{
    current_iteration++;

    if(current_iteration >= max_iterations)
    {
        current_iteration = max_iterations;

        angle_offset = angle_pos_ref;

        max_travel = 0.0;
    }
}


void SingleMotorController::moveToZero()
{
    ros::Rate publish_position_command_rate(10);

    sensor_msgs::JointState joint_command_msg;

    joint_command_msg.position.push_back(0.0);
    joint_command_msg.velocity.push_back(IDLE_COMMAND);
    joint_command_msg.effort.push_back(IDLE_COMMAND);

    joint_command_msg.header.stamp = ros::Time::now();

    while(abs(angle_pos) > 0.0174)
    {
        ros::spinOnce();
        
        joint_command_publisher.publish(joint_command_msg);

        publish_position_command_rate.sleep();
    }
}

void SingleMotorController::initializeMotor(double _k_p_pos, double _k_i_pos, double _k_p_vel, double _k_i_vel, double _k_p_torque, double _k_i_torque)
{
    ros::Rate set_gain_rate(0.5);

    motor_initialized = false;

    std_msgs::Float64MultiArray motor_gains_msg;

    motor_gains_msg.data.push_back(_k_p_pos);
    motor_gains_msg.data.push_back(_k_i_pos);
    motor_gains_msg.data.push_back(_k_p_vel);
    motor_gains_msg.data.push_back(_k_i_vel);
    motor_gains_msg.data.push_back(_k_p_torque);
    motor_gains_msg.data.push_back(_k_i_torque);
    
    ROS_INFO("Trying to set motor gains");

    while(!motor_initialized)
    {
        motor_gain_publisher.publish(motor_gains_msg);

        ROS_INFO("Requisting motor reply");

        set_gain_rate.sleep();

        checkForNewMessages();
    }

    ROS_INFO("Motor setup complete");
}

void SingleMotorController::initializeMotor()
{
    initializeMotor(k_p_pos, k_i_pos, k_p_vel, k_i_vel, k_p_torque, k_i_torque);
}

bool SingleMotorController::readyToProceed()
{
    if(ready_to_proceed)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool SingleMotorController::initialStateReceived()
{
    if(angle_pos == UNINITIALIZED_STATE)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void SingleMotorController::checkForNewMessages()
{
    ros::spinOnce();
}

void SingleMotorController::printAll()
{
    ROS_INFO("I: %f\tq: %f\tq_ref: %f\tq_d: %f\tq_d_ref: %f\tq_dd_ref: %f\tT: %f",
    current_iteration, angle_pos, angle_pos_ref, angle_vel, angle_vel_ref, angle_acc_ref, torque);
}

void SingleMotorController::writeToLog()
{
    sensor_msgs::JointState joint_state_msg;

    joint_state_msg.position.push_back(angle_pos);
    joint_state_msg.velocity.push_back(angle_vel);
    joint_state_msg.effort.push_back(torque);

    joint_state_msg.header.stamp = ros::Time::now();

    sensor_msgs::JointState joint_reference_msg;

    joint_reference_msg.position.push_back(angle_pos_ref);
    joint_reference_msg.velocity.push_back(angle_vel_ref);
    joint_reference_msg.effort.push_back(angle_acc_ref);

    joint_reference_msg.header.stamp = ros::Time::now();

    log_motor_state_publisher.publish(joint_state_msg);

    log_motor_reference_publisher.publish(joint_reference_msg);
}