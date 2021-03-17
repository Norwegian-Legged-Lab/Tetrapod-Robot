//TODO remove this code
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

void testDhTransform()
{
    // ---------- D-H Transform --------------
    double alpha_1 = -angle_utils::HALF_PI;
    double theta_1 = angle_utils::THIRD_PI;
    double a_1 = 1;
    double d_1 = 0;

    Kinematics K;
    kindr::HomTransformMatrixD t1 = K.GetDhTransform(a_1, alpha_1, d_1, theta_1);
    ROS_INFO_STREAM("t1: " << t1);

    kindr::Position3D pos = t1.transform(kindr::Position3D(0,0,0));

    ROS_INFO_STREAM("pos: " << pos);
}

void testSingleLegKinematics()
{
    Kinematics K;

    Eigen::Vector3d h_pos(0,0,0);

    double theta_hy = 0;
    double theta_hp = angle_utils::HALF_PI;
    double theta_kp = -angle_utils::HALF_PI;

    Eigen::Vector3d pos = K.SolveSingleLegForwardKinematics(h_pos,
                                                            theta_hy,
                                                            theta_hp,
                                                            theta_kp);
    
    ROS_INFO_STREAM("pos: " << pos);
}

void testEigen()
{
    Eigen::Matrix<double, 6, 1> twist;

    twist << 1,
             2,
             3,
             4,
             5,
             6;
    
    ROS_INFO_STREAM("twist: " << twist);

    //Eigen::Matrix<double, 3, 1> pos = twist.block(0,0,2,0);
    Eigen::Matrix<double, 3, 1> pos = twist.block(3,0,5,0);

    ROS_INFO_STREAM("pos: " << pos);
    
    Eigen::Vector3d pos2;
    pos2 << 1,2,3;

    ROS_INFO_STREAM("pos2: " << pos2);
}

void testForwardKinematics()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);

    q << 0, // base_x
         0, // base_y
         0, // base_z
         0, // base_roll
         0, // base_pitch
         0*angle_utils::THREE_QUARTERS_PI, // base_yaw
         0*angle_utils::HALF_PI, // FL-theta_hy
         0, // FL-theta_hp
         0, // FL-theta_kp
         0, // FR-theta_hy
         0, // FR-theta_hp
         0, // FR-theta_kp
         0, // RL-theta_hy
         0, // RL-theta_hp
         0, // RL-theta_kp
         0, // RR-theta_hy
         0, // RR-theta_hp
         0; // RR-theta_kp
    
    ROS_INFO_STREAM("q: " << q);


    FootstepPositions fPos;

    bool FK = K.SolveForwardKinematics(q, fPos);

    ROS_INFO_STREAM("fpos(0): " << fPos(0));
    ROS_INFO_STREAM("fpos(1): " << fPos(1));
    ROS_INFO_STREAM("fpos(2): " << fPos(2));
    ROS_INFO_STREAM("fpos(3): " << fPos(3));

}

void testSingeLegInverseKinematics()
{
    Kinematics K;
    Eigen::Vector3d h_pos(1,-1,0);
    ROS_INFO_STREAM("h_pos: " << h_pos);

    Eigen::Vector3d f_pos(4,-1,0);
    ROS_INFO_STREAM("f_pos: " << f_pos);

    Eigen::Vector3d joint_angles = K.SolveSingleLegInverseKinematics(h_pos, f_pos);
    ROS_INFO_STREAM("joint_angles: " << joint_angles);
}

void testInverseKinematics()
{
    Kinematics K;

    Twist q_b = Twist::Constant(0);
    ROS_INFO_STREAM("q_b: " << q_b);

    FootstepPositions f_pos;

    f_pos(0) = Eigen::Vector3d(4,1,0);
    f_pos(1) = Eigen::Vector3d(4,-1,0);
    f_pos(2) = Eigen::Vector3d(2,1,0);
    f_pos(3) = Eigen::Vector3d(2,-1,0);
    ROS_INFO_STREAM("f_pos(0): " << f_pos(0));
    ROS_INFO_STREAM("f_pos(1): " << f_pos(1));
    ROS_INFO_STREAM("f_pos(2): " << f_pos(2));
    ROS_INFO_STREAM("f_pos(3): " << f_pos(3));

    JointSpaceVector q_r;

    bool IK = K.SolveInverseKinematics(q_b, f_pos, q_r);

    ROS_INFO_STREAM("q_r: " << q_r);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "kinematics_node");
    ros::NodeHandle nh;

    //testSingleLegKinematics();
    //testDhTransform();
    //testEigen();
    ROS_INFO_STREAM("--------------- Test FK --------------");
    testForwardKinematics();
    //ROS_INFO_STREAM("--------------- Test Single Leg IK --------------");
    //testSingeLegInverseKinematics();
    ROS_INFO_STREAM("--------------- Test IK --------------");
    testInverseKinematics(); 

    ros::spin();
    return 0;
}