//TODO remove this code
#include "ros/ros.h"

#include <kindr/Core>

#include <Eigen/Core>

#include <math_utils/Core>

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

    kindr::HomTransformMatrixD transformHipToFoot = K.GetHipToBodyTransform(Kinematics::LegType::frontLeft,
                                                                            Kinematics::BodyType::foot,
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

    f_pos(0) = K.GetPositionBaseToBodyInB(Kinematics::LegType::frontLeft,
                                          Kinematics::BodyType::foot,
                                          q);
    f_pos(1) = K.GetPositionBaseToBodyInB(Kinematics::LegType::frontRight,
                                          Kinematics::BodyType::foot,
                                          q);
    f_pos(2) = K.GetPositionBaseToBodyInB(Kinematics::LegType::rearLeft,
                                          Kinematics::BodyType::foot,
                                          q);
    f_pos(3) = K.GetPositionBaseToBodyInB(Kinematics::LegType::rearRight,
                                          Kinematics::BodyType::foot,
                                          q);

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

    Eigen::Matrix<double, 3, 18> J_fl = K.GetTranslationJacobianInW(Kinematics::LegType::frontLeft, Kinematics::BodyType::foot, q);
    Eigen::Matrix<double, 3, 18> J_fr = K.GetTranslationJacobianInW(Kinematics::LegType::frontRight, Kinematics::BodyType::foot, q);
    Eigen::Matrix<double, 3, 18> J_rl = K.GetTranslationJacobianInW(Kinematics::LegType::rearLeft, Kinematics::BodyType::foot, q);
    Eigen::Matrix<double, 3, 18> J_rr = K.GetTranslationJacobianInW(Kinematics::LegType::rearRight, Kinematics::BodyType::foot, q);

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

    Eigen::Matrix<double, 3, 18> J_fl = K.GetRotationJacobianInW(Kinematics::LegType::frontLeft, Kinematics::BodyType::foot, q);
    Eigen::Matrix<double, 3, 18> J_fr = K.GetRotationJacobianInW(Kinematics::LegType::frontRight, Kinematics::BodyType::foot, q);
    Eigen::Matrix<double, 3, 18> J_rl = K.GetRotationJacobianInW(Kinematics::LegType::rearLeft, Kinematics::BodyType::foot, q);
    Eigen::Matrix<double, 3, 18> J_rr = K.GetRotationJacobianInW(Kinematics::LegType::rearRight, Kinematics::BodyType::foot, q);

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
         0*math_utils::degToRad(90), // base_yaw
         math_utils::degToRad(45),
         math_utils::degToRad(40),
         math_utils::degToRad(35),
         math_utils::degToRad(-45),
         math_utils::degToRad(-40),
         math_utils::degToRad(-35),
         math_utils::degToRad(135),
         math_utils::degToRad(-40),
         math_utils::degToRad(-35),
         math_utils::degToRad(-135),
         math_utils::degToRad(40),
         math_utils::degToRad(35);

    Eigen::Matrix<double, 3, 18> J_fb = K.GetTranslationJacobianInW(Kinematics::LegType::NONE, Kinematics::BodyType::base, q);
    Eigen::Matrix<double, 3, 18> J_fl = K.GetTranslationJacobianInW(Kinematics::LegType::frontLeft, Kinematics::BodyType::foot, q);
    Eigen::Matrix<double, 3, 18> J_fr = K.GetTranslationJacobianInW(Kinematics::LegType::frontRight, Kinematics::BodyType::foot, q);
    Eigen::Matrix<double, 3, 18> J_rl = K.GetTranslationJacobianInW(Kinematics::LegType::rearLeft, Kinematics::BodyType::foot, q);
    Eigen::Matrix<double, 3, 18> J_rr = K.GetTranslationJacobianInW(Kinematics::LegType::rearRight, Kinematics::BodyType::foot, q);

    ROS_INFO_STREAM("Jacobian floating base, J: \n" << J_fb);
    ROS_INFO_STREAM("Jacobian front left, J: \n" << J_fl);
    ROS_INFO_STREAM("Jacobian front right, J: \n" << J_fr);
    ROS_INFO_STREAM("Jacobian rear left, J: \n" << J_rl);
    ROS_INFO_STREAM("Jacobian rear right, J: \n" << J_rr);
}

void testBaseJacobian()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);

    q << 0, // base_x
         0, // base_y
         0, // base_z
         0, // base_roll
         0, // base_pitch
         0*math_utils::degToRad(90), // base_yaw
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

        
    Eigen::Matrix<double, 3, 18> J = K.GetTranslationJacobianInW(Kinematics::LegType::rearRight, Kinematics::BodyType::base, q);

    ROS_INFO_STREAM("Jacobian, J: \n" << J.transpose() * J);
}

void testMassMatrix()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);

    q << 0, // base_x
         0, // base_y
         0, // base_z
         0, // base_roll
         0, // base_pitch
         0*math_utils::degToRad(90), // base_yaw
         math_utils::degToRad(45),
         math_utils::degToRad(40),
         math_utils::degToRad(35),
         math_utils::degToRad(-45),
         math_utils::degToRad(-40),
         math_utils::degToRad(-35),
         math_utils::degToRad(135),
         math_utils::degToRad(-40),
         math_utils::degToRad(-35),
         math_utils::degToRad(-135),
         math_utils::degToRad(40),
         math_utils::degToRad(35);

    //Eigen::Matrix<double, 18, 18> M = K.GetSingleBodyMassMatrix(Kinematics::LegType::rearRight, Kinematics::BodyType::leg, q);
    Eigen::Matrix<double, 18, 18> M = K.GetMassMatrix(q);

    ROS_INFO_STREAM("Mass matrix, M: \n" << M);
}

void testGravitationalTerms()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);

    q << 0,
         0,
         0.42,
         0,
         0,
         0,
         math_utils::degToRad(45),
         math_utils::degToRad(40),
         math_utils::degToRad(35),
         math_utils::degToRad(-45),
         math_utils::degToRad(-40),
         math_utils::degToRad(-35),
         math_utils::degToRad(135),
         math_utils::degToRad(-40),
         math_utils::degToRad(-35),
         math_utils::degToRad(-135),
         math_utils::degToRad(40),
         math_utils::degToRad(35);

    Eigen::Matrix<double, 18, 1> g = K.GetGravitationalTerms(q);
    Eigen::Matrix<double, 18, 1> g_fl = K.GetSingleBodyGravitationalTerms(Kinematics::LegType::frontLeft, Kinematics::BodyType::leg, q);
    Eigen::Matrix<double, 18, 1> g_fr = K.GetSingleBodyGravitationalTerms(Kinematics::LegType::frontRight, Kinematics::BodyType::leg, q);

    ROS_INFO_STREAM("Gravitational terms, g: \n" << g);
    ROS_INFO_STREAM("Gravitational terms front left, g_fl: \n" << g_fl);
    ROS_INFO_STREAM("Gravitational terms front_right, g_fr: \n" << g_fr);
}

void testEulerDiff()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);
    GeneralizedCoordinates u = GeneralizedCoordinates::Constant(1);

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

    u << 0, // base_x
         0, // base_y
         0, // base_z
         1, // base_roll
         2, // base_pitch
         3, // base_yaw
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

    //Eigen::Matrix<double, 3, 3> rotationDiff = K.GetRotationMatrixWToBDiff(0,0,0,1,2,3);
    Eigen::Matrix<double, 6, 18> rotationDiff = K.GetJacobianInWDiff(Kinematics::LegType::frontLeft,
                                                                    Kinematics::BodyType::foot,
                                                                    q,
                                                                    u);

    ROS_INFO_STREAM("Rotation derivative, rotationDiff: \n" << rotationDiff);
}

void testCoriolisAndCentrifugalTerms()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);
    GeneralizedCoordinates u = GeneralizedCoordinates::Constant(0);

    q << 0,
         0,
         0.42,
         0,
         0,
         0,
         math_utils::degToRad(45),
         math_utils::degToRad(40),
         math_utils::degToRad(35),
         math_utils::degToRad(-45),
         math_utils::degToRad(-40),
         math_utils::degToRad(-35),
         math_utils::degToRad(135),
         math_utils::degToRad(-40),
         math_utils::degToRad(-35),
         math_utils::degToRad(-135),
         math_utils::degToRad(40),
         math_utils::degToRad(35);

    u << 1, // base_x
         0, // base_y
         0, // base_z
         2, // base_roll
         3, // base_pitch
         3, // base_yaw
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

    Eigen::Matrix<double, 18, 1> CCTerms = K.GetCoriolisAndCentrifugalTerms(q, u);

    ROS_INFO_STREAM("Coriolis and Centrifugal terms, b: \n" << CCTerms);
}

void testNullSpaceProjector()
{
    Eigen::Matrix<double, 2, 3> A;
    
    A << 5, 1, 0,
         0, 0, 1;

    Eigen::Matrix<double, 3, 3> N;

    Eigen::MatrixXd N_svd = math_utils::SVDNullSpaceProjector(A);

    math_utils::nullSpaceProjector(A,N);


    Eigen::Matrix<double, 3, 2> pinvA;

    kindr::pseudoInverse(A, pinvA);

    Eigen::Matrix<double, 3, 3> N_test = Eigen::Matrix<double, 3, 3>::Identity() - pinvA * A;

    ROS_INFO_STREAM("Null-space projector, N: \n" << N);
    ROS_INFO_STREAM("Null-space projector test, N: \n" << N_test);
    ROS_INFO_STREAM("SVD Null-space projector, N_svd: \n" << N_svd << "\n\n");

    ROS_INFO_STREAM("A*N = \n" << A*N << "\n");
    ROS_INFO_STREAM("A*N_svd = \n" << A*N_svd << "\n");
}

void testSVDNullSpaceProjector()
{
    Eigen::Matrix<double, 3, 3> A;
    Eigen::Matrix<double, 6, 4> B;
    Eigen::Matrix<double, 2, 3> C;
    Eigen::Matrix<double, 5, 9> D;

    A << 1, 0, 0,
         0, 1, 0,
         0, 0, 1;
    B << 1, 0, 0, 0,
         0, 0, 0, 0,
         0, 0, 0, 0,
         0, 0, 1, 0,
         0, 0, 0, 0,
         0, 0, 0, 0;
    C.setRandom();
    D.setRandom();

    Eigen::MatrixXd N_A = math_utils::SVDNullSpaceProjector(A);
    Eigen::MatrixXd N_B = math_utils::SVDNullSpaceProjector(B);
    Eigen::MatrixXd N_C = math_utils::SVDNullSpaceProjector(C);
    Eigen::MatrixXd N_D = math_utils::SVDNullSpaceProjector(D);

    ROS_INFO_STREAM("N_A = \n" << N_A << "\n\n\n");
    ROS_INFO_STREAM("N_B = \n" << N_B << "\n\n\n");
    ROS_INFO_STREAM("N_C = \n" << N_C << "\n\n\n");
    ROS_INFO_STREAM("N_D = \n" << N_D << "\n\n\n");

    ROS_INFO_STREAM("A*N_A = \n" << A*N_A << "\n\n");
    ROS_INFO_STREAM("B*N_B = \n" << B*N_B << "\n\n");
    ROS_INFO_STREAM("C*N_C = \n" << C*N_C << "\n\n");
    ROS_INFO_STREAM("D*N_D = \n" << D*N_D << "\n\n");

}

void testContactJacobian()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);

    q << 0, // base_x
         0, // base_y
         0, // base_z
         0, // base_roll
         0, // base_pitch
         0*math_utils::degToRad(90), // base_yaw
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

        
    std::vector<Kinematics::LegType> legs {Kinematics::LegType::rearLeft, Kinematics::LegType::frontLeft, Kinematics::LegType::rearRight};

    Eigen::MatrixXd J = K.GetContactJacobianInW(legs, q);

    ROS_INFO_STREAM("Contact Jacobian, J_c: \n" << J);
}

void testEigenStacking()
{
    Eigen::Matrix<double, 3, 18> A1;
    Eigen::Matrix<double, 4, 18> A2;
    Eigen::Matrix<double, 3, 18> A3;
    Eigen::Matrix<double, 2, 18> A4;

    A1.setZero();
    A2.setIdentity();
    A3.setConstant(100);
    A4.setRandom();

    Eigen::Matrix<Eigen::MatrixXd, Eigen::Dynamic, 1> A;

    A.resize(4, 1);

    A(0) = A1;
    A(1) = A2;
    A(2) = A3;
    A(3) = A4;

    Eigen::MatrixXd A_stacked;

    for (size_t i = 0; i < A.rows(); i++)
    {
        Eigen::MatrixXd A_stacked_tmp = A_stacked;

        A_stacked.resize(A_stacked_tmp.rows() + A(i).rows(), A(i).cols());

        A_stacked << A_stacked_tmp,
                     A(i);

        ROS_INFO_STREAM("A_stacked at iteration " << i << ": \n" << A_stacked << "\n\n");
    }


    //A_stacked.resize(A1.rows() + A2.rows() + A3.rows(), A1.cols());
    //A_stacked << A1,
    //             A2,
    //             A3;

    //Eigen::MatrixXd A_stacked_tmp = A_stacked;

    //A_stacked.resize(A_stacked_tmp.rows() + A4.rows(), A4.cols());

    //A_stacked << A_stacked_tmp,
    //             A3;

    //ROS_INFO_STREAM("A_stacked: \n" << A_stacked);

}

void testRotationWToC()
{
    Kinematics kinematics;

    double yaw = math_utils::THIRD_PI;

    Eigen::Matrix3d rotationWToC = kinematics.GetRotationMatrixWToC(0, 0, yaw);

    Eigen::Vector3d h = rotationWToC * Eigen::Vector3d(1, 0, 0);
    Eigen::Vector3d l = rotationWToC * Eigen::Vector3d(0, 1, 0);
    Eigen::Vector3d n = Eigen::Vector3d(0, 0, 1);

    ROS_INFO_STREAM("h: \n" << h << "\n");
    ROS_INFO_STREAM("l: \n" << l << "\n");
    ROS_INFO_STREAM("n: \n" << n << "\n");
}

void testContactForceLimitsMatrix()
{
    Eigen::MatrixXd A;

    int n_c = 4;

    int state_dim = 18 + 3*n_c;

    double mu = 1;

    Eigen::Vector3d h(1,0,0);
    Eigen::Vector3d l(0,1,0);
    Eigen::Vector3d n(0,0,1);

    A.resize(4*n_c, state_dim);

    for (size_t i = 0; i < n_c; i++)
    {
        A.block(4*i, 0, 1, state_dim).setZero();
        A.block(4*i, 18 + 3*i, 1, 3) = (h.transpose() - n.transpose() * mu);

        A.block(4*i + 1, 0, 1, state_dim).setZero();
        A.block(4*i + 1, 18 + 3*i, 1, 3) = - (h.transpose() + n.transpose() * mu);

        A.block(4*i + 2, 0, 1, state_dim).setZero();
        A.block(4*i + 2, 18 + 3*i, 1, 3) = (l.transpose() - n.transpose() * mu);

        A.block(4*i + 3, 0, 1, state_dim).setZero();
        A.block(4*i + 3, 18 + 3*i, 1, 3) = - (l.transpose() + n.transpose() * mu);
    }

    ROS_INFO_STREAM("A: \n" << A);
}

void testControlFrame()
{
    Kinematics K;

    GeneralizedCoordinates q = GeneralizedCoordinates::Constant(0);
    GeneralizedCoordinates u = GeneralizedCoordinates::Constant(0);

    q << 0,
         0,
         0,
         math_utils::degToRad(10),
         math_utils::degToRad(5),
         math_utils::degToRad(0),
         0*math_utils::degToRad(45),
         0*math_utils::degToRad(40),
         0*math_utils::degToRad(35),
         0*math_utils::degToRad(-45),
         0*math_utils::degToRad(-40),
         0*math_utils::degToRad(-35),
         0*math_utils::degToRad(135),
         0*math_utils::degToRad(-40),
         0*math_utils::degToRad(-35),
         0*math_utils::degToRad(-135),
         0*math_utils::degToRad(40),
         0*math_utils::degToRad(35);

    Eigen::Matrix3d rotWToC = K.GetRotationMatrixWToC(0, 0, q(5));

    Eigen::MatrixXd J_P_inB = K.GetTranslationJacobianInB(Kinematics::LegType::frontLeft,
                                                          Kinematics::BodyType::foot,
                                                          q.bottomRows(12));

    Eigen::MatrixXd J_P_inC = K.GetTranslationJacobianInC(Kinematics::LegType::frontLeft,
                                                          Kinematics::BodyType::foot,
                                                          q);

    Eigen::MatrixXd J_P_inW = K.GetTranslationJacobianInW(Kinematics::LegType::frontLeft,
                                                          Kinematics::BodyType::foot,
                                                          q);
    Eigen::MatrixXd J_P_inC2 = rotWToC.inverse() * K.GetTranslationJacobianInW(Kinematics::LegType::frontLeft,
                                                                     Kinematics::BodyType::foot,
                                                                     q);

    ROS_INFO_STREAM("J_P_inB: \n" << J_P_inB << "\n");
    ROS_INFO_STREAM("J_P_inC: \n" << J_P_inC << "\n");
    ROS_INFO_STREAM("J_P_inW: \n" << J_P_inW << "\n");
    ROS_INFO_STREAM("J_P_inC2: \n" << J_P_inC2 << "\n");

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
    //ROS_INFO_STREAM("--------------- Test Mass Matrix -----------");
    //testMassMatrix();
    //ROS_INFO_STREAM("--------------- Test Gravitational Terms -----------");
    //testGravitationalTerms();
    //ROS_INFO_STREAM("--------------- Test Rotation Derivative -------");
    //testEulerDiff();
    //ROS_INFO_STREAM("--------------- Test Coriolis And Centrifugal terms --------------");
    //testCoriolisAndCentrifugalTerms();
    //ROS_INFO_STREAM("--------------- Test null-space projector ------------------------");
    //testNullSpaceProjector();
    //testSVDNullSpaceProjector();
    //ROS_INFO_STREAM("--------------- Test contact Jacobian ----------------------------");
    //testContactJacobian();
    //ROS_INFO_STREAM("--------------- Test stacking ----------------------------");
    //testEigenStacking();
    //ROS_INFO_STREAM("--------------- Test rotationWToC ----------------------------");
    //testRotationWToC();
    ROS_INFO_STREAM("--------------- Test control frame ----------------------------");
    testControlFrame();



    ros::spin();
    return 0;
}