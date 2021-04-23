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

    bool target_reached = false;
    double trajectory_duration = 2.0;
    int total_number_of_timesteps = trajectory_duration/dt;
    int half_number_of_timesteps = total_number_of_timesteps/2;
    int current_timestep = 0;
    
    Listener listener;

    ros::Publisher reference_publisher = nh.advertise<sensor_msgs::JointState>("topic_name", 10);

    ros::Subscriber start_subscriber = nh.subscribe<std_msgs::Empty>("start_moving", 1, &Listener::readyToStartCallback, &listener);

    ros::Rate wait_for_start(10);

    Eigen::Matrix<double, 3, 1> state(0.0, 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> foot_vel(0.0, 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> joint_vel(0.0, 0.0, 0.0);
    Eigen::Matrix<double, 3, 3> foot_jacobian;

    while(!listener.ready_to_start)
    {
        ros::spinOnce();
        wait_for_start.sleep();
    }
    /*
    while((current_timestep < half_number_of_timesteps))
    {

        x_foot.updateFilter();
        y_foot.updateFilter();
        z_foot.updateFilter();

        state = x_foot.getState();
        foot_vel(0) = state(1);

        state = y_foot.getState();
        foot_vel(1) = state(1);

        state = z_foot.getState();
        foot_vel(2) = state(1);

    }

    z_foot.setReference(z_goal_2);
    while((current_timestep < total_number_of_timesteps))
    {
        
    }
    */
    return 0;
}
