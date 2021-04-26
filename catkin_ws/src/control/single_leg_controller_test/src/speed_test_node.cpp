#include "ros/ros.h"
#include <ros/console.h>

#include "single_leg_controller_test/single_leg_controller_test.h"

#define FREQUENCY_X 2.5
#define FREQUENCY_Y 2.0
#define FREQUENCY_Z 8.0
#define DAMPING_X 1.0
#define DAMPING_Y 1.0
#define DAMPING_Z 1.0

#define START_POS_X 0.0
#define START_POS_Y 0.0
#define START_POS_Z 0.0

#define MIDDLE_POS_X 1.0
#define MIDDLE_POS_Y 0.0
#define MIDDLE_POS_Z 0.2

#define END_POS_X 1.0
#define END_POS_Y 0.0
#define END_POS_Z 0.0

#define TIMESTEP 0.02
#define TIME_END 2.0
#define TIME_MIDDLE 1.0

int main(int argc, char **argv)
{
    SingleLegController single_leg_controller(TIMESTEP);


    single_leg_controller.setReferenceParameters
    (
        FREQUENCY_X, FREQUENCY_Y, FREQUENCY_Z,
        DAMPING_X, DAMPING_Y, DAMPING_Z
    );

    single_leg_controller.setCurrentReferencePosition(START_POS_X, START_POS_Y, START_POS_Z);

    single_leg_controller.setFootGoalPos(MIDDLE_POS_X, MIDDLE_POS_Y, MIDDLE_POS_Z);
    
    single_leg_controller.initROS();

    int timestep_middle = TIME_MIDDLE/TIMESTEP;
    int timestep_end = TIME_END/TIMESTEP;
    int current_timestep = 0;



    ROS_INFO("Initialization complete");

    ros::Rate check_for_ready_message_rate(1);

    ros::Rate send_control_command_rate(1.0/TIMESTEP);

    while(!single_leg_controller.checkIfReadyToMove())
    {
        single_leg_controller.checkForNewMessages();
        check_for_ready_message_rate.sleep();
        ROS_INFO("WAITING...");
    }

    while(current_timestep < timestep_middle)
    {
        single_leg_controller.updateSpeedControlCommands();
        single_leg_controller.sendSpeedJointCommand();
        current_timestep++;
        send_control_command_rate.sleep();
    }

    single_leg_controller.setCurrentReferencePosition(END_POS_X, END_POS_Y, END_POS_Z);
    while(current_timestep < timestep_end)
    {
        single_leg_controller.updateSpeedControlCommands();
        single_leg_controller.sendSpeedJointCommand();
        current_timestep++;
        send_control_command_rate.sleep();
    }

    ROS_INFO("COMPLETE");

    ros::spinOnce();



    return 0;
}