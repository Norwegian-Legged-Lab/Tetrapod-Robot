#include "ros/ros.h"
#include <ros/console.h>

#include "static_gait_controller/static_gait_controller.h"


int main(int argc, char **argv)
{
    double gait_speed = 0.6;
    double step_length = 0.5;
    double gait_width = 0.45;
    double shoulder_height = 0.25;

    double gait_period = step_length/gait_speed;

    double iterations_per_gait_period = 100.0;

    StaticGaitController controller(step_length, gait_width, iterations_per_gait_period, shoulder_height);

    controller.initROS();

    ros::Rate control_rate(iterations_per_gait_period/gait_period);
    
    ros::Rate check_for_messages_rate(1);

    ROS_INFO("Initialization complete");

    controller.waitForReadyToProceedMessage();

    controller.waitForPositionJointStates();

    ROS_INFO("Position joint states received");

    controller.setInitialConfiguration();

    controller.waitForReadyToProceedMessage();

    while(ros::ok())
    {
        ros::spinOnce();
        controller.updateFeetReferencePositionsInBody();
        controller.updateReferenceJointAngles();
        controller.sendJointPositionCommand();
        control_rate.sleep();

    }

    return 0;
}