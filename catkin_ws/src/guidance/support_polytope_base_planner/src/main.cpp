#include "support_polytope_base_planner/support_polytope_base_planner.h"

#include "footstep_planner/footstep_planner.h"

#include "ros/ros.h"

#include <iostream>

int main(int argc, char **argv)
{
    ros::Time::init();

    ros::Duration(1).sleep();

    Eigen::Array<bool, 4, 1> bool_bridge;

    bool_bridge << true, true, true, true;

    //Terrain terrain(bool_bridge);
    Terrain terrain;

    int n_steps = 4*20;

    int n_legs = 4;

    LegType step_sequence[] = {front_left, rear_right, front_right, rear_left};

    double step_span = 0.5;

    double step_height = 0.2;

    double length_legs = 0.6;

    double bbox_len = 0.3;

    Eigen::Matrix<Eigen::Vector3d, 4, 1> init_f_pos;

    Eigen::Vector3d center(terrain.getStoneByName("initial").getCenter());
    
    double angle_divided = 2*M_PI/n_legs;

    double phis[] = {0.5*angle_divided, -0.5*angle_divided, 1.5*angle_divided, -1.5*angle_divided};

    double theta_0 = 0;

    double angle_front_left = theta_0 + phis[front_left - 1];

    double angle_front_right = theta_0 + phis[front_right - 1];

    double angle_rear_left = theta_0 + phis[rear_left - 1];

    double angle_rear_right = theta_0 + phis[rear_right - 1];

    init_f_pos(front_left - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_front_left), std::sin(angle_front_left), 0);

    init_f_pos(front_right - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_front_right), std::sin(angle_front_right), 0);

    init_f_pos(rear_left - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_rear_left), std::sin(angle_rear_left), 0);

    init_f_pos(rear_right - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_rear_right), std::sin(angle_rear_right), 0);

    Eigen::Matrix<Eigen::Vector3d, 4, 1> goal_f_pos;

    center = terrain.getStoneByName("goal").getCenter();

    goal_f_pos(front_left - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_front_left), std::sin(angle_front_left), 0);

    goal_f_pos(front_right - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_front_right), std::sin(angle_front_right), 0);

    goal_f_pos(rear_left - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_rear_left), std::sin(angle_rear_left), 0);

    goal_f_pos(rear_right - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_rear_right), std::sin(angle_rear_right), 0);

    ROS_INFO("About to begin footstep planning");
    
    DecVars_res foot_res = footstep_planner(terrain, init_f_pos, goal_f_pos, n_steps, n_legs, length_legs, step_sequence, bbox_len, step_span, step_height);

    ROS_INFO("About to begin base position planning");
    
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> foot_points = foot_res.position_ts;

    std::cout << foot_points.block(0, 0, 4, 2) << std::endl;

    Eigen::Vector2d init = foot_points.block(0, 0, 4, 2).transpose()*Eigen::Vector4d::Constant(0.25);

    Eigen::Matrix<double, Eigen::Dynamic, 2> base_res = support_polytope_base_planner(foot_points, init, true);

    std::cout << base_res << std::endl;

    std::cout << foot_res.position_ts.block(0, 0, 6, 2);

    return 0;
}