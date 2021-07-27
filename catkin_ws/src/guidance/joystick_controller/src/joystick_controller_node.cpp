#include "ros/ros.h"

#include "joystick_controller/joystick_controller.h"

int main(int argc, char **argv)
{
    JoystickController controller;

    controller.initROS();

    ROS_INFO("Initialization complete");

    ros::Rate publish_rate(50.0);

    while(ros::ok())
    {
        ros::spinOnce();
        if(!controller.isControllerPaused())
        {
            controller.publishTwistCommand();
        }
        publish_rate.sleep();
    }

    return 0;
}