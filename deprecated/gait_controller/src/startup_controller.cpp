#include "ros/ros.h"
#include <ros/console.h>

#include "gait_controller/gait_controller.h"


int main(int argc, char **argv)
{
    GaitController controller;

    controller.initROS();

    ROS_INFO("Initialization complete");

    controller.waitForReadyToProceedMessage();

    ROS_INFO("Ready to proceed received");

    controller.standUp();

    return 0;
}