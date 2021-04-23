#include "ros/ros.h"

#include <Eigen/Core>

#include <kinematics/kinematics.h>

#include <filter_utils/filter_utils.h>

#include "std_msgs/Empty.h"

#include "sensor_msgs/JointState.h"


class Listener
{
    public:
        bool ready_to_start = false;

        void readyToStartCallback(const std_msgs::Empty::ConstPtr &msg);
};

void Listener::readyToStartCallback(const std_msgs::Empty::ConstPtr &msg)
{
    ready_to_start = true;
}

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
    
    Listener listener;

    ros::Publisher reference_publisher = nh.advertise<sensor_msgs::JointState>("topic_name", 10);

    ros::Subscriber start_subscriber = nh.subscribe<std_msgs::Empty>("start_moving", 1, &Listener::readyToStartCallback, &listener);

    ros::Rate loop_rate(100);

    while(ros::ok())
    {
        if(!listener.ready_to_start)
        {
            ros::spinOnce();
            loop_rate.sleep();
        }
        else
        {
            
        }
    }
    return 0;
}
