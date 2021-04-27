#include "ros/ros.h"
#include <ros/console.h>

#include "single_leg_controller_test/single_leg_controller_test.h"

#define FREQUENCY_X 2.5
#define FREQUENCY_Y 2.0
#define FREQUENCY_Z 8.0
#define DAMPING_X 1.0
#define DAMPING_Y 1.0
#define DAMPING_Z 1.0

#define START_POS_X 0.433
#define START_POS_Y 0.25
#define START_POS_Z -0.25

#define MIDDLE_POS_X 0.0
#define MIDDLE_POS_Y 0.25
#define MIDDLE_POS_Z -0.10

#define END_POS_X -0.433
#define END_POS_Y 0.25
#define END_POS_Z -0.25

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

    // Wait for a confirmation message before moving on
    while(!single_leg_controller.checkIfReadyToMove())
    {
        single_leg_controller.checkForNewMessages();
        check_for_ready_message_rate.sleep();
        ROS_INFO("WAITING FOR POSITION CONTROL START MESSAGE");
    }

    // Use the position controller to move the leg to the desired start position
    while(!single_leg_controller.moveFootToPosition(START_POS_X, START_POS_Y, START_POS_Z));
    
    // Reset the is_target_position_reached flag 
    single_leg_controller.setTargetPositionToNotReached();
    /*
    // Reset the ready_to_move flag
    single_leg_controller.setNotReadyToMove();

    // Wait for a confirmation message before starting speed control
    while(!single_leg_controller.checkIfReadyToMove())
    {
        single_leg_controller.checkForNewMessages();
        check_for_ready_message_rate.sleep();
        ROS_INFO("WAITING FOR START MESSAGE FOR VELOCITY CONTROL");
    }

    // Use velocity control to move the foot to the mid position
    while(current_timestep < timestep_middle)
    {
        single_leg_controller.updateSpeedControlCommands();
        single_leg_controller.sendSpeedJointCommand();
        current_timestep++;
        send_control_command_rate.sleep();
    }

    // Use velocity control to move the foot to the end position
    single_leg_controller.setCurrentReferencePosition(END_POS_X, END_POS_Y, END_POS_Z);
    while(current_timestep < timestep_end)
    {
        single_leg_controller.updateSpeedControlCommands();
        single_leg_controller.sendSpeedJointCommand();
        current_timestep++;
        send_control_command_rate.sleep();
    }
    */
    ROS_INFO("COMPLETE");

    ros::spinOnce();

    return 0;
}