#include "ros/ros.h"
#include <ros/console.h>

#include "single_leg_controller/single_leg_controller.h"

int main(int argc, char **argv)
{
    // Set the publish frequency 
    const double PUBLISH_FREQUENCY = 200;

    // Create a SingleLegController instance which controls and interfaces with the motors
    SingleLegController controller(PUBLISH_FREQUENCY);
    
    // Set up ROS communication
    controller.initROS();

    // Set the for which we check for new incomming messages
    ros::Rate check_for_messages_rate(1);

    // Set the control command rate
    ros::Rate send_control_command_rate(PUBLISH_FREQUENCY);
    
    // Wait for initial states from the actuators
    while(!controller.initialStateReceived())
    {
        // Do a ROS spin to check if we have received any new messages
        controller.checkForNewMessages();

        // Wait for a small duration
        check_for_messages_rate.sleep();

        // Report that we are waiting for initial states
        ROS_INFO("WAITING FOR INITIAL STATE");
    }

    // Report that we have received the initial states
    ROS_INFO("Initial state received");

    // Wait for a confirmation message before moving on
    while(!controller.readyToProceed())
    {
        // Do a ROS spin to check if we have received any new messages
        controller.checkForNewMessages();

        // Wait for a small duration
        check_for_messages_rate.sleep();

        // Report that we are waiting for start signal
        ROS_INFO("WAITING FOR START MESSAGE");
    }

    // Reset the ready to proceed flag
    controller.resetReadyToProceed();

    while(true)
    {
        // Do a ROS spin to check if we have received any new messages
        controller.checkForNewMessages();

        // Update the estimated joint states of the robot based on the latest available information
        controller.updateState();

        // Update the setpoint trajectory
        controller.updateSetpointTrajectory();

        // Send the position controller
        controller.sendPositionCommand();

        // Print all the states to the screen
        controller.printAllStates();

        // Write all the states to the logger
        controller.writeToLog();
        
        // Wait a short duration before starting the next loop
        send_control_command_rate.sleep();
    }
    
    return 0;
}