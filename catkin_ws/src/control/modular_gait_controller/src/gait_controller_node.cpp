#include "ros/ros.h"
#include <ros/console.h>
#include "modular_gait_controller/gaits.h"
#include "modular_gait_controller/gait_controller.h"

int main(int argc, char **argv)
{
    int freq = 200;
    double gait_period = 0.75;
    //std::function<Vector3d(double)> f1 = [](double t) {return Eigen::Vector3d(-0.1*std::cos(2*M_PI*t), 0, -0.25 + 0.03*std::sin(2*M_PI*t));};

    //std::function<Vector3d(double)> f2 = [](double t) {return Eigen::Vector3d(-0.1*std::cos(2*M_PI*t + M_PI), 0, -0.25 + 0.03*std::sin(2*M_PI*t + M_PI));};

    std::function<Vector3d(double)> fl = [](double t) {return classicGait(t, Kinematics::frontLeft);};
    
    std::function<Vector3d(double)> fr = [](double t) {return classicGait(t, Kinematics::frontRight);};
    
    std::function<Vector3d(double)> rl = [](double t) {return classicGait(t, Kinematics::rearLeft);};
    
    std::function<Vector3d(double)> rr = [](double t) {return classicGait(t, Kinematics::rearRight);};
    GaitController c(freq, gait_period, fl, fr, rl, rr);

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