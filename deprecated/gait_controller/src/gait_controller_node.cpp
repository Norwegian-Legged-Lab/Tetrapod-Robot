#include "ros/ros.h"
#include <ros/console.h>

#include "gait_controller/gait_controller.h"


int main(int argc, char **argv)
{
    GaitController controller;

    controller.initROS();

    ros::Rate control_rate(200);
    
    ros::Rate check_for_messages_rate(1);

    ROS_INFO("Initialization complete");

    controller.waitForReadyToProceedMessage();

    controller.waitForPositionJointStates();

    ROS_INFO("Position joint states received");

    controller.setInitialConfiguration();

    controller.waitForReadyToProceedMessage();

    while(ros::ok())
    {
        ros::spinOnce();
        controller.updateFeetReferences();
        controller.updateJointCommands();
        controller.publishJointCommands();
        control_rate.sleep();
    }

    return 0;
}