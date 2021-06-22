#include "ros/ros.h"
#include <ros/console.h>

#include "single_leg_controller/single_leg_controller.h"

int main(int argc, char **argv)
{
    Eigen::Matrix<double, 3, 1> q_start(M_PI/6.0, 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> q_ref;
    Eigen::Matrix<double, 3, 1> q_d_ref;
    Eigen::Matrix<double, 3, 1> q_dd_ref;

    double timer = 0.0;
    double time_end = 2.0;
    const double time_step = 0.010;

    double publish_frequency = 1.0/time_step;

    SingleLegController controller(publish_frequency, true);
    
    controller.initROS();

    ROS_INFO("Initialization complete");

    ros::Rate check_for_messages_rate(1);

    ros::Rate send_control_command_rate(publish_frequency);

    while(!controller.isInitialStateReceived())
    {
        controller.checkForNewMessages();

        check_for_messages_rate.sleep();

        ROS_INFO("WAITING FOR INITIAL STATE");
    }

    ROS_INFO("Initial state received");

    // Wait for a confirmation message before moving on
    while(!controller.readyToProceed())
    {
        controller.checkForNewMessages();

        check_for_messages_rate.sleep();

        ROS_INFO("WAITING FOR POSITION CONTROL START MESSAGE");
    }

    while(true)
    {
        controller.moveJointsToSetpoints();
    }

    return 0;
}