#include "ros/ros.h"
#include <ros/console.h>

#include "state_estimator/state_estimator.h"


int main(int argc, char **argv)
{
    int controller_frequency = 200;

    double gait_period = 0.4;

    StateEstimator state_estimator(controller_frequency, gait_period);

    ros::Rate control_rate(controller_frequency);

    while(ros::ok())
    {   
        ros::spinOnce();
        state_estimator.UpdateStates();
        state_estimator.PrintStates();
        state_estimator.PublishBodyTwistState();
        control_rate.sleep();
    }
    

    return 0;
}