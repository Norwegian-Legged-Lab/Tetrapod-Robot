//TODO remove
#include "ros/ros.h"

#include <kindr/Core>

#include <Eigen/Core>

#include <angle_utils/angle_utils.h>

#include <kinematics/kinematics.h>

void someRandomTesting()
{
    // TODO Remove these 
    double yaw = angle_utils::HALF_PI;
    double pitch = angle_utils::HALF_PI;
    double roll = 0;

    kindr::EulerAnglesZyxD R1(yaw, pitch, roll);

    ROS_INFO_STREAM("R1: " << R1);

    kindr::RotationMatrixD rotation(R1);

    ROS_INFO_STREAM("Rotation: " << rotation);

    kindr::Position3D position(0,0,0);

    ROS_INFO_STREAM("Position: " << position);

    kindr::HomTransformMatrixD t1(position, rotation);

    ROS_INFO_STREAM("t1: " << t1);


    kindr::RotationMatrixD R_z(kindr::AngleAxisD(yaw, Eigen::Vector3d(0,0,1)));
    kindr::RotationMatrixD R_y(kindr::AngleAxisD(pitch, Eigen::Vector3d(0,1,0)));
    kindr::RotationMatrixD R_x(kindr::AngleAxisD(roll, Eigen::Vector3d(1,0,0)));

    kindr::RotationMatrixD R2 = R_z*R_y*R_x;

    kindr::HomTransformMatrixD t2(position, R_z*R_y*R_x);

    ROS_INFO_STREAM("t2: " << t2);
}


int main(int argc, char **argv)
{
    ros::init(argc, argv, "kinematics_node");
    ros::NodeHandle nh;


    // ---------- D-H Transform --------------
    double alpha_1 = 0;
    double theta_1 = angle_utils::PI;
    double a_1 = 1;
    double d_1 = 0;

    Kinematics K;

    kindr::HomTransformMatrixD t1 = K.GetDhTransform(a_1, alpha_1, d_1, theta_1);

    //double a = angle_utils::degToRad(90);

    ROS_INFO_STREAM("t1: " << t1);

    ros::spin();
    return 0;
}