//TODO remove this code
#include "ros/ros.h"

#include <kindr/Core>

#include <Eigen/Core>

#include <math_utils/math_utils.h>

#include <kinematics/kinematics.h>

#include <debug_utils/debug_utils.h>


void someRandomTesting()
{
    // TODO Remove these 
    double yaw = math_utils::HALF_PI;
    double pitch = math_utils::HALF_PI;
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

void testKindr()
{
    double x_angle = math_utils::HALF_PI;
    double z_angle = math_utils::TWO_THIRDS_PI;

    Eigen::Vector3d unit_x(1,0,0);
    Eigen::Vector3d unit_z(0,0,1);

    kindr::RotationMatrixD R_z(kindr::AngleAxisD(z_angle, unit_z));
    kindr::RotationMatrixD R_x(kindr::AngleAxisD(x_angle, unit_x));

    kindr::RotationMatrixD R = R_z*R_x;

    ROS_INFO_STREAM("R_z: \n" << R_z.matrix());
    ROS_INFO_STREAM("R_x: \n" << R_x.matrix());
    ROS_INFO_STREAM("R = R_z*R_x: \n" << R.matrix());
}

void testDhTransform()
{
    // ---------- D-H Transform --------------
    double alpha_1 = -math_utils::HALF_PI;
    double theta_1 = math_utils::THIRD_PI;
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
    double theta_hp = math_utils::HALF_PI;
    double theta_kp = -math_utils::HALF_PI;

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

void testHipToFootTransform()
{
    Kinematics K;

    kindr::HomTransformMatrixD transformHipToFoot = K.GetHipToFootTransform(true,
                                                                            math_utils::degToRad(135),
                                                                            math_utils::degToRad(20),
                                                                            math_utils::degToRad(-90));

    kindr::Position3D hip_position(-0.151,0.185,1);

    kindr::Position3D positionHipToFoot = transformHipToFoot.transform(kindr::Position3D(0,0,0));

    Eigen::Vector3d f_pos = hip_position.vector() + positionHipToFoot.vector();

    ROS_INFO_STREAM("f_pos: \n" << f_pos);
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
         0, // base_yaw
         math_utils::degToRad(45), // FL-theta_hy
         math_utils::degToRad(-20), // FL-theta_hp
         math_utils::degToRad(90), // FL-theta_kp
         math_utils::degToRad(-45), // FR-theta_hy
         math_utils::degToRad(20), // FR-theta_hp
         math_utils::degToRad(-90), // FR-theta_kp
         math_utils::degToRad(135), // RL-theta_hy
         math_utils::degToRad(20), // RL-theta_hp
         math_utils::degToRad(-90), // RL-theta_kp
         math_utils::degToRad(-135), // RR-theta_hy
         math_utils::degToRad(-20), // RR-theta_hp
         math_utils::degToRad(90); // RR-theta_kp
    

    FootstepPositions fPos;

    bool FK = K.SolveForwardKinematics(q, fPos);

    debug_utils::printFootstepPositions(fPos);

}

void testSingeLegInverseKinematics()
{
    Kinematics K;
    Eigen::Vector3d h_pos(1,-1,0);
    ROS_INFO_STREAM("h_pos: " << h_pos);

    Eigen::Vector3d f_pos(4,-1,0);
    ROS_INFO_STREAM("f_pos: " << f_pos);

    Eigen::Vector3d joint_angles;
    
    K.SolveSingleLegInverseKinematics(false, h_pos, f_pos, joint_angles);
    
    ROS_INFO_STREAM("joint_angles: " << joint_angles);
}

void testInverseKinematics()
{
    Kinematics K;

    Twist q_b = Twist::Constant(0);

    q_b(0) = 0;
    q_b(1) = 0;
    q_b(2) = 1;
    q_b(3) = 0;
    q_b(4) = 0;
    q_b(5) = 0;

    ROS_INFO_STREAM("q_b: " << q_b);

    FootstepPositions f_pos;

    f_pos(0) = Eigen::Vector3d(0.553807,0.587807,0.666803);
    f_pos(1) = Eigen::Vector3d(0.553807, -0.587807, 0.66803);
    f_pos(2) = Eigen::Vector3d(-0.553807,0.587807,0.66803);
    f_pos(3) = Eigen::Vector3d(-0.553807,-0.587807,0.666803);

    JointSpaceVector q_r;

    bool IK = K.SolveInverseKinematics(q_b, f_pos, q_r);

    debug_utils::printJointState(q_r);
}

void testPositionBaseToFoot()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);

    q << 0, // base_x
         0, // base_y
         0, // base_z
         0, // base_roll
         0, // base_pitch
         0, // base_yaw
         math_utils::degToRad(45), // FL-theta_hy
         math_utils::degToRad(-20), // FL-theta_hp
         math_utils::degToRad(90), // FL-theta_kp
         math_utils::degToRad(-45), // FR-theta_hy
         math_utils::degToRad(20), // FR-theta_hp
         math_utils::degToRad(-90), // FR-theta_kp
         math_utils::degToRad(135), // RL-theta_hy
         math_utils::degToRad(20), // RL-theta_hp
         math_utils::degToRad(-90), // RL-theta_kp
         math_utils::degToRad(-135), // RR-theta_hy
         math_utils::degToRad(-20), // RR-theta_hp
         math_utils::degToRad(90); // RR-theta_kp
    
    FootstepPositions f_pos;

    f_pos(0) = K.GetPositionBaseToFootInB(Kinematics::TetrapodLeg::frontLeft, q);
    f_pos(1) = K.GetPositionBaseToFootInB(Kinematics::TetrapodLeg::frontRight, q);
    f_pos(2) = K.GetPositionBaseToFootInB(Kinematics::TetrapodLeg::rearLeft, q);
    f_pos(3) = K.GetPositionBaseToFootInB(Kinematics::TetrapodLeg::rearRight, q);

    debug_utils::printFootstepPositions(f_pos);
}

void testTranslationJacobian()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);

    q << 0, // base_x
         0, // base_y
         0, // base_z
         0, // base_roll
         0, // base_pitch
         0, // base_yaw
         0*math_utils::degToRad(45), // FL-theta_hy
         0*math_utils::degToRad(-20), // FL-theta_hp
         0*math_utils::degToRad(90), // FL-theta_kp
         0*math_utils::degToRad(-45), // FR-theta_hy
         0*math_utils::degToRad(20), // FR-theta_hp
         0*math_utils::degToRad(-90), // FR-theta_kp
         0*math_utils::degToRad(135), // RL-theta_hy
         0*math_utils::degToRad(20), // RL-theta_hp
         0*math_utils::degToRad(-90), // RL-theta_kp
         0*math_utils::degToRad(-135), // RR-theta_hy
         0*math_utils::degToRad(-20), // RR-theta_hp
         0*math_utils::degToRad(90); // RR-theta_kp

    Eigen::Matrix<double, 3, 18> J_fl = K.GetTranslationJacobianInW(Kinematics::TetrapodLeg::frontLeft, q);
    Eigen::Matrix<double, 3, 18> J_fr = K.GetTranslationJacobianInW(Kinematics::TetrapodLeg::frontRight, q);
    Eigen::Matrix<double, 3, 18> J_rl = K.GetTranslationJacobianInW(Kinematics::TetrapodLeg::rearLeft, q);
    Eigen::Matrix<double, 3, 18> J_rr = K.GetTranslationJacobianInW(Kinematics::TetrapodLeg::rearRight, q);

    ROS_INFO_STREAM("Translation Jacobian front left, J_P: \n" << J_fl);
    ROS_INFO_STREAM("Translation Jacobian front right, J_P: \n" << J_fr);
    ROS_INFO_STREAM("Translation Jacobian rear left, J_P: \n" << J_rl);
    ROS_INFO_STREAM("Translation Jacobian rear right, J_P: \n" << J_rr);

}

void testRotationJacobian()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);

    q << 0, // base_x
         0, // base_y
         0, // base_z
         0, // base_roll
         0, // base_pitch
         0, // base_yaw
         math_utils::degToRad(45), // FL-theta_hy
         0*math_utils::degToRad(-20), // FL-theta_hp
         0*math_utils::degToRad(90), // FL-theta_kp
         0*math_utils::degToRad(-45), // FR-theta_hy
         0*math_utils::degToRad(20), // FR-theta_hp
         0*math_utils::degToRad(-90), // FR-theta_kp
         0*math_utils::degToRad(135), // RL-theta_hy
         0*math_utils::degToRad(20), // RL-theta_hp
         0*math_utils::degToRad(-90), // RL-theta_kp
         0*math_utils::degToRad(-135), // RR-theta_hy
         0*math_utils::degToRad(-20), // RR-theta_hp
         0*math_utils::degToRad(90); // RR-theta_kp

    Eigen::Matrix<double, 3, 18> J_fl = K.GetRotationJacobianInW(Kinematics::TetrapodLeg::frontLeft, q);
    Eigen::Matrix<double, 3, 18> J_fr = K.GetRotationJacobianInW(Kinematics::TetrapodLeg::frontRight, q);
    Eigen::Matrix<double, 3, 18> J_rl = K.GetRotationJacobianInW(Kinematics::TetrapodLeg::rearLeft, q);
    Eigen::Matrix<double, 3, 18> J_rr = K.GetRotationJacobianInW(Kinematics::TetrapodLeg::rearRight, q);

    ROS_INFO_STREAM("Rotation Jacobian front left, J_R: \n" << J_fl);
    ROS_INFO_STREAM("Rotation Jacobian front right, J_R: \n" << J_fr);
    ROS_INFO_STREAM("Rotation Jacobian rear left, J_R: \n" << J_rl);
    ROS_INFO_STREAM("Rotation Jacobian rear right, J_R: \n" << J_rr);
}

void testJacobian()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);

    q << 0, // base_x
         0, // base_y
         0, // base_z
         0, // base_roll
         0, // base_pitch
         math_utils::degToRad(90), // base_yaw
         0*math_utils::degToRad(45), // FL-theta_hy
         0*math_utils::degToRad(-20), // FL-theta_hp
         0*math_utils::degToRad(90), // FL-theta_kp
         0*math_utils::degToRad(-45), // FR-theta_hy
         0*math_utils::degToRad(20), // FR-theta_hp
         0*math_utils::degToRad(-90), // FR-theta_kp
         0*math_utils::degToRad(135), // RL-theta_hy
         0*math_utils::degToRad(20), // RL-theta_hp
         0*math_utils::degToRad(-90), // RL-theta_kp
         0*math_utils::degToRad(-135), // RR-theta_hy
         0*math_utils::degToRad(-20), // RR-theta_hp
         0*math_utils::degToRad(90); // RR-theta_kp

    Eigen::Matrix<double, 6, 18> J_fl = K.GetJacobianInW(Kinematics::TetrapodLeg::frontLeft, q);
    Eigen::Matrix<double, 6, 18> J_fr = K.GetJacobianInW(Kinematics::TetrapodLeg::frontRight, q);
    Eigen::Matrix<double, 6, 18> J_rl = K.GetJacobianInW(Kinematics::TetrapodLeg::rearLeft, q);
    Eigen::Matrix<double, 6, 18> J_rr = K.GetJacobianInW(Kinematics::TetrapodLeg::rearRight, q);

    ROS_INFO_STREAM("Jacobian front left, J: \n" << J_fl);
    ROS_INFO_STREAM("Jacobian front right, J: \n" << J_fr);
    ROS_INFO_STREAM("Jacobian rear left, J: \n" << J_rl);
    ROS_INFO_STREAM("Jacobian rear right, J: \n" << J_rr);
}

void testMathPseudoInverse()
{
	Eigen::Matrix<double, 2, 3> J;
	J << 0.6339, 0.6941, 0.6122,
			 0.7077, 0.3663, 0.1599;
    
    Eigen::Matrix<double, 3, 2> pinvJ;
    Eigen::Matrix<double, 3, 2> dPinvJ;

    kindr::pseudoInverse(J, pinvJ);
    math_utils::dampedPseudoInverse(J, dPinvJ);

    ROS_INFO_STREAM("kindr pinvJ: \n" << pinvJ);
    ROS_INFO_STREAM("math_utils dPinvJ: \n" << dPinvJ);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "kinematics_node");
    ros::NodeHandle nh;

    //testSingleLegKinematics();
    //testDhTransform();
    //testEigen();
    //ROS_INFO_STREAM("--------------- Test Kindr --------------");
    //testKindr();
    //ROS_INFO_STREAM("--------------- Test Hip to Foot Transform --------------");
    //testHipToFootTransform();
    //ROS_INFO_STREAM("--------------- Test FK --------------");
    //testForwardKinematics();
    //ROS_INFO_STREAM("--------------- Test Single Leg IK --------------");
    //testSingeLegInverseKinematics();
    //ROS_INFO_STREAM("--------------- Test IK --------------");
    //testInverseKinematics(); 
    //ROS_INFO_STREAM("--------------- Test positionBaseToFoot --------------");
    //testPositionBaseToFoot();
    //ROS_INFO_STREAM("--------------- Test translationJacobian --------------");
    //testTranslationJacobian();
    //ROS_INFO_STREAM("--------------- Test rotationJacobian --------------");
    //testRotationJacobian();
    //ROS_INFO_STREAM("--------------- Test Jacobian --------------");
    //testJacobian();
    testMathPseudoInverse();

    ros::spin();
    return 0;
}