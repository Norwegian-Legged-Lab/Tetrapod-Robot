#include "ros/ros.h"
#include <ros/console.h>

#include "single_leg_controller/single_leg_controller.h"

int main(int argc, char **argv)
{
    enum CONTROL_MODE {POSITION, VELOCITY, TORQUE};

    // Choose what kind of controller to use
    const CONTROL_MODE control_mode = TORQUE;

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

    Eigen::Matrix<double, 3, 1> foot_goal_position(0.0, 0.4, -0.35);

    // Move the joint to the start position
    controller.moveFootToPosition(foot_goal_position);

    controller.setPoseGoal(foot_goal_position);

    int setpoint_loop_counter = 0;

    int setpoint = 0;
    
    while(true)
    {
        // Do a ROS spin to check if we have received any new messages
        controller.checkForNewMessages();
 
        if(controller.updatePoseControlJointTrajectoryReference())
        {
            if((setpoint == 0) && (setpoint_loop_counter > 1 * publish_frequency))
            {
                foot_goal_position(2) = -0.25;
                setpoint = 1;
                controller.setPoseGoal(foot_goal_position);
                ROS_WARN("S1");
            }
            else if((setpoint == 1) && (setpoint_loop_counter > 3 * publish_frequency))
            {
                foot_goal_position(2) = -0.35;
                setpoint = 2;
                controller.setPoseGoal(foot_goal_position);
                ROS_WARN("S2");
            }
            else if((setpoint == 2) && (setpoint_loop_counter > 5 * publish_frequency))
            {
                foot_goal_position(2) = -0.20;
                setpoint = 3;
                controller.setPoseGoal(foot_goal_position);
                ROS_WARN("S3");
            }
            else if(setpoint_loop_counter > 7 * publish_frequency)
            {
                return 0;
            }
        }

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
            //controller.updateJointTorqueCommands();
            controller.updateClosedLoopTorqueCommands();

            // Send a command to the motors
            controller.sendJointTorqueCommands();
        }

        ROS_INFO("SP: %d\t", setpoint);

        // Print all the states to the screen
        controller.printAllStates();

        // Write all the states to the logger
        controller.writeToLog();

        // Wait a short duration before starting the next loop
        send_control_command_rate.sleep();

        // Increment the loop counter
        setpoint_loop_counter++;
    }
    
    return 0;
}