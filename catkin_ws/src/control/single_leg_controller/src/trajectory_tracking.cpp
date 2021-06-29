#include "ros/ros.h"
#include <ros/console.h>

#include "single_leg_controller/single_leg_controller.h"

int main(int argc, char **argv)
{
    enum CONTROL_MODE {POSITION, VELOCITY, TORQUE};

    // Choose what kind of controller to use
    const CONTROL_MODE control_mode = POSITION;

    const int NUMBER_OF_GAIT_CYCLES = 2;

    // Set the publish frequency 
    double publish_frequency = 200.0;

    // Create a SingleLegController instance which controls and interfaces with the motors
    SingleLegController controller(publish_frequency);
    
    // Set up ROS communication
    controller.initROS();

    // Set the rate for which we check for new incomming messages
    ros::Rate check_for_messages_rate(1);

    // Set the control command rate
    ros::Rate send_control_command_rate(publish_frequency);

    // Wait for initial states from the actuators
    while(!controller.isInitialStateReceived())
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

    // Move the joint to the start position
    controller.moveFootToNominalPosition();
    
    int number_of_phase_cycles = 0;

    while(true)
    {
        // Do a ROS spin to check if we have received any new messages
        controller.checkForNewMessages();

        // Update the estimated joint states of the robot based on the latest available information
        if(controller.updateGaitPhase())
        {
            number_of_phase_cycles++;

            if(number_of_phase_cycles >= NUMBER_OF_GAIT_CYCLES * 2)
            {
                return 0;
            }
        }

        // Update the setpoint trajectory
        controller.updateFootTrajectoryReference();

        // Send the position controller
        controller.updateJointReferences();

        if(control_mode == CONTROL_MODE::POSITION)
        {
            controller.sendJointPositionCommands();
        }
        else if(control_mode == CONTROL_MODE::VELOCITY)
        {
            // Update the joint velocity commands
            controller.updateJointVelocityCommands();

            // Send the the joint velocity commands to the motors
            controller.sendJointVelocityCommands();
        }
        else if(control_mode == CONTROL_MODE::TORQUE)
        {
            // Update the joint torques
            controller.updateJointTorqueCommands();

            // Send a command to the motors
            controller.sendJointTorqueCommands();
        }

        // Print all the states to the screen
        controller.printAllStates();

        // Write all the states to the logger
        controller.writeToLog();

        // Wait a short duration before starting the next loop
        send_control_command_rate.sleep();
    }
    
    return 0;
}