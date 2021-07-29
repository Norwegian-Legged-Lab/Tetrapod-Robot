#include "ros/ros.h"
#include <ros/console.h>

#include "single_motor_controller/single_motor_controller.h"

int main(int argc, char **argv)
{
    bool USE_POSITION_CONTROL = false;

    double PUBLISH_FREQUENCY = 200.0;

    SingleMotorController controller(PUBLISH_FREQUENCY, USE_POSITION_CONTROL);

    controller.initROS();

    controller.initializeMotor();

    ros::Rate check_for_messages_rate(1);

    ros::Rate send_command_rate(PUBLISH_FREQUENCY);

    
    while(!controller.initialStateReceived())
    {
        controller.checkForNewMessages();
        ROS_INFO("Waiting for state");
        controller.printAll();
        check_for_messages_rate.sleep();
    }
    
    controller.moveToZero();
    
    while(!controller.readyToProceed())
    {
        controller.checkForNewMessages();
        ROS_INFO("Waiting for ready to proceed");
        check_for_messages_rate.sleep();
    }

    while(true)
    {
        controller.checkForNewMessages();
        controller.increaseIterator();
        controller.updateTrajectory();
        //controller.writeToLog();
        if(USE_POSITION_CONTROL)
        {
            controller.sendJointPositionCommand();
        }
        else
        {
            controller.sendJointTorqueCommand();
        }
        controller.printAll();
        if(controller.keepLogging())
        {
            controller.writeToLog();
        }
        send_command_rate.sleep();
    }

    return 0;
}

