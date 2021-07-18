#ifndef state_estimator_h
#define state_estimator_h

#include "ros/ros.h"
#include "ros/console.h"
#include "std_msgs/Float64MultiArray.h"
#include "geometry_msgs/Twist.h"

#include <Eigen/Core>

#include <bits/stdc++.h>

class StateEstimator
{
    public: StateEstimator(double gait_period, double controller_frequency);

    public: void PublishStates();

    public: void UpdateStates();

    private: Eigen::Matrix<double, 3, 1> _attitude = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> _lin_vel_body = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> _ang_vel = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> _lin_vel_world = Eigen::Matrix<double, 3, 1>::Zero();

    private: double _avg_lin_gait_vel_x = 0.0;

    private: double _avg_lin_gait_vel_y = 0.0;

    private: double _avg_ang_gait_vel_z = 0.0;

    private: std::vector<double> _lin_vel_body_x_history;

    private: std::vector<double> _lin_vel_body_y_history;

    private: std::vector<double> _ang_vel_body_z_history; 

    private: int gait_iteration = 0;

    private: int number_of_gait_iterations;

    private: std::string _node_name = "state_estimation_node";

    private: ros::NodeHandlePtr _node_handle;

    private: ros::Subscriber _generalized_position_subscriber;

    private: ros::Subscriber _generalized_velocity_subscriber; 

    private: void InitializeROS();

    private: void GeneralizedPositionCallback(const std_msgs::Float64MultiArrayConstPtr &msg);

    private: void GeneralizedVelocityCallback(const std_msgs::Float64MultiArrayConstPtr &msg);
};

#endif