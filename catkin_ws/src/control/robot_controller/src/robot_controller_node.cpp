#include "ros/ros.h"
#include <ros/console.h>

#include "robot_controller/robot_controller.h"


int main(int argc, char **argv)
{

    int controller_frequency = 200;

    double gait_period = 0.4;

    double SET_TWIST_TIME = gait_period * 10.0;

    double LOG_START_TIME = gait_period * 20.0;;

    double LOG_PERIOD = gait_period * 3.0; // [s]

    RobotController controller(controller_frequency, gait_period);

    ros::Rate control_rate(controller_frequency);

    ROS_INFO("Initialization complete");

    controller.PrintParameters();

    controller.waitForReadyToProceed();

    //controller.ResetReadyToProceedFlag();

    ROS_INFO("Position joint states received");

    controller.WaitForInitialState();

    controller.RunStandUpSequence();

    //controller.SetReadyToProceedFlag();

    while(ros::ok() && !controller.CheckReadyToProceed())
    {
        ros::spinOnce();

        controller.sendJointPositionCommands();

        controller.WriteToLog();

        control_rate.sleep();
    }

    //controller.waitForReadyToProceed();

    int iteration = 0;

    while(ros::ok())
    {   
        ros::spinOnce();

        if(controller.UpdateGaitState())
        {
            controller.UpdateNonGuidanceCommands();
            controller.UpdateStepDistances();
        }

        controller.UpdateFeetTrajectories();
        controller.UpdateJointCommands();
        //controller.PrintFootPositions();
        //controller.PrintVelCommands();
        controller.sendJointPositionCommands();

        controller.WriteToLog();

        /*
        if(iteration >= int(LOG_START_TIME * controller_frequency) && (iteration <= int((LOG_START_TIME + LOG_PERIOD) * controller_frequency)))
        {
            controller.WriteToLog();
        }
        */

        control_rate.sleep();
        iteration++;
    }

    return 0;
}