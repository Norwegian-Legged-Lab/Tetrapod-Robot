#include "ros/ros.h"
#include <ros/console.h>

#include "single_leg_controller/single_leg_controller.h"

int main(int argc, char **argv)
{
    SingleLegController controller;
    
    controller.initROS();

    ROS_INFO("Initialization complete");

    ros::Rate check_for_messages_rate(1);

    ros::Rate send_control_command_rate(50.0);

    while(!controller.initialStateReceived())
    {
        controller.checkForNewMessages();

        check_for_messages_rate.sleep();

        ROS_INFO("WAITING FOR INITIAL STATE");
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
        controller.increaseIterator();
        controller.updateSimpleFootTrajectory();
        controller.updateJointReferences();
        controller.updateJointTorques();
        controller.printAllStates();
        controller.sendTorqueCommand();
        send_control_command_rate.sleep();
    }
    
    
    while(controller.getState() != SingleLegController::State::swing)
    {
        controller.checkForNewMessages();
        controller.updateState();
        controller.printPercentage();
        controller.updateStanceFootPositionTrajectory();
        controller.printSpatialTrajectories();
        controller.updateJointReferences();
        controller.printJointTrajectories();
        controller.updateJointTorques();
        controller.printTorques();
        controller.sendTorqueCommand();
        send_control_command_rate.sleep();
    }
    
    return 0;
}