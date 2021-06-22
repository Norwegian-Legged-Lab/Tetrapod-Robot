#include "ros/ros.h"
#include <ros/console.h>

#include "single_leg_controller/single_leg_controller.h"

#include <Eigen/Core>

int main(int argc, char **argv)
{
    SingleLegController controller(1.0, true);

    controller.initROS();
    
    Eigen::Matrix<double, 3, 1> T;

    Eigen::Matrix<double, 3, 1> q(0.0, 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> q_d(0.0, 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> q_ref(0.0, 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> q_d_ref(0.0, 0.0, 0.0);
    Eigen::Matrix<double, 3, 1> q_dd_ref(0.0, 0.0, 0.0);

    controller.updateJointTorques(q_ref, q_d_ref, q_dd_ref, q, q_d);

    //ROS_INFO("T1: %f\t T2: %f\t T3: %f", T(0), T(1), T(2));

    return 0;
}