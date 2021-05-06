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
        //ROS_INFO("Spin");
        ros::spinOnce();
        //ROS_INFO("Pause check");
        if(!controller.isControllerPaused())
        {
            //ROS_INFO("Publish");
            controller.publishTwistCommand();
        }
        //ROS_INFO("SLEEP");
        publish_rate.sleep();
        //ROS_INFO("LOOP_END");
    }

    return 0;
}