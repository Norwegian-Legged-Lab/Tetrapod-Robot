#include "ros/ros.h"
#include <ros/console.h>

#include "single_leg_controller/single_leg_controller.h"

int main(int argc, char **argv)
{
    uint8_t state = 1;

    double publish_frequency = 100.0;

    SingleLegController controller(publish_frequency, false);
    
    controller.initROS();

    // Disable this for simulator tests
    controller.setMotorGains();

    ros::Rate check_for_messages_rate(1);

    ros::Rate send_control_command_rate(publish_frequency);

    // Wait for initial robot state before proceeding
    while(!controller.isInitialStateReceived())
    {
        ROS_WARN("WAITING FOR INITIAL STATE");

        controller.checkForNewMessages();

        check_for_messages_rate.sleep();
    }

    ROS_INFO("Initial state received");

    // Wait for a confirmation message before moving on
    while(!controller.readyToProceed())
    {
        controller.checkForNewMessages();

        check_for_messages_rate.sleep();

        ROS_INFO("WAITING FOR POSITION CONTROL START MESSAGE");
    }
    controller.resetReadyToProceed();
    
    while(true)
    {
        controller.checkForNewMessages();
        controller.sendPositionCommand();
        controller.printAllStates();
        controller.writeToLog();
        send_control_command_rate.sleep();
    }
    
    return 0;
}