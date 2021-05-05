#include "ros/ros.h"
#include <ros/console.h>

#include "static_gait_controller/static_gait_controller.h"


int main(int argc, char **argv)
{
    double gait_speed = 0.2;
    double step_length = 0.4;
    double gait_width = 0.3;

    double gait_period = step_length/gait_speed;

    double iterations_per_gait_period = 100.0;
    ros::Rate control_rate(iterations_per_period/gait_period);
    
    ros::Rate check_for_messages_rate(1);

    StaticGaitController controller(step_length, gait_width, iterations_per_gait_period);

    controller.initROS();

    ROS_INFO("Initialization complete");

    controller.waitForReadyToProceedMessage();

    // Set the position controllers to the initial values

    controller.setInitialConfiguration();

    controller.waitForReadyToProceedMessage();

    while(ros::ok())
    {
        ros::spinOnce();
        updateFeetReferencePositionsInBody();
        updateReferenceJointAngles();
        sendJointPositionCommand();
        control_rate.sleep();

    }

    return 0;
}