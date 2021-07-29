#include "state_estimator/state_estimator.h"

StateEstimator::StateEstimator(double gait_period, double controller_frequency)
{
    this->InitializeROS();

    int gait_iteration = 0;

    number_of_gait_iterations = gait_period * controller_frequency;

    _lin_vel_body_x_history.resize(number_of_gait_iterations, 0.0);

    _lin_vel_body_y_history.resize(number_of_gait_iterations, 0.0);

    _ang_vel_body_z_history.resize(number_of_gait_iterations, 0.0);
}

void StateEstimator::InitializeROS()
{
    if(!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init
        (
            argc,
            argv,
            _node_name,
            ros::init_options::NoSigintHandler
        );
    }

    this->_node_handle.reset(new ros::NodeHandle(_node_name));

    this->_generalized_position_subscriber = this->_node_handle->subscribe
    (
        "/my_robot/gen_coord",
        1,
        &StateEstimator::GeneralizedPositionCallback,
        this
    );

    this->_generalized_velocity_subscriber = this->_node_handle->subscribe
    (
        "/my_robot/gen_vel",
        1,
        &StateEstimator::GeneralizedVelocityCallback,
        this
    );

    this->_body_twist_state_publisher = this->_node_handle->advertise<geometry_msgs::Twist>("/twist_state", 1);
}

void StateEstimator::GeneralizedPositionCallback(const std_msgs::Float64MultiArrayConstPtr &msg)
{
    for(int i = 0; i < 3; i++)
    {
        _attitude(i) = msg->data[i + 3];
    }
}

void StateEstimator::GeneralizedVelocityCallback(const std_msgs::Float64MultiArrayConstPtr &msg)
{
    for(int i = 0; i < 3; i++)
    {
        _lin_vel_world(i) = msg->data[i];
    }

    for(int i = 0; i < 3; i++)
    {
        _ang_vel(i) = msg->data[i + 3];
    }

    _lin_vel_body(0) = _lin_vel_world(0) * cos(_attitude(2)) + _lin_vel_world(1) * sin(_attitude(2));

    _lin_vel_body(1) = - _lin_vel_world(0) * sin(_attitude(2)) + _lin_vel_world(1) * cos(_attitude(2));

    _lin_vel_body(2) = _lin_vel_world(2);
}

void StateEstimator::UpdateStates()
{
    _lin_vel_body_x_history[gait_iteration] = _lin_vel_body(0);

    _lin_vel_body_y_history[gait_iteration] = _lin_vel_body(1);

    _ang_vel_body_z_history[gait_iteration] = _ang_vel(2);

    _avg_lin_gait_vel_x = accumulate(_lin_vel_body_x_history.begin(), _lin_vel_body_x_history.end(), 0.0)/double(number_of_gait_iterations);

    _avg_lin_gait_vel_y = accumulate(_lin_vel_body_y_history.begin(), _lin_vel_body_y_history.end(), 0.0)/double(number_of_gait_iterations);

    _avg_ang_gait_vel_z = accumulate(_ang_vel_body_z_history.begin(), _ang_vel_body_z_history.end(), 0.0)/double(number_of_gait_iterations);

    if(gait_iteration == number_of_gait_iterations)
    {
        gait_iteration = 0;
    }
    else
    {
        gait_iteration++;
    }
}

void StateEstimator::PrintStates()
{
    ROS_INFO("VelX: %f\tVelY: %f\tVelZ: %f", _avg_lin_gait_vel_x, _avg_lin_gait_vel_y, _avg_ang_gait_vel_z);
}

void StateEstimator::PublishBodyTwistState()
{
    geometry_msgs::Twist msg;

    msg.linear.x = _avg_lin_gait_vel_x;
    msg.linear.y = _avg_lin_gait_vel_y;
    msg.linear.z = _lin_vel_body(2);

    msg.angular.x = _ang_vel(0);
    msg.angular.y = _ang_vel(1);
    msg.angular.z = _avg_ang_gait_vel_z;

    _body_twist_state_publisher.publish(msg);
}