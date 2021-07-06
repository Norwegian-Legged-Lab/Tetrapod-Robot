#include "ros/ros.h"
#include <ros/console.h>

#include "single_motor_controller/single_motor_controller.h"

int main(int argc, char **argv)
{
    double PUBLISH_FREQUENCY = 200.0;

    double STEP_TIME = 0.2;

    double APPLY_VELOCITY_DURATION = 1.0;

    double SETPOINT_VELOCITY = 360.0*M_PI/180.0; // rad/s

    SingleMotorController controller(PUBLISH_FREQUENCY);

    controller.initROS();

    controller.initializeMotor();

    ros::Rate check_for_messages_rate(1);

    ros::Rate send_command_rate(PUBLISH_FREQUENCY);
    
    // Make sure we have received initial states from the motor
    while(!controller.initialStateReceived())
    {
        controller.checkForNewMessages();
        ROS_INFO("Waiting for state");
        controller.printAll();
        check_for_messages_rate.sleep();
    }
    
    // Wait for the start signal
    while(!controller.readyToProceed())
    {
        controller.checkForNewMessages();
        ROS_INFO("Waiting for ready to proceed");
        controller.printAll();
        check_for_messages_rate.sleep();
    }

    // Apply zero torque for a fixed duration and log the states
    for(int i = 0; i < STEP_TIME*PUBLISH_FREQUENCY; i++)
    {
        controller.checkForNewMessages();
        //controller.setVelocityDirectly(0.0);
        controller.writeToLog();
        ROS_INFO("Start");
        controller.printAll();
        send_command_rate.sleep();
    }
    
    // Apply the desired step torque for a fixed duration and log the states
    for(int i = 0; i < APPLY_VELOCITY_DURATION*PUBLISH_FREQUENCY; i++)
    {
        controller.checkForNewMessages();
        controller.setVelocityDirectly(SETPOINT_VELOCITY);
        controller.writeToLog();
        ROS_INFO("HIGH");
        controller.printAll();
        send_command_rate.sleep();
    }
    
    // Apply zero torque until the program shuts down
    for (int i = 0; i < 100; i++)
    {
        controller.checkForNewMessages();
        controller.setVelocityDirectly(0.0);
        ROS_INFO("FINISHED");
        controller.printAll();
        send_command_rate.sleep();
    }

    return 0;
}

