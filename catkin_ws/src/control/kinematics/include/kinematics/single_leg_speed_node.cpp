#include "ros/ros.h"

#include <eigen3/Core>

#include "filter_utils.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "single_leg_speed_test_node");
    ros::NodeHandle nh;

    double x_start = 0.0;
    double y_start = 0.0;
    double z_start = 0.0;

    double x_goal = 1.0;
    double y_goal = 0.0;
    double z_goal_1 = 0.3;
    double z_goal_2 = 0.0;

    double dt = 0.010;

    double omega_x = 1.0;
    double omega_y = 1.0;
    double omega_z = 1.0;
    double zeta_x = 1.0;
    double zeta_y = 1.0;
    double zeta_z = 1.0;
    
    ThirdOrderFilter x_foot(dt, x_start, x_goal, omega_x, zeta_x);
    ThirdOrderFilter y_foot(dt, y_start, y_goal, omega_y, zeta_y);
    ThirdOrderFilter z_foot(dt, z_start, z_goal_1, omega_z, zeta_z);
    
    

    return 0;
}