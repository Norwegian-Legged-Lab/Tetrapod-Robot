#include "ros/ros.h"
#include <ros/console.h>

#include "single_leg_controller/single_leg_controller.h"

int main(int argc, char **argv)
{
    bool SIMULATION = true;

    double publish_frequency = 100.0;

    SingleLegController controller(publish_frequency, SIMULATION);
    
    controller.initROS();

    if(SIMULATION == false)
    {
        controller.setMotorGains();
    }

    ros::Rate check_for_messages_rate(1);

    ros::Rate send_control_command_rate(publish_frequency);

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

    controller.moveJointsToCenter();
    
    while(true)
    {
        controller.checkForNewMessages();
        controller.updateGaitPhase();
        controller.updateFootTrajectoryReference();
        controller.updateJointReferences();
        controller.updateJointTorques();
        controller.printAllStates();
        controller.writeToLog();
        controller.sendTorqueCommand();
        send_control_command_rate.sleep();
    }
    
    return 0;
}