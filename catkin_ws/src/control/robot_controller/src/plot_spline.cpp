#include "ros/ros.h"
#include "ros/console.h"
#include "sensor_msgs/JointState.h"

#include "modular_gait_controller/gaits.h"

int main(int argc, char **argv)
{
    int control_rate = 200;

    double a_max = 50.0;

    double rise_percentage = 0.25;

    double swing_period = 0.2;

    double step_distance = 0.2;

    double vel_cmd = 1.0;

    ros::init(argc, argv, "polynomial_publisher");

    ros::NodeHandle nh;

    ros::Publisher publisher = nh.advertise<sensor_msgs::JointState>("/trajectory", 1);

    ros::Rate loop_rate(control_rate);

    ros::Duration(3.0).sleep();

    int iteration = 0;

    int iteration_final = control_rate * swing_period;

    while(ros::ok() && (iteration <= iteration_final))
    {
        double t = double(iteration)/double(iteration_final)*swing_period;

        //double val = polynomialSpine(t, swing_period, step_distance, a_max, vel);
        double pos, vel, acc, jerk;

        //CalculatePolynomialTrajectory(t, swing_period, step_distance, a_max, vel_cmd, pos, vel, acc, jerk);
        CalculatePolynomialTrajectory(t, swing_period, rise_percentage, step_distance, vel_cmd, pos, vel, acc, jerk);

        ROS_INFO("I: %d\tT: %f\tP: %f\tV: %f\tA: %f\tJ: %f", iteration, t, pos, vel, acc, jerk);

        sensor_msgs::JointState msg;

        msg.header.stamp = ros::Time::now();

        msg.position.push_back(pos);
        msg.velocity.push_back(vel);
        msg.effort.push_back(acc);

        iteration ++;

        publisher.publish(msg);

        loop_rate.sleep();
    }

    ros::Duration(3.0).sleep();
}