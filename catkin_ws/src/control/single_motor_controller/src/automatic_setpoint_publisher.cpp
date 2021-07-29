#include "ros/ros.h"
#include <ros/console.h>

#include "std_msgs/Bool.h"
#include "std_msgs/Float32.h"

#include "single_motor_controller/single_motor_controller.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "automatic_setpoint_publisher_node");

    ros::NodeHandle node_handle;

    ros::Publisher ready_to_proceed_publisher = node_handle.advertise<std_msgs::Bool>("/readyToProceed", 10);

    ros::Publisher setpoint_publisher = node_handle.advertise<std_msgs::Float32>("/set_goal", 10);

    ros::Publisher keep_logging_publisher = node_handle.advertise<std_msgs::Bool>("/logging/continue", 10);

    ros::Rate publish_rate(0.25);

    uint8_t NUMBER_OF_SETPOINTS = 5;

    double setpoints[NUMBER_OF_SETPOINTS] = {60.0, -60.0, 40.0, -20.0, 0.0}; 

    std_msgs::Float32 setpoint_msg;

    std_msgs::Bool ready_to_proceed_msg;

    std_msgs::Bool keep_logging_msg;

    ready_to_proceed_msg.data = true;

    keep_logging_msg.data = true;

    ros::Duration(0.5).sleep();

    ready_to_proceed_publisher.publish(ready_to_proceed_msg);

    publish_rate.sleep();

    for(int i = 0; i < NUMBER_OF_SETPOINTS; i++)
    {
        setpoint_msg.data = setpoints[i];

        setpoint_publisher.publish(setpoint_msg);

        ROS_INFO("Setpoint %d published", i);

        publish_rate.sleep();
    }

    keep_logging_msg.data = false;

    keep_logging_publisher.publish(keep_logging_msg);

    ROS_INFO("Stop logging message published");

    return 0;
}

