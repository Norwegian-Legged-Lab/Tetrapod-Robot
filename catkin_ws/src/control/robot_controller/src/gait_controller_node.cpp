#include "ros/ros.h"
#include <ros/console.h>

#include "robot_controller/robot_controller.h"


int main(int argc, char **argv)
{
    bool USE_GUIDANCE_CONTROL = false;

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

    ROS_INFO("Position joint states received");

    controller.setInitialConfiguration();

    controller.waitForReadyToProceed();

    int iteration = 0;

    while(ros::ok())
    {   
        ros::spinOnce();

        if(iteration == int(SET_TWIST_TIME * controller_frequency))
        {
            controller.SetTwistCommand(1.0, 0.0, 0.0);
        }

        if(controller.UpdateGaitState())
        {
            if(USE_GUIDANCE_CONTROL)
            {
                controller.UpdateGuidanceCommands();
            }
            else
            {
                controller.UpdateNonGuidanceCommands();
            }
            controller.UpdateStepDistances();
        }

        //controller.UpdateFeetReferences();
        controller.UpdateFeetTrajectories();
        controller.UpdateJointCommands();
        controller.PrintFootPositions();
        //controller.PrintVelCommands();
        controller.sendJointPositionCommands();

        if(iteration >= int(LOG_START_TIME * controller_frequency) && (iteration <= int((LOG_START_TIME + LOG_PERIOD) * controller_frequency)))
        {
            controller.WriteToLog();
        }

        control_rate.sleep();
        iteration++;
    }

    return 0;
}