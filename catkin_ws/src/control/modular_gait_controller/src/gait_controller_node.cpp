#include "ros/ros.h"
#include <ros/console.h>

#include "modular_gait_controller/gait_controller.h"

int main(int argc, char **argv)
{
    int freq = 200;
    double gait_period = 2.0;
    std::function<Vector3d(double)> f = [](double t) {return Eigen::Vector3d(0, 0, -0.36);};

    GaitController c(freq, gait_period, f, f, f, f);

    ros::Rate control_rate(freq);
    
    ROS_INFO("Started controller");

    c.waitForReadyToProceed();

    ROS_INFO("Got first ready_to_proceed");

    c.setInitialConfiguration();

    c.waitForReadyToProceed();

    while (ros::ok())
    {
        ros::spinOnce();
        c.UpdateFeetReferences();
        c.UpdateJointCommands();
        c.sendJointPositionCommands();
        c.increment();
        control_rate.sleep();
    }

    return 0;
}