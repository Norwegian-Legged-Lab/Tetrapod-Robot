#include "ros/ros.h"
#include <ros/console.h>

#include "robot_controller/robot_controller.h"


int main(int argc, char **argv)
{
    int controller_frequency = 200;

    double gait_period = 0.2;

    RobotController controller(controller_frequency, gait_period);

    ros::Rate control_rate(controller_frequency);

    ROS_INFO("Initialization complete");

    controller.PrintParameters();

    controller.waitForReadyToProceed();

    ROS_INFO("Position joint states received");

    controller.setInitialConfiguration();

    controller.waitForReadyToProceed();

    int i = 0;

    while(ros::ok())
    {   
        ros::spinOnce();
        controller.UpdateGaitState();
        //controller.UpdateFeetReferences();
        controller.UpdateFeetTrajectories();
        controller.UpdateJointCommands();
        controller.PrintFootPositions();
        //controller.PrintVelCommands();
        controller.sendJointPositionCommands();
        control_rate.sleep();
        i++;
    }

    return 0;
}