/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   kinematics.cpp                                       */
/*    DATE:   Mar 1, 2021                                          */
/*                                                                 */
/* Copyright (C) 2021 Paal Arthur S. Thorseth,                     */
/*                    Adrian B. Ghansah                            */
/*                                                                 */
/* This program is free software: you can redistribute it          */
/* and/or modify it under the terms of the GNU General             */
/* Public License as published by the Free Software Foundation,    */
/* either version 3 of the License, or (at your option) any        */
/* later version.                                                  */
/*                                                                 */
/* This program is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty     */
/* of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.         */
/* See the GNU General Public License for more details.            */
/*                                                                 */
/* You should have received a copy of the GNU General Public       */
/* License along with this program. If not, see                    */
/* <https://www.gnu.org/licenses/>.                                */
/*                                                                 */
/*******************************************************************/

#include <kinematics/kinematics.h>


// Constructor
Kinematics::Kinematics() 
{
    // Set min/max angles
    this->min_angles(0) = math_utils::degToRad(0);      // fl, hy
    this->min_angles(1) = math_utils::degToRad(-90);    // fl, hp
    this->min_angles(2) = math_utils::degToRad(-115);   // fl, kp
    this->min_angles(3) = math_utils::degToRad(-170);   // fr, hy
    this->min_angles(4) = math_utils::degToRad(-90);    // fr, hp
    this->min_angles(5) = math_utils::degToRad(-115);   // fr, kp
    this->min_angles(6) = math_utils::degToRad(10);     // rl, hy
    this->min_angles(7) = math_utils::degToRad(-90);    // rl, hp
    this->min_angles(8) = math_utils::degToRad(-115);   // rl, kp
    this->min_angles(9) = math_utils::degToRad(-180);   // rr, hy
    this->min_angles(10) = math_utils::degToRad(-90);   // rr, hp
    this->min_angles(11) = math_utils::degToRad(-115);  // rr, kp

    this->max_angles(0) = math_utils::degToRad(170);    // fl, hy
    this->max_angles(1) = math_utils::degToRad(90);     // fl, hp
    this->max_angles(2) = math_utils::degToRad(115);    // fl, kp
    this->max_angles(3) = math_utils::degToRad(0);      // fr, hy
    this->max_angles(4) = math_utils::degToRad(90);     // fr, hp
    this->max_angles(5) = math_utils::degToRad(115);    // fr, kp
    this->max_angles(6) = math_utils::degToRad(180);    // rl, hy
    this->max_angles(7) = math_utils::degToRad(90);     // rl, hp
    this->max_angles(8) = math_utils::degToRad(115);    // rl, kp
    this->max_angles(9) = math_utils::degToRad(-10);    // rr, hy
    this->max_angles(10) = math_utils::degToRad(90);    // rr, hp
    this->max_angles(11) = math_utils::degToRad(115);   // rr, kp

    // Set link lenghts
    this->L1 = 0.130;
    this->L2 = 0.220;
    //this->L3 = 0.279;
    this->L3 = 0.207; // Temporary while we are using the short lower legs

    this->LC1 = 0.1030;
    this->LC2 = 0.0257;
    this->LC3 = 0.1069;

    // Set position vectors
    this->positionBaseToFrontLeftInB << 0.151, 0.151, 0;
    this->positionBaseToFrontRightInB << 0.151, -0.151, 0;
    this->positionBaseToRearLeftInB << -0.151, 0.151, 0;
    this->positionBaseToRearRightInB << -0.151, -0.151, 0;

    // Set offsets
    this->flOffset = false;
    this->frOffset = true;
    this->rlOffset = true;
    this->rrOffset = false;

    // Set masses
    this->M0 = 10.1;
    this->M1 = 1.179;
    this->M2 = 1.394;
    this->M3 = 0.283;
    
    // Set inertia matrices

    this->I0 = GetInertiaMatrix(0.141, 0.143, 0.254, 0.0, 0.0, 0.0);
    this->I1_fl_rr = GetInertiaMatrix(0.002988, 0.003332, 0.004664, -0.001845, -0.000064,  0.000037);
    this->I1_fr_rl = GetInertiaMatrix(0.002988, 0.003332, 0.004664,  0.001845, -0.000064, -0.000037);
    this->I2 = GetInertiaMatrix(0.00174, 0.00660, 0.00644, 0.0, 0.00108, 0.0);
    this->I3 = GetInertiaMatrix(0.00006651, 0.00317406, 0.00318967, 0.00004913, 0.00000614, 0.0);
}

// Destructor
Kinematics::~Kinematics() {}

// Solve inverse kinematics
bool Kinematics::SolveInverseKinematics(const Twist &_q_b, const FootstepPositions &_f_pos, JointSpaceVector &_q_r)
{
    // Base world position
    Eigen::Vector3d basePositionInW(_q_b.block<3, 1>(0, 0));

    // Base orientation
    Eigen::Vector3d baseOrientation(_q_b.block<3, 1>(3, 0));

    Eigen::Vector3d positionFrontLeftFootInW(_f_pos(0));
    Eigen::Vector3d positionFrontRightFootInW(_f_pos(1));
    Eigen::Vector3d positionRearLeftFootInW(_f_pos(2));
    Eigen::Vector3d positionRearRightFootInW(_f_pos(3));

    // Transformation matrix from Body to World frame (R_b^w)
    kindr::RotationMatrixD transformationBToW(kindr::EulerAnglesZyxD(baseOrientation(2),
                                                                     baseOrientation(1),
                                                                     baseOrientation(0))
                                        );

    // Transformation matrix from World to Body frame (R_w^b)
    kindr::RotationMatrixD transformationWToB(transformationBToW.transpose());

    // The vector from the desired base position to the current foot position in the desired base frame 
    Vector3d positionFrontLeftFootInB(transformationWToB.matrix()*(positionFrontLeftFootInW - basePositionInW));
    Vector3d positionFrontRightFootInB(transformationWToB.matrix()*(positionFrontRightFootInW - basePositionInW));
    Vector3d positionRearLeftFootInB(transformationWToB.matrix()*(positionRearLeftFootInW - basePositionInW));
    Vector3d positionRearRightFootInB(transformationWToB.matrix()*(positionRearRightFootInW - basePositionInW));
    
    // A vector of hip positions given in the desired base frame
    Eigen::Matrix<Eigen::Vector3d, 4, 1> positionHipsInB;
    positionHipsInB(0) = positionBaseToFrontLeftInB;
    positionHipsInB(1) = positionBaseToFrontRightInB;
    positionHipsInB(2) = positionBaseToRearLeftInB;
    positionHipsInB(3) = positionBaseToRearRightInB;
    
    // Joint angles
    //_q_r.block<3, 1>(0, 0) = this->SolveSingleLegInverseKinematics(this->flOffset, positionHipsInB(0), positionFrontLeftFootInB);
    //_q_r.block<3, 1>(3, 0) = this->SolveSingleLegInverseKinematics(this->frOffset, positionHipsInB(1), positionFrontRightFootInB);
    //_q_r.block<3, 1>(6, 0) = this->SolveSingleLegInverseKinematics(this->rlOffset, positionHipsInB(2), positionRearLeftFootInB);
    //_q_r.block<3, 1>(9, 0) = this->SolveSingleLegInverseKinematics(this->rrOffset, positionHipsInB(3), positionRearRightFootInB);

    // Joint angles
    Eigen::Vector3d q_r_fl;
    Eigen::Vector3d q_r_fr;
    Eigen::Vector3d q_r_rl;
    Eigen::Vector3d q_r_rr;

    this->SolveSingleLegInverseKinematics(this->flOffset, positionHipsInB(0), positionFrontLeftFootInB, q_r_fl); 
    this->SolveSingleLegInverseKinematics(this->frOffset, positionHipsInB(1), positionFrontRightFootInB, q_r_fr);
    this->SolveSingleLegInverseKinematics(this->rlOffset, positionHipsInB(2), positionRearLeftFootInB, q_r_rl);
    this->SolveSingleLegInverseKinematics(this->rrOffset, positionHipsInB(3), positionRearRightFootInB, q_r_rr);

    _q_r.block<3, 1>(0, 0) = q_r_fl;
    _q_r.block<3, 1>(3, 0) = q_r_fr;
    _q_r.block<3, 1>(6, 0) = q_r_rl;
    _q_r.block<3, 1>(9, 0) = q_r_rr;

    return this->ValidateSolution(_q_r); 
}

// Solve forward kinematics
bool Kinematics::SolveForwardKinematics(const GeneralizedCoordinates &_q, 
                                        FootstepPositions &_f_pos)
{  

    // Base Pose
    kindr::Position3D base_position(_q.block(0,0,2,0));
    kindr::Position3D base_orientation(_q.block(3,0,5,0));

    // Rotation from World to Body frame (transform from Body to World)
    kindr::RotationMatrixD rotationWToB(kindr::EulerAnglesZyxD(base_orientation(2),
                                                               base_orientation(1),
                                                               base_orientation(0))
                                        );

    // Base to hip positions in World Frame.
    kindr::Position3D positionBaseToFrontLeftInW(rotationWToB.matrix()*positionBaseToFrontLeftInB);
    kindr::Position3D positionBaseToFrontRightInW(rotationWToB.matrix()*positionBaseToFrontRightInB);
    kindr::Position3D positionBaseToRearLeftInW(rotationWToB.matrix()*positionBaseToRearLeftInB);
    kindr::Position3D positionBaseToRearRightInW(rotationWToB.matrix()*positionBaseToRearRightInB);

    // Base to hip transformations
    kindr::HomTransformMatrixD transformBaseToFrontLeftHip(positionBaseToFrontLeftInW, rotationWToB);
    kindr::HomTransformMatrixD transformBaseToFrontRightHip(positionBaseToFrontRightInW, rotationWToB);
    kindr::HomTransformMatrixD transformBaseToRearLeftHip(positionBaseToRearLeftInW, rotationWToB);
    kindr::HomTransformMatrixD transformBaseToRearRightHip(positionBaseToRearRightInW, rotationWToB);

    // Hip to foot transformations
    kindr::HomTransformMatrixD transformFrontLeftHipToFoot = this->GetHipToBodyTransform(LegType::frontLeft,
                                                                                         BodyType::foot,
                                                                                         _q(6),
                                                                                         _q(7),
                                                                                         _q(8));
    kindr::HomTransformMatrixD transformFrontRightHipToFoot = this->GetHipToBodyTransform(LegType::frontRight,
                                                                                          BodyType::foot,
                                                                                          _q(9),
                                                                                          _q(10),
                                                                                          _q(11));
    kindr::HomTransformMatrixD transformRearLeftHipToFoot = this->GetHipToBodyTransform(LegType::rearLeft,
                                                                                        BodyType::foot,
                                                                                        _q(12),
                                                                                        _q(13),
                                                                                        _q(14));
    kindr::HomTransformMatrixD transformRearRightHipToFoot = this->GetHipToBodyTransform(LegType::rearRight,
                                                                                         BodyType::foot,
                                                                                         _q(15),
                                                                                         _q(16),
                                                                                         _q(17));

    // Base to foot transformations
    kindr::HomTransformMatrixD transformBaseToFrontLeftFoot = transformBaseToFrontLeftHip*transformFrontLeftHipToFoot;
    kindr::HomTransformMatrixD transformBaseToFrontRightFoot = transformBaseToFrontRightHip*transformFrontRightHipToFoot;
    kindr::HomTransformMatrixD transformBaseToRearLeftFoot = transformBaseToRearLeftHip*transformRearLeftHipToFoot;
    kindr::HomTransformMatrixD transformBaseToRearRightFoot = transformBaseToRearRightHip*transformRearRightHipToFoot;

    // Foot positions
    _f_pos(0) = base_position.vector() + transformBaseToFrontLeftFoot.transform(kindr::Position3D(0,0,0)).vector();
    _f_pos(1) = base_position.vector() + transformBaseToFrontRightFoot.transform(kindr::Position3D(0,0,0)).vector();
    _f_pos(2) = base_position.vector() + transformBaseToRearLeftFoot.transform(kindr::Position3D(0,0,0)).vector();
    _f_pos(3) = base_position.vector() + transformBaseToRearRightFoot.transform(kindr::Position3D(0,0,0)).vector();

    return true; //TODO do some criteria evaluation here
}

// Solve single leg forward kinematics
Vector3d Kinematics::SolveSingleLegForwardKinematics(const Vector3d &_h_pos,
                                                     const double &_theta_hy, 
                                                     const double &_theta_hp,
                                                     const double &_theta_kp)
{
    // Complete D-H transformation
    kindr::HomTransformMatrixD transformation = this->GetHipToBodyTransform(LegType::frontLeft,
                                                                            BodyType::foot,
                                                                            _theta_hy,
                                                                            _theta_hp,
                                                                            _theta_kp); 

    // End-effector position
    Eigen::Vector3d pos = _h_pos + transformation.transform(kindr::Position3D(0,0,0)).vector(); 

    return pos;
}

Vector3d Kinematics::SolveSingleLegForwardKinematics(const Vector3d &_joint_angles)
{
    Eigen::Matrix<double, 3, 1> zero = Eigen::Matrix<double, 3, 1>::Zero();

    return SolveSingleLegForwardKinematics(zero, _joint_angles(0), _joint_angles(1), _joint_angles(2));
}

bool Kinematics::SolveSingleLegInverseKinematics(const bool &_offset, const Vector3d &_h_pos, const Vector3d &_f_pos, Vector3d &_joint_angles)
{
    // Change of variables to center hip position.
    double x_e = _f_pos(0) - _h_pos(0);
    double y_e = _f_pos(1) - _h_pos(1);
    double z_e = _f_pos(2) - _h_pos(2);

    // Distance from hip to foot in the X-Y plane
    double normHipToFootInXY = std::sqrt( std::pow(x_e, 2) + std::pow(y_e, 2) );

    // Distance between hip pitch joint and foot
    double normHipPitchToFoot = std::sqrt( std::pow(normHipToFootInXY - this->L1, 2) + std::pow(z_e, 2) );

    // Angle from x-axis to the line going through the
    // foot point and hip pitch joint
    double zeta = std::atan2(-z_e, normHipToFootInXY - this->L1);

    // Angle between foot-knee-hip pitch joints
    double alpha = std::acos( ( std::pow(this->L2, 2) + std::pow(this->L3, 2) - std::pow(normHipPitchToFoot, 2) ) / ( 2 * this->L2 * this->L3 ) );

    if (std::isnan(alpha))
    {
        ROS_INFO_STREAM("IK alpha returned nan, nominator was: " <<  ( std::pow(this->L2, 2) + std::pow(this->L3, 2) - std::pow(normHipPitchToFoot, 2) ) / ( 2 * this->L2 * this->L3 )
                        << " and normHipPitchToFoot was: " << normHipPitchToFoot );
        
        return false;
    }

    // Angle between foot-hip pitch-knee joints
    double beta = std::acos( ( std::pow(normHipPitchToFoot, 2) + std::pow(this->L2, 2) - std::pow(this->L3, 2) ) / ( 2 * normHipPitchToFoot * this->L2 ) );

    if (std::isnan(beta))
    {
        ROS_INFO_STREAM("IK beta returned nan, nominator was: " <<  ( std::pow(normHipPitchToFoot, 2) + std::pow(this->L2, 2) - std::pow(this->L3, 2) ) / ( 2 * normHipPitchToFoot * this->L2 )
                        << " and normHipPitchToFoot was: " << normHipPitchToFoot );
        
        return false;
    }

    // Check offset and set angles accordingly
    if (_offset)
    {
        // Calculate theta_hy
        _joint_angles(0) = std::atan2(y_e, x_e);

        // Calculate theta_hp
        _joint_angles(1) = beta - zeta;

        // Calculate theta_kp
        _joint_angles(2) = alpha - math_utils::PI;
    }
    else
    {
        // Calculate theta_hy
        _joint_angles(0) = std::atan2(y_e, x_e);

        // Calculate theta_hp
        _joint_angles(1) = - beta + zeta;

        // Calculate theta_kp
        _joint_angles(2) = math_utils::PI - alpha;
    }

    return true;
}

bool Kinematics::SolveSingleLegInverseKinematics(const bool &_offset, const Vector3d &_f_pos, Vector3d &_joint_angles)
{
    Eigen::Matrix<double, 3, 1> zero = Eigen::Matrix<double, 3, 1>::Zero();
    return SolveSingleLegInverseKinematics(_offset, zero, _f_pos, _joint_angles);
}

// Denavit-Hartenberg Transformation
TransMatrix Kinematics::GetDhTransform(const double &_a, 
                                       const double &_alpha, 
                                       const double &_d, 
                                       const double &_theta)
{
    Eigen::Vector3d unit_z(0,0,1);
    Eigen::Vector3d unit_x(1,0,0);

    kindr::RotationMatrixD R_z(kindr::AngleAxisD(_theta, unit_z));
    kindr::RotationMatrixD R_x(kindr::AngleAxisD(_alpha, unit_x));

    kindr::Position3D position(_a*R_z.matrix()*unit_x + _d*unit_z);
    kindr::RotationMatrixD rotation = R_z*R_x;

    kindr::HomTransformMatrixD transformationAToB(position, rotation);

    return transformationAToB;
}

// Hip to body transform
TransMatrix Kinematics::GetHipToBodyTransform(const LegType &_leg,
                                              const BodyType &_body,
                                              const double &_theta_hy, 
                                              const double &_theta_hp, 
                                              const double &_theta_kp)
{
    // Declare possible transforms
    kindr::HomTransformMatrixD t1;
    kindr::HomTransformMatrixD t2;
    kindr::HomTransformMatrixD t3;

    // Check offset for D-H transformation
    double roll_offset = 0;

    switch (_leg)
    {
        case frontLeft:
        {
            roll_offset = - math_utils::HALF_PI;

            break;
        }
        case frontRight:
        {
            roll_offset = math_utils::HALF_PI;

            break;
        }
        case rearLeft:
        {
            roll_offset = math_utils::HALF_PI;

            break;
        }
        case rearRight:
        {
            roll_offset = - math_utils::HALF_PI;

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetHipToBodyTransform] Could not determine leg type!");


            std::abort();
            std::abort();

            break;
        }

    }


    switch (_body)
    {
        case hip:
        {
            // First D-H transformation
            t1 = this->GetDhTransform(this->LC1,
                                      roll_offset,
                                      0,
                                      _theta_hy);
            
            // Second D-H transformation (not applicable for hip)
            t2.setIdentity();

            // Third D-H transformation (not applicable for hip)
            t3.setIdentity();

            break;
        }
        case thigh:
        {
            // First D-H transformation
            t1 = this->GetDhTransform(this->L1,
                                      roll_offset,
                                      0,
                                      _theta_hy);
            
            // Second D-H transformation
            t2 = this->GetDhTransform(this->LC2,
                                      0,
                                      0,
                                      _theta_hp);

            // Third D-H transformation (not applicable for thigh)
            t3.setIdentity();

            break;
        }
        case leg:
        {
            // First D-H transformation
            t1 = this->GetDhTransform(this->L1,
                                      roll_offset,
                                      0,
                                      _theta_hy);
            
            // Second D-H transformation
            t2 = this->GetDhTransform(this->L2,
                                      0,
                                      0,
                                      _theta_hp);

            // Third D-H transformation
            t3 = this->GetDhTransform(this->LC3,
                                      0,
                                      0,
                                      _theta_kp);

            break;
        }
        case foot:
        {
            // First D-H transformation
            t1 = this->GetDhTransform(this->L1,
                                      roll_offset,
                                      0,
                                      _theta_hy);
            
            // Second D-H transformation
            t2 = this->GetDhTransform(this->L2,
                                      0,
                                      0,
                                      _theta_hp);

            // Third D-H transformation
            t3 = this->GetDhTransform(this->L3,
                                      0,
                                      0,
                                      _theta_kp);

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetHipToBodyTransform] Could not determine body type!");

            break;
        }
    }

    // Complete D-H transformation
    kindr::HomTransformMatrixD transformation = t1*t2*t3;

    return transformation;
}

// Rotation matrix from world to body (transform from body to world)
Eigen::Matrix<double, 3, 3> Kinematics::GetRotationMatrixWToB(const double &_roll,
                                                              const double &_pitch,
                                                              const double &_yaw)
{
    kindr::RotationMatrixD rotationWToB(kindr::EulerAnglesZyxD(_yaw,
                                                               _pitch,
                                                               _roll)
                                        );
    
    return rotationWToB.matrix();
}                                                              

// Time derivative of the rotation matrix from world to body
Eigen::Matrix<double, 3, 3> Kinematics::GetRotationMatrixWToBDiff(const double &_roll,
                                                                  const double &_pitch,
                                                                  const double &_yaw,
                                                                  const double &_roll_rate,
                                                                  const double &_pitch_rate,
                                                                  const double &_yaw_rate)
{
    kindr::RotationMatrixD rotationWToB(kindr::EulerAnglesZyxD(_yaw,
                                                               _pitch,
                                                               _roll)
                                        );

    kindr::LocalAngularVelocityD angularVelInB(_roll_rate,
                                               _pitch_rate,
                                               _yaw_rate);

    kindr::RotationMatrixDiffD rotationWToBDiff(rotationWToB, angularVelInB);

    return rotationWToBDiff.matrix();
}

// Rotation matrix from world to control (transform from control to world)
Eigen::Matrix<double, 3, 3> Kinematics::GetRotationMatrixWToC(const double &_roll,
                                                              const double &_pitch,
                                                              const double &_yaw)
{
    kindr::RotationMatrixD rotationWToC(kindr::EulerAnglesZyxD(_yaw,
                                                               _pitch,
                                                               _roll)
                                        );
    
    return rotationWToC.matrix();
}                                                              

// Time derivative of the rotation matrix from world to control
Eigen::Matrix<double, 3, 3> Kinematics::GetRotationMatrixWToCDiff(const double &_roll,
                                                                  const double &_pitch,
                                                                  const double &_yaw,
                                                                  const double &_roll_rate,
                                                                  const double &_pitch_rate,
                                                                  const double &_yaw_rate)
{
    kindr::RotationMatrixD rotationWToC(kindr::EulerAnglesZyxD(_yaw,
                                                               _pitch,
                                                               _roll)
                                        );

    kindr::LocalAngularVelocityD angularVelInC(_roll_rate,
                                               _pitch_rate,
                                               _yaw_rate);

    kindr::RotationMatrixDiffD rotationWToCDiff(rotationWToC, angularVelInC);

    return rotationWToCDiff.matrix();
}

// Rotation matrix from control to body (transform from body to control)
Eigen::Matrix<double, 3, 3> Kinematics::GetRotationMatrixCToB(const double &_roll,
                                                              const double &_pitch,
                                                              const double &_yaw)
{
    kindr::RotationMatrixD rotationCToB(kindr::EulerAnglesZyxD(_yaw,
                                                               _pitch,
                                                               _roll)
                                        );
    
    return rotationCToB.matrix();
}                                                              

// Time derivative of the rotation matrix from control to body
Eigen::Matrix<double, 3, 3> Kinematics::GetRotationMatrixCToBDiff(const double &_roll,
                                                                  const double &_pitch,
                                                                  const double &_yaw,
                                                                  const double &_roll_rate,
                                                                  const double &_pitch_rate,
                                                                  const double &_yaw_rate)
{
    kindr::RotationMatrixD rotationCToB(kindr::EulerAnglesZyxD(_yaw,
                                                               _pitch,
                                                               _roll)
                                        );

    kindr::LocalAngularVelocityD angularVelInB(_roll_rate,
                                               _pitch_rate,
                                               _yaw_rate);

    kindr::RotationMatrixDiffD rotationCToBDiff(rotationCToB, angularVelInB);

    return rotationCToBDiff.matrix();
}

// Position vector from base to body in body(base)-frame
Eigen::Matrix<double, 3, 1> Kinematics::GetPositionBaseToBodyInB(const LegType &_leg,
                                                                 const BodyType &_body,
                                                                 const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 3, 1> positionBaseToBodyInB;

    Eigen::Matrix<double, 3, 1> positionBaseToHipInB;

    double theta_hy;
    double theta_hp;
    double theta_kp;

    kindr::HomTransformMatrixD transformHipToBody;

    switch (_leg)
    {
        case frontLeft:
        {
            positionBaseToHipInB = this->positionBaseToFrontLeftInB;

            theta_hy = _q(6);
            theta_hp = _q(7);
            theta_kp = _q(8);

            break;
        }
        case frontRight:
        {
            positionBaseToHipInB = this->positionBaseToFrontRightInB;

            theta_hy = _q(9);
            theta_hp = _q(10);
            theta_kp = _q(11);

            break;
        }
        case rearLeft:
        {
            positionBaseToHipInB = this->positionBaseToRearLeftInB;

            theta_hy = _q(12);
            theta_hp = _q(13);
            theta_kp = _q(14);

            break;
        }
        case rearRight:
        {
            positionBaseToHipInB = this->positionBaseToRearRightInB;

            theta_hy = _q(15);
            theta_hp = _q(16);
            theta_kp = _q(17);

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetPositionBaseToBodyInB] Could not determine leg type!");

            std::abort();

            break;
        }
    }

    transformHipToBody = this->GetHipToBodyTransform(_leg, 
                                                     _body,
                                                     theta_hy,
                                                     theta_hp,
                                                     theta_kp);

    positionBaseToBodyInB = positionBaseToHipInB + transformHipToBody.transform(kindr::Position3D(0,0,0)).vector();


    return positionBaseToBodyInB;
}

// 3x3 Translation Jacobian in body frame
Eigen::Matrix<double, 3, 3> Kinematics::GetTranslationJacobianInB(const LegType &_leg,
                                                                  const BodyType &_body,
                                                                  const double &_theta_hy, 
                                                                  const double &_theta_hp, 
                                                                  const double &_theta_kp)
{
    Eigen::Matrix<double, 3, 3> J; // 3x3 Translation Jacobian

    double l1; // Length of link 1, if any, zero elsewise
    double l2; // Length of link 2, if any, zero elsewise 
    double l3; // Length of link 3, if any, zero elsewise

    double c1 = std::cos(_theta_hy); // cos(theta1)
    double s1 = std::sin(_theta_hy); // sin(theta1)

    double c2 = std::cos(_theta_hp); // cos(theta2)
    double s2 = std::sin(_theta_hp); // sin(theta2)

    double c23 = std::cos(_theta_hp + _theta_kp); // cos(theta2 + theta3)
    double s23 = std::sin(_theta_hp + _theta_kp); // sin(theta2 + theta3)

    switch (_body)
    {
        case hip:
        {
            l1 = this->LC1;
            l2 = 0;
            l3 = 0;

            break;
        } 
        case thigh:
        {
            l1 = this->L1;
            l2 = this->LC2;
            l3 = 0;

            break;
        } 
        case leg:
        {
            l1 = this->L1;
            l2 = this->L2;
            l3 = this->LC3;

            break;
        } 
        case foot:
        {
            l1 = this->L1;
            l2 = this->L2;
            l3 = this->L3;

            break;
        } 
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetTranslationJacobianInB] Could not determine body type!");

            std::abort();

            break;
        }
    }

    switch (_leg)
    {
        // Equivalent of case frontLeft || rearRight:
        case frontLeft:
        case rearRight:
        {
            J(0, 0) = (l1 + l2 * c2 + l3 * c23) * (-s1);
            J(1, 0) = (l1 + l2 * c2 + l3 * c23) * ( c1);
            J(2, 0) = 0.0;

            J(0, 1) = (-l2 * s2 - l3 * s23) * c1;
            J(1, 1) = (-l2 * s2 - l3 * s23) * s1;
            J(2, 1) = -l2 * c2 - l3 * c23;

            J(0, 2) = -l3 * s23 * c1;
            J(1, 2) = -l3 * s23 * s1;
            J(2, 2) = -l3 * c23;

            break;
        }
        // Equivalent of case frontRight || rearLeft:
        case frontRight:
        case rearLeft:
        {
            J(0, 0) = (l1 + l2 * c2 + l3 * c23) * (-s1);
            J(1, 0) = (l1 + l2 * c2 + l3 * c23) * ( c1);
            J(2, 0) = 0.0;

            J(0, 1) = (-l2 * s2 - l3 * s23) * c1;
            J(1, 1) = (-l2 * s2 - l3 * s23) * s1;
            J(2, 1) = l2 * c2 + l3 * c23;

            J(0, 2) = -l3 * s23 * c1;
            J(1, 2) = -l3 * s23 * s1;
            J(2, 2) = l3 * c23;

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetTranslationJacobianInB] Could not determine leg type!");

            std::abort();

            break;
        }
    }

    return J;
}

// 3x12 Translation Jacobian in body frame
Eigen::Matrix<double, 3, 12> Kinematics::GetTranslationJacobianInB(const LegType &_leg, 
                                                                   const BodyType &_body,
                                                                   const Eigen::Matrix<double, 12, 1> &_q_r)
{
    Eigen::Matrix<double, 3, 12> J = Eigen::Matrix<double, 3, 12>::Constant(0); // 3x12 Translation Jacobian

    int col = 0;     // Jacobian placement column index
    double theta_hy; // Hip yaw angle
    double theta_hp; // Hip pitch angle
    double theta_kp; // Knee pitch angle

    switch (_leg)
    {
        case frontLeft:
        {
            col = 0;
            theta_hy = _q_r(0);
            theta_hp = _q_r(1);
            theta_kp = _q_r(2);

            break;
        }
        case frontRight:
        {
            col = 3;
            theta_hy = _q_r(3);
            theta_hp = _q_r(4);
            theta_kp = _q_r(5);

            break;
        }
        case rearLeft:
        {
            col = 6;
            theta_hy = _q_r(6);
            theta_hp = _q_r(7);
            theta_kp = _q_r(8);

            break;
        }
        case rearRight:
        {
            col = 9;
            theta_hy = _q_r(9);
            theta_hp = _q_r(10);
            theta_kp = _q_r(11);

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetTranslationJacobianInB] Could not determine leg type!");

            std::abort();

            break;
        }

    }

    // Place 3x3 Jacobian at desired columns
    J.block<3,3>(0, col) = this->GetTranslationJacobianInB(_leg,
                                                           _body,
                                                           theta_hy,
                                                           theta_hp,
                                                           theta_kp);

    return J;
}

// 3x18 Translation Jacobian in world frame
Eigen::Matrix<double, 3, 18> Kinematics::GetTranslationJacobianInW(const LegType &_leg,
                                                                   const BodyType &_body,
                                                                   const Eigen::Matrix<double, 18, 1> &_q)
{
    
    Eigen::Matrix<double, 3, 18> J;                      // 3x18 Translation Jacobian in World frame
    Eigen::Matrix<double, 3, 12> translationJacobianInB; // 3x12 Translation Jacobian in Body frame
    Eigen::Matrix<double, 3, 1> positionBaseToBodyInB;   // Position vector from base to Body in Body(Base)-frame
    Eigen::Matrix<double, 3, 3> rotationWToB;            // Rotation from World to Body frame (transform from Body to World)

    rotationWToB = this->GetRotationMatrixWToB(_q(3),
                                               _q(4),
                                               _q(5));

    switch (_body)
    {
        case base:
        {
            translationJacobianInB.setZero();
            positionBaseToBodyInB.setZero();

            break;
        }
        // Equivalent of case hip || thigh || leg || foot:
        case hip:
        case thigh:
        case leg:
        case foot:
        {
            positionBaseToBodyInB = this->GetPositionBaseToBodyInB(_leg, 
                                                                   _body,
                                                                   _q);

            translationJacobianInB = this->GetTranslationJacobianInB(_leg, 
                                                                     _body,
                                                                     _q.bottomRows(12));

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetTranslationJacobianInW] Could not determine body type!");

            std::abort();

            break;
        }
    }


    J.block<3, 3>(0,0).setIdentity();
    J.block<3, 3>(0,3) = - rotationWToB * kindr::getSkewMatrixFromVector(positionBaseToBodyInB);
    J.block<3, 12>(0,6) = rotationWToB * translationJacobianInB; 

    return J;
} 

// 3x18 Translation Jacobian in control frame
Eigen::Matrix<double, 3, 18> Kinematics::GetTranslationJacobianInC(const LegType &_leg,
                                                                   const BodyType &_body,
                                                                   const Eigen::Matrix<double, 18, 1> &_q)
{
    
    Eigen::Matrix<double, 3, 18> J;                      // 3x18 Translation Jacobian in World frame
    Eigen::Matrix<double, 3, 12> translationJacobianInB; // 3x12 Translation Jacobian in Body frame
    Eigen::Matrix<double, 3, 1> positionBaseToBodyInB;   // Position vector from base to Body in Body(Base)-frame
    Eigen::Matrix<double, 3, 3> rotationCToB;            // Rotation from World to Control frame (transform from Body to Control)

    rotationCToB = this->GetRotationMatrixCToB(_q(3),
                                               _q(4),
                                               0);

    switch (_body)
    {
        case base:
        {
            translationJacobianInB.setZero();
            positionBaseToBodyInB.setZero();

            break;
        }
        // Equivalent of case hip || thigh || leg || foot:
        case hip:
        case thigh:
        case leg:
        case foot:
        {
            positionBaseToBodyInB = this->GetPositionBaseToBodyInB(_leg, 
                                                                   _body,
                                                                   _q);

            translationJacobianInB = this->GetTranslationJacobianInB(_leg, 
                                                                     _body,
                                                                     _q.bottomRows(12));

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetTranslationJacobianInW] Could not determine body type!");

            std::abort();

            break;
        }
    }


    J.block<3, 3>(0,0).setIdentity();
    J.block<3, 3>(0,3) = - rotationCToB * kindr::getSkewMatrixFromVector(positionBaseToBodyInB);
    J.block<3, 12>(0,6) = rotationCToB * translationJacobianInB; 

    return J;
} 

// 3x3 Time derivative of the translation Jacobian in body frame
Eigen::Matrix<double, 3, 3> Kinematics::GetTranslationJacobianInBDiff(const LegType &_leg,
                                                                      const BodyType &_body,
                                                                      const double &_theta_hy, 
                                                                      const double &_theta_hp, 
                                                                      const double &_theta_kp,
                                                                      const double &_dot_theta_hy,
                                                                      const double &_dot_theta_hp,
                                                                      const double &_dot_theta_kp)
{
    Eigen::Matrix<double, 3, 3> dot_J; // 3x3 Time derivative of the translation Jacobian

    double l1; // Length of link 1, if any, zero elsewise
    double l2; // Length of link 2, if any, zero elsewise 
    double l3; // Length of link 3, if any, zero elsewise

    double c1 = std::cos(_theta_hy); // cos(theta1)
    double s1 = std::sin(_theta_hy); // sin(theta1)

    double c2 = std::cos(_theta_hp); // cos(theta2)
    double s2 = std::sin(_theta_hp); // sin(theta2)

    double c23 = std::cos(_theta_hp + _theta_kp); // cos(theta2 + theta3)
    double s23 = std::sin(_theta_hp + _theta_kp); // sin(theta2 + theta3)

    switch (_body)
    {
        case hip:
        {
            l1 = this->LC1;
            l2 = 0;
            l3 = 0;

            break;
        } 
        case thigh:
        {
            l1 = this->L1;
            l2 = this->LC2;
            l3 = 0;

            break;
        } 
        case leg:
        {
            l1 = this->L1;
            l2 = this->L2;
            l3 = this->LC3;

            break;
        } 
        case foot:
        {
            l1 = this->L1;
            l2 = this->L2;
            l3 = this->L3;

            break;
        } 
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetTranslationJacobianInBDiff] Could not determine body type!");

            std::abort();

            break;
        }
    }

    switch (_leg)
    {
        // Equivalent of case frontLeft || rearRight:
        case frontLeft:
        case rearRight:
        {
            dot_J(0, 0) = ( l2 * s2 * _dot_theta_hp + l3 * s23 * (_dot_theta_hp + _dot_theta_kp) ) * (-s1)
                      + ( l1 + l2 * c2 + l3 * c23 ) * (-c1 * _dot_theta_hy);
            dot_J(1, 0) = ( l2 * s2 * _dot_theta_hp + l3 * s23 * (_dot_theta_hp + _dot_theta_kp) ) * (c1)
                      + ( l1 + l2 * c2 + l3 * c23 ) * (-s1 * _dot_theta_hy);
            dot_J(2, 0) = 0.0;

            dot_J(0, 1) = ( -l2 * c2 * _dot_theta_hp - l3 * c23 * (_dot_theta_hp + _dot_theta_kp) ) * (c1)
                      + ( -l2 * s2 - l3 * s23 ) * (-s1 * _dot_theta_hy);
            dot_J(1, 1) = ( -l2 * c2 * _dot_theta_hp - l3 * c23 * (_dot_theta_hp + _dot_theta_kp) ) * (s1)
                      + ( -l2 * s2 - l3 * s23 ) * (c1 * _dot_theta_hy);
            dot_J(2, 1) = l2 * s2 * _dot_theta_hp + l3 * s23 * (_dot_theta_hp + _dot_theta_kp);

            dot_J(0, 2) = ( -l3 * c23 * (_dot_theta_hp + _dot_theta_kp) ) * (c1)
                      + ( -l3 * s23 ) * (-s1 * _dot_theta_hy);
            dot_J(1, 2) = ( -l3 * c23 * (_dot_theta_hp + _dot_theta_kp) ) * (s1)
                      + ( -l3 * s23 ) * (c1 * _dot_theta_hy);
            dot_J(2, 2) = l3 * s23 * (_dot_theta_hp + _dot_theta_kp);

            break;
        }
        // Equivalent of case frontRight || rearLeft:
        case frontRight:
        case rearLeft:
        {
            dot_J(0, 0) = ( l2 * s2 * _dot_theta_hp + l3 * s23 * (_dot_theta_hp + _dot_theta_kp) ) * (-s1)
                      + ( l1 + l2 * c2 + l3 * c23 ) * (-c1 * _dot_theta_hy);
            dot_J(1, 0) = ( l2 * s2 * _dot_theta_hp + l3 * s23 * (_dot_theta_hp + _dot_theta_kp) ) * (c1)
                      + ( l1 + l2 * c2 + l3 * c23 ) * (-s1 * _dot_theta_hy);
            dot_J(2, 0) = 0.0;

            dot_J(0, 1) = ( -l2 * c2 * _dot_theta_hp - l3 * c23 * (_dot_theta_hp + _dot_theta_kp) ) * (c1)
                      + ( -l2 * s2 - l3 * s23 ) * (-s1 * _dot_theta_hy);
            dot_J(1, 1) = ( -l2 * c2 * _dot_theta_hp - l3 * c23 * (_dot_theta_hp + _dot_theta_kp) ) * (s1)
                      + ( -l2 * s2 - l3 * s23 ) * (c1 * _dot_theta_hy);
            dot_J(2, 1) = - l2 * s2 * _dot_theta_hp - l3 * s23 * (_dot_theta_hp + _dot_theta_kp);

            dot_J(0, 2) = ( -l3 * c23 * (_dot_theta_hp + _dot_theta_kp) ) * (c1)
                      + ( -l3 * s23 ) * (-s1 * _dot_theta_hy);
            dot_J(1, 2) = ( -l3 * c23 * (_dot_theta_hp + _dot_theta_kp) ) * (s1)
                      + ( -l3 * s23 ) * (c1 * _dot_theta_hy);
            dot_J(2, 2) = - l3 * s23 * (_dot_theta_hp + _dot_theta_kp);

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetTranslationJacobianInBDiff] Could not determine leg type!");

            std::abort();

            break;
        }
    }

    return dot_J;
}

// 3x12 Time derivative of the translation Jacobian in body frame
Eigen::Matrix<double, 3, 12> Kinematics::GetTranslationJacobianInBDiff(const LegType &_leg, 
                                                                       const BodyType &_body,
                                                                       const Eigen::Matrix<double, 12, 1> &_q_r,
                                                                       const Eigen::Matrix<double, 12, 1> &_dot_q_r)
{
    Eigen::Matrix<double, 3, 12> dot_J = Eigen::Matrix<double, 3, 12>::Constant(0); // 3x12 Time derivative of the translation Jacobian

    int col = 0;     // Jacobian placement column index

    double theta_hy; // Hip yaw angle
    double theta_hp; // Hip pitch angle
    double theta_kp; // Knee pitch angle
    double dot_theta_hy; // Hip yaw angle
    double dot_theta_hp; // Hip pitch angle
    double dot_theta_kp; // Knee pitch angle

    switch (_leg)
    {
        case frontLeft:
        {
            col = 0;
            theta_hy = _q_r(0);
            theta_hp = _q_r(1);
            theta_kp = _q_r(2);

            dot_theta_hy = _dot_q_r(0);
            dot_theta_hp = _dot_q_r(1);
            dot_theta_kp = _dot_q_r(2);

            break;
        }
        case frontRight:
        {
            col = 3;
            theta_hy = _q_r(3);
            theta_hp = _q_r(4);
            theta_kp = _q_r(5);

            dot_theta_hy = _dot_q_r(3);
            dot_theta_hp = _dot_q_r(4);
            dot_theta_kp = _dot_q_r(5);

            break;
        }
        case rearLeft:
        {
            col = 6;
            theta_hy = _q_r(6);
            theta_hp = _q_r(7);
            theta_kp = _q_r(8);

            dot_theta_hy = _dot_q_r(6);
            dot_theta_hp = _dot_q_r(7);
            dot_theta_kp = _dot_q_r(8);

            break;
        }
        case rearRight:
        {
            col = 9;
            theta_hy = _q_r(9);
            theta_hp = _q_r(10);
            theta_kp = _q_r(11);

            dot_theta_hy = _dot_q_r(9);
            dot_theta_hp = _dot_q_r(10);
            dot_theta_kp = _dot_q_r(11);

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetTranslationJacobianInBDiff] Could not determine leg type!");

            std::abort();

            break;
        }

    }

    // Place 3x3 Jacobian at desired columns
    dot_J.block<3,3>(0, col) = this->GetTranslationJacobianInBDiff(_leg,
                                                                   _body,
                                                                   theta_hy,
                                                                   theta_hp,
                                                                   theta_kp,
                                                                   dot_theta_hy,
                                                                   dot_theta_hp,
                                                                   dot_theta_kp);

    return dot_J;
}

// 3x18 Time derivative of the translation Jacobian in world frame
Eigen::Matrix<double, 3, 18> Kinematics::GetTranslationJacobianInWDiff(const LegType &_leg,
                                                                       const BodyType &_body,
                                                                       const Eigen::Matrix<double, 18, 1> &_q,
                                                                       const Eigen::Matrix<double, 18, 1> &_u)
{
    
    Eigen::Matrix<double, 3, 18> dot_J;                      // 3x18 Time derivative of the translation Jacobian in World frame
    Eigen::Matrix<double, 3, 12> translationJacobianInB;     // 3x12 Translation Jacobian in Body frame
    Eigen::Matrix<double, 3, 12> translationJacobianInBDiff; // 3x12 Time derivative of the translation Jacobian in Body frame
    Eigen::Matrix<double, 3, 1> positionBaseToBodyInB;       // Position vector from base to Body in Body(Base)-frame
    Eigen::Matrix<double, 3, 1> positionBaseToBodyInBDiff;   // Time derivative of the position vector from base to Body in Body(Base)-frame
    Eigen::Matrix<double, 3, 3> rotationWToB;                // Rotation from World to Body frame (transform from Body to World)
    Eigen::Matrix<double, 3, 3> rotationWToBDiff;            // Time derivative of the rotation from World to Body frame 


    switch (_body)
    {
        case base:
        {
            translationJacobianInB.setZero();
            positionBaseToBodyInB.setZero();
            rotationWToB.setZero();
            rotationWToBDiff.setZero();

            break;
        }
        // Equivalent of case hip || thigh || leg || foot:
        case hip:
        case thigh:
        case leg:
        case foot:
        {
            translationJacobianInB = this->GetTranslationJacobianInB(_leg, 
                                                                     _body,
                                                                     _q.bottomRows(12));

            translationJacobianInBDiff = this->GetTranslationJacobianInBDiff(_leg,
                                                                             _body,
                                                                             _q.bottomRows(12),
                                                                             _u.bottomRows(12));

            positionBaseToBodyInB = this->GetPositionBaseToBodyInB(_leg, 
                                                                   _body,
                                                                   _q);

            positionBaseToBodyInBDiff = translationJacobianInB * _q.bottomRows(12);

            rotationWToB = this->GetRotationMatrixWToB(_q(3),
                                                       _q(4),
                                                       _q(5));
            
            rotationWToBDiff = this->GetRotationMatrixWToBDiff(_q(3),
                                                               _q(4),
                                                               _q(5),
                                                               _u(3),
                                                               _u(4),
                                                               _u(5));

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetTranslationJacobianInWDiff] Could not determine body type!");

            std::abort();

            break;
        }
    }


    dot_J.block<3, 3>(0,0).setZero();

    dot_J.block<3, 3>(0,3) = - rotationWToBDiff * kindr::getSkewMatrixFromVector(positionBaseToBodyInB)
                             - rotationWToB * kindr::getSkewMatrixFromVector(positionBaseToBodyInBDiff); 

    dot_J.block<3, 12>(0,6) = rotationWToBDiff * translationJacobianInB
                              + rotationWToB * translationJacobianInBDiff;

    return dot_J;
} 

// 3x18 Time derivative of the translation Jacobian in control frame
Eigen::Matrix<double, 3, 18> Kinematics::GetTranslationJacobianInCDiff(const LegType &_leg,
                                                                       const BodyType &_body,
                                                                       const Eigen::Matrix<double, 18, 1> &_q,
                                                                       const Eigen::Matrix<double, 18, 1> &_u)
{
    
    Eigen::Matrix<double, 3, 18> dot_J;                      // 3x18 Time derivative of the translation Jacobian in Control frame
    Eigen::Matrix<double, 3, 12> translationJacobianInB;     // 3x12 Translation Jacobian in Body frame
    Eigen::Matrix<double, 3, 12> translationJacobianInBDiff; // 3x12 Time derivative of the translation Jacobian in Body frame
    Eigen::Matrix<double, 3, 1> positionBaseToBodyInB;       // Position vector from base to Body in Body(Base)-frame
    Eigen::Matrix<double, 3, 1> positionBaseToBodyInBDiff;   // Time derivative of the position vector from base to Body in Body(Base)-frame
    Eigen::Matrix<double, 3, 3> rotationCToB;                // Rotation from Control to Body frame (transform from Body to Control)
    Eigen::Matrix<double, 3, 3> rotationCToBDiff;            // Time derivative of the rotation from Control to Body frame 


    switch (_body)
    {
        case base:
        {
            translationJacobianInB.setZero();
            positionBaseToBodyInB.setZero();
            rotationCToB.setZero();
            rotationCToBDiff.setZero();

            break;
        }
        // Equivalent of case hip || thigh || leg || foot:
        case hip:
        case thigh:
        case leg:
        case foot:
        {
            translationJacobianInB = this->GetTranslationJacobianInB(_leg, 
                                                                     _body,
                                                                     _q.bottomRows(12));

            translationJacobianInBDiff = this->GetTranslationJacobianInBDiff(_leg,
                                                                             _body,
                                                                             _q.bottomRows(12),
                                                                             _u.bottomRows(12));

            positionBaseToBodyInB = this->GetPositionBaseToBodyInB(_leg, 
                                                                   _body,
                                                                   _q);

            positionBaseToBodyInBDiff = translationJacobianInB * _q.bottomRows(12);

            rotationCToB = this->GetRotationMatrixCToB(_q(3),
                                                       _q(4),
                                                       0);
            
            rotationCToBDiff = this->GetRotationMatrixCToBDiff(_q(3),
                                                               _q(4),
                                                               0,
                                                               _u(3),
                                                               _u(4),
                                                               0);

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetTranslationJacobianInCDiff] Could not determine body type!");

            std::abort();

            break;
        }
    }


    dot_J.block<3, 3>(0,0).setZero();

    dot_J.block<3, 3>(0,3) = - rotationCToBDiff * kindr::getSkewMatrixFromVector(positionBaseToBodyInB)
                             - rotationCToB * kindr::getSkewMatrixFromVector(positionBaseToBodyInBDiff); 

    dot_J.block<3, 12>(0,6) = rotationCToBDiff * translationJacobianInB
                              + rotationCToB * translationJacobianInBDiff;

    return dot_J;
} 

// 3x3 Rotational Jacobian in body frame
Eigen::Matrix<double, 3, 3> Kinematics::GetRotationJacobianInB(const LegType &_leg,
                                                               const BodyType &_body,
                                                               const double &_theta_hy, 
                                                               const double &_theta_hp, 
                                                               const double &_theta_kp)
{
    Eigen::Matrix<double, 3, 3> J = Eigen::Matrix<double, 3, 3>::Constant(0); // 3x3 Rotational Jacobian

    double c1 = std::cos(_theta_hy); // cos(theta1)
    double s1 = std::sin(_theta_hy); // sin(theta1)

    switch (_leg)
    {
        // Equivalent of case frontLeft || rearRight:
        case frontLeft:
        case rearRight:
        {
            switch (_body)
            {
                case hip:
                {
                    J(2,0) = 1;

                    break;
                }
                case thigh:
                {
                    J(2,0) = 1;

                    J(0,1) = - s1;
                    J(1,1) = c1;

                    break;
                }
                // Equivalent of case leg || foot:
                case leg:
                case foot:
                {
                    J(2,0) = 1;

                    J(0,1) = - s1;
                    J(1,1) = c1;

                    J(0,2) = - s1;
                    J(1,2) = c1;
                    
                    break;
                }
                default:
                {
                    ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInB] Could not determine body type!");

                    std::abort();

                    break;
                }
            }

            break;
        }
        // Equivalent of case frontRight || rearLeft:
        case frontRight:
        case rearLeft:
        {
            switch (_body)
            {
                case hip:
                {
                    J(2,0) = 1;

                    break;
                }
                case thigh:
                {
                    J(2,0) = 1;

                    J(0,1) = s1;
                    J(1,1) = - c1;

                    break;
                }
                // Equivalent of case leg || foot:
                case leg:
                case foot:
                {
                    J(2,0) = 1;

                    J(0,1) = s1;
                    J(1,1) = - c1;

                    J(0,2) = s1;
                    J(1,2) = - c1;
                    
                    break;
                }
                default:
                {
                    ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInB] Could not determine body type!");

                    std::abort();

                    break;
                }
            }
            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInB] Could not determine leg type!");

            std::abort();

            break;
        }
    }

    return J;
}

// 3x12 Rotational Jacobian in body frame
Eigen::Matrix<double, 3, 12> Kinematics::GetRotationJacobianInB(const LegType &_leg, 
                                                                const BodyType &_body,
                                                                const Eigen::Matrix<double, 12, 1> &_q_r)
{
    Eigen::Matrix<double, 3, 12> J = Eigen::Matrix<double, 3, 12>::Constant(0); // 3x12 Rotation Jacobian

    int col = 0;     // Jacobian placement column index
    double theta_hy; // Hip yaw angle
    double theta_hp; // Hip pitch angle
    double theta_kp; // Knee pitch angle

    switch (_leg)
    {
        case frontLeft:
        {
            col = 0;
            theta_hy = _q_r(0);
            theta_hp = _q_r(1);
            theta_kp = _q_r(2);

            break;
        }
        case frontRight:
        {
            col = 3;
            theta_hy = _q_r(3);
            theta_hp = _q_r(4);
            theta_kp = _q_r(5);

            break;
        }
        case rearLeft:
        {
            col = 6;
            theta_hy = _q_r(6);
            theta_hp = _q_r(7);
            theta_kp = _q_r(8);

            break;
        }
        case rearRight:
        {
            col = 9;
            theta_hy = _q_r(9);
            theta_hp = _q_r(10);
            theta_kp = _q_r(11);

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInB] Could not determine leg type!");

            std::abort();

            break;
        }

    }

    // Place 3x3 Jacobian at desired columns
    J.block<3,3>(0, col) = this->GetRotationJacobianInB(_leg,
                                                        _body,
                                                        theta_hy,
                                                        theta_hp,
                                                        theta_kp);

    return J;
}

// 3x18 Rotational Jacobian in world frame
Eigen::Matrix<double, 3, 18> Kinematics::GetRotationJacobianInW(const LegType &_leg,
                                                                const BodyType &_body,
                                                                const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 3, 18> J;                   // 3x18 Rotation Jacobian in World frame
    Eigen::Matrix<double, 3, 12> rotationJacobianInB; // 3x12 Rotation Jacobian in Body frame
    Eigen::Matrix<double, 3, 3> rotationWToB;         // Rotation from World to Body frame (transform from Body to World)

    rotationWToB = this->GetRotationMatrixWToB(_q(3),
                                               _q(4),
                                               _q(5));

    switch (_body)
    {
        case base:
        {
            rotationJacobianInB.setZero();

            break;
        }
        // Equivalent of case hip || thigh || leg || foot:
        case hip:
        case thigh:
        case leg:
        case foot:
        {
            rotationJacobianInB = this->GetRotationJacobianInB(_leg, 
                                                               _body,
                                                               _q.bottomRows(12));

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInW] Could not determine body type!");

            std::abort();

            break;
        }
    }

    J.block<3, 3>(0,0).setZero();
    J.block<3, 3>(0,3) = rotationWToB;
    J.block<3, 12>(0,6) = rotationWToB * rotationJacobianInB; 

    return J;
} 

// 3x18 Rotational Jacobian in control frame
Eigen::Matrix<double, 3, 18> Kinematics::GetRotationJacobianInC(const LegType &_leg,
                                                                const BodyType &_body,
                                                                const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 3, 18> J;                   // 3x18 Rotation Jacobian in World frame
    Eigen::Matrix<double, 3, 12> rotationJacobianInB; // 3x12 Rotation Jacobian in Body frame
    Eigen::Matrix<double, 3, 3> rotationCToB;         // Rotation from Control to Body frame (transform from Body to Control)

    rotationCToB = this->GetRotationMatrixWToB(_q(3),
                                               _q(4),
                                               0);

    switch (_body)
    {
        case base:
        {
            rotationJacobianInB.setZero();

            break;
        }
        // Equivalent of case hip || thigh || leg || foot:
        case hip:
        case thigh:
        case leg:
        case foot:
        {
            rotationJacobianInB = this->GetRotationJacobianInB(_leg, 
                                                               _body,
                                                               _q.bottomRows(12));

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInW] Could not determine body type!");

            std::abort();

            break;
        }
    }

    J.block<3, 3>(0,0).setZero();
    J.block<3, 3>(0,3) = rotationCToB;
    J.block<3, 12>(0,6) = rotationCToB * rotationJacobianInB; 

    return J;
} 

// 3x3 Time derivative of the rotational Jacobian in body frame
Eigen::Matrix<double, 3, 3> Kinematics::GetRotationJacobianInBDiff(const LegType &_leg,
                                                                   const BodyType &_body,
                                                                   const double &_theta_hy, 
                                                                   const double &_theta_hp, 
                                                                   const double &_theta_kp,
                                                                   const double &_dot_theta_hy, 
                                                                   const double &_dot_theta_hp, 
                                                                   const double &_dot_theta_kp)
{
    Eigen::Matrix<double, 3, 3> dot_J = Eigen::Matrix<double, 3, 3>::Constant(0); // 3x3 Time derivative of the rotational Jacobian

    double c1 = std::cos(_theta_hy); // cos(theta1)
    double s1 = std::sin(_theta_hy); // sin(theta1)

    switch (_leg)
    {
        // Equivalent of case frontLeft || rearRight:
        case frontLeft:
        case rearRight:
        {
            switch (_body)
            {
                case hip:
                {
                    break;
                }
                case thigh:
                {
                    dot_J(0,1) = - c1 * _dot_theta_hy;
                    dot_J(1,1) = - s1 * _dot_theta_hy;

                    break;
                }
                // Equivalent of case leg || foot:
                case leg:
                case foot:
                {
                    dot_J(0,1) = - c1 * _dot_theta_hy;
                    dot_J(1,1) = - s1 * _dot_theta_hy;

                    dot_J(0,2) = - c1 * _dot_theta_hy;
                    dot_J(1,2) = - s1 * _dot_theta_hy;
                    
                    break;
                }
                default:
                {
                    ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInBDiff] Could not determine body type!");

                    std::abort();

                    break;
                }
            }

            break;
        }
        // Equivalent of case frontRight || rearLeft:
        case frontRight:
        case rearLeft:
        {
            switch (_body)
            {
                case hip:
                {
                    break;
                }
                case thigh:
                {
                    dot_J(0,1) = c1 * _dot_theta_hy;
                    dot_J(1,1) = s1 * _dot_theta_hy;

                    break;
                }
                // Equivalent of case leg || foot:
                case leg:
                case foot:
                {
                    dot_J(0,1) = c1 * _dot_theta_hy;
                    dot_J(1,1) = s1 * _dot_theta_hy;

                    dot_J(0,2) = c1 * _dot_theta_hy;
                    dot_J(1,2) = s1 * _dot_theta_hy;
                    
                    break;
                }
                default:
                {
                    ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInBDiff] Could not determine body type!");

                    std::abort();

                    break;
                }
            }
            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInBDiff] Could not determine leg type!");

            std::abort();

            break;
        }
    }

    return dot_J;
}

// 3x12 Time derivative of the rotation Jacobian in body frame
Eigen::Matrix<double, 3, 12> Kinematics::GetRotationJacobianInBDiff(const LegType &_leg, 
                                                                    const BodyType &_body,
                                                                    const Eigen::Matrix<double, 12, 1> &_q_r,
                                                                    const Eigen::Matrix<double, 12, 1> &_dot_q_r)
{
    Eigen::Matrix<double, 3, 12> dot_J = Eigen::Matrix<double, 3, 12>::Constant(0); // 3x12 Time derivative of the rotation Jacobian

    int col = 0;     // Jacobian placement column index

    double theta_hy; // Hip yaw angle
    double theta_hp; // Hip pitch angle
    double theta_kp; // Knee pitch angle
    double dot_theta_hy; // Hip yaw angle
    double dot_theta_hp; // Hip pitch angle
    double dot_theta_kp; // Knee pitch angle

    switch (_leg)
    {
        case frontLeft:
        {
            col = 0;
            theta_hy = _q_r(0);
            theta_hp = _q_r(1);
            theta_kp = _q_r(2);

            dot_theta_hy = _dot_q_r(0);
            dot_theta_hp = _dot_q_r(1);
            dot_theta_kp = _dot_q_r(2);

            break;
        }
        case frontRight:
        {
            col = 3;
            theta_hy = _q_r(3);
            theta_hp = _q_r(4);
            theta_kp = _q_r(5);

            dot_theta_hy = _dot_q_r(3);
            dot_theta_hp = _dot_q_r(4);
            dot_theta_kp = _dot_q_r(5);

            break;
        }
        case rearLeft:
        {
            col = 6;
            theta_hy = _q_r(6);
            theta_hp = _q_r(7);
            theta_kp = _q_r(8);

            dot_theta_hy = _dot_q_r(6);
            dot_theta_hp = _dot_q_r(7);
            dot_theta_kp = _dot_q_r(8);

            break;
        }
        case rearRight:
        {
            col = 9;
            theta_hy = _q_r(9);
            theta_hp = _q_r(10);
            theta_kp = _q_r(11);

            dot_theta_hy = _dot_q_r(9);
            dot_theta_hp = _dot_q_r(10);
            dot_theta_kp = _dot_q_r(11);

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInBDiff] Could not determine leg type!");

            std::abort();

            break;
        }

    }

    // Place 3x3 Jacobian at desired columns
    dot_J.block<3,3>(0, col) = this->GetRotationJacobianInBDiff(_leg,
                                                                _body,
                                                                theta_hy,
                                                                theta_hp,
                                                                theta_kp,
                                                                dot_theta_hy,
                                                                dot_theta_hp,
                                                                dot_theta_kp);

    return dot_J;
}

// 3x18 Time derivative of the rotational Jacobian in world frame
Eigen::Matrix<double, 3, 18> Kinematics::GetRotationJacobianInWDiff(const LegType &_leg,
                                                                    const BodyType &_body,
                                                                    const Eigen::Matrix<double, 18, 1> &_q,
                                                                    const Eigen::Matrix<double, 18, 1> &_u)
{
    Eigen::Matrix<double, 3, 18> dot_J;                   // 3x18 Time derivative of the rotation Jacobian in World frame
    Eigen::Matrix<double, 3, 12> rotationJacobianInB;     // 3x12 Rotation Jacobian in Body frame
    Eigen::Matrix<double, 3, 12> rotationJacobianInBDiff; // 3x12 Time derivative of the rotation Jacobian in Body frame
    Eigen::Matrix<double, 3, 3> rotationWToB;             // Rotation from World to Body frame (transform from Body to World)
    Eigen::Matrix<double, 3, 3> rotationWToBDiff;         // Time derivative of the rotation from World to Body frame

    switch (_body)
    {
        case base:
        {
            rotationJacobianInB.setZero();
            rotationJacobianInBDiff.setZero();
            rotationWToB.setZero();

            rotationWToBDiff = this->GetRotationMatrixWToBDiff(_q(3),
                                                               _q(4),
                                                               _q(5),
                                                               _u(3),
                                                               _u(4),
                                                               _u(5));

            break;
        }
        // Equivalent of case hip || thigh || leg || foot:
        case hip:
        case thigh:
        case leg:
        case foot:
        {
            rotationJacobianInB = this->GetRotationJacobianInB(_leg, 
                                                               _body,
                                                               _q.block<12, 1>(6,0));

            rotationJacobianInBDiff = this->GetRotationJacobianInBDiff(_leg,
                                                                       _body,
                                                                       _q.block<12, 1>(6,0),
                                                                       _u.block<12, 1>(6,0));

            rotationWToB = this->GetRotationMatrixWToB(_q(3),
                                                       _q(4),
                                                       _q(5));

            rotationWToBDiff = this->GetRotationMatrixWToBDiff(_q(3),
                                                               _q(4),
                                                               _q(5),
                                                               _u(3),
                                                               _u(4),
                                                               _u(5));

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInWDiff] Could not determine body type!");

            std::abort();

            break;
        }
    }

    dot_J.block<3, 3>(0,0).setZero();
    dot_J.block<3, 3>(0,3) = rotationWToBDiff;
    dot_J.block<3, 12>(0,6) = rotationWToBDiff * rotationJacobianInB + rotationWToB * rotationJacobianInBDiff;

    return dot_J;
} 

// 3x18 Time derivative of the rotational Jacobian in control frame
Eigen::Matrix<double, 3, 18> Kinematics::GetRotationJacobianInCDiff(const LegType &_leg,
                                                                    const BodyType &_body,
                                                                    const Eigen::Matrix<double, 18, 1> &_q,
                                                                    const Eigen::Matrix<double, 18, 1> &_u)
{
    Eigen::Matrix<double, 3, 18> dot_J;                   // 3x18 Time derivative of the rotation Jacobian in Control frame
    Eigen::Matrix<double, 3, 12> rotationJacobianInB;     // 3x12 Rotation Jacobian in Body frame
    Eigen::Matrix<double, 3, 12> rotationJacobianInBDiff; // 3x12 Time derivative of the rotation Jacobian in Body frame
    Eigen::Matrix<double, 3, 3> rotationCToB;             // Rotation from Control to Body frame (transform from Body to Control)
    Eigen::Matrix<double, 3, 3> rotationCToBDiff;         // Time derivative of the rotation from Control to Body frame

    switch (_body)
    {
        case base:
        {
            rotationJacobianInB.setZero();
            rotationJacobianInBDiff.setZero();
            rotationCToB.setZero();

            rotationCToBDiff = this->GetRotationMatrixWToBDiff(_q(3),
                                                               _q(4),
                                                               0,
                                                               _u(3),
                                                               _u(4),
                                                               0);

            break;
        }
        // Equivalent of case hip || thigh || leg || foot:
        case hip:
        case thigh:
        case leg:
        case foot:
        {
            rotationJacobianInB = this->GetRotationJacobianInB(_leg, 
                                                               _body,
                                                               _q.block<12, 1>(6,0));

            rotationJacobianInBDiff = this->GetRotationJacobianInBDiff(_leg,
                                                                       _body,
                                                                       _q.block<12, 1>(6,0),
                                                                       _u.block<12, 1>(6,0));

            rotationCToB = this->GetRotationMatrixCToB(_q(3),
                                                       _q(4),
                                                       0);

            rotationCToBDiff = this->GetRotationMatrixCToBDiff(_q(3),
                                                               _q(4),
                                                               0,
                                                               _u(3),
                                                               _u(4),
                                                               0);

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetRotationJacobianInCDiff] Could not determine body type!");

            std::abort();

            break;
        }
    }

    dot_J.block<3, 3>(0,0).setZero();
    dot_J.block<3, 3>(0,3) = rotationCToBDiff;
    dot_J.block<3, 12>(0,6) = rotationCToBDiff * rotationJacobianInB + rotationCToB * rotationJacobianInBDiff;

    return dot_J;
} 

// 6x18 Spatial Jacobian in world frame
Eigen::Matrix<double, 6, 18> Kinematics::GetJacobianInW(const LegType &_leg,
                                                        const BodyType &_body,
                                                        const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 6, 18> J; // 6x18 Spatial Jacobian in World frame

    J.block<3, 18>(0,0) = this->GetTranslationJacobianInW(_leg, 
                                                          _body,
                                                          _q);

    J.block<3, 18>(3,0) = this->GetRotationJacobianInW(_leg,
                                                       _body,
                                                       _q);

    return J;
}

// 6x18 Time derivative of the spatial Jacobian in world frame
Eigen::Matrix<double, 6, 18> Kinematics::GetJacobianInWDiff(const LegType &_leg,
                                                            const BodyType &_body,
                                                            const Eigen::Matrix<double, 18, 1> &_q,
                                                            const Eigen::Matrix<double, 18, 1> &_u)
{
    Eigen::Matrix<double, 6, 18> dot_J; // 6x18 Spatial Jacobian in World frame

    dot_J.block<3, 18>(0,0) = this->GetTranslationJacobianInWDiff(_leg, 
                                                                  _body,
                                                                  _q,
                                                                  _u);

    dot_J.block<3, 18>(3,0) = this->GetRotationJacobianInWDiff(_leg,
                                                               _body,
                                                               _q,
                                                               _u);

    return dot_J;
}

// (3*n_c)x18 Contact Support Jacobian in world frame
Eigen::Matrix<double, Eigen::Dynamic, 18> Kinematics::GetContactJacobianInW(std::vector<LegType> &_legs,
                                                                            const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::MatrixXd J;                     // Contact Support Jacobian

    const unsigned int n_c = _legs.size(); // Number of contact points

    // Validate number of contact points
    if (n_c == 0)
    {
        ROS_ERROR_STREAM("[Kinematics::GetContactJacobianInW] Zero contact points were given!");

        J.setZero();

        return J;

        std::abort();
    }
    else if (n_c > 4)
    {

        ROS_ERROR_STREAM("[Kinematics::GetContactJacobianInW] More than four contact points were given!");

        std::abort();
    }

    // Set Jacobian dimensions
    J.resize(3*n_c, 18);

    // Default Jacobian to zero
    J.setZero();

    // Sort vector of legs to ensure correct filling of partial Jacobians
    std::sort(_legs.begin(), _legs.end());

    // Index to track which index the partial Jacobian 
    // should be filled into in the complete Jacobian.
    int row = 0;

    for (LegType leg : _legs)
    {
        // Fill Jacobian
        J.block<3,18>(row,0) = this->GetTranslationJacobianInW(leg, BodyType::foot, _q);

        // Increment
        row += 3; 
    }

    return J;
}

// (3*n_c)x18 Time derivative of the Contact Support Jacobian in world frame
Eigen::Matrix<double, Eigen::Dynamic, 18> Kinematics::GetContactJacobianInWDiff(std::vector<LegType> &_legs,
                                                                                const Eigen::Matrix<double, 18, 1> &_q,
                                                                                const Eigen::Matrix<double, 18, 1> &_u)
{
    Eigen::MatrixXd dot_J;                 // Time derivative of the Contact Support Jacobian

    const unsigned int n_c = _legs.size(); // Number of contact points

    // Validate number of contact points
    if (n_c == 0)
    {
        ROS_ERROR_STREAM("[Kinematics::GetContactJacobianInWDiff] Zero contact points were given!");

        dot_J.setZero();

        return dot_J;

        std::abort();
    }
    else if (n_c > 4)
    {

        ROS_ERROR_STREAM("[Kinematics::GetContactJacobianInWDiff] More than four contact points were given!");

        std::abort();
    }

    // Set Jacobian dimensions
    dot_J.resize(3*n_c, 18);

    // Default Jacobian to zero
    dot_J.setZero();

    // Sort vector of legs to ensure correct filling of partial Jacobians
    std::sort(_legs.begin(), _legs.end());

    // Index to track which index the partial Jacobian 
    // should be filled into in the complete Jacobian.
    int row = 0;

    for (LegType leg : _legs)
    {
        // Fill Jacobian
        dot_J.block<3,18>(row,0) = this->GetTranslationJacobianInWDiff(leg, BodyType::foot, _q, _u);

        // Increment
        row += 3; 
    }


    return dot_J;
}

// (3*n_s)x18 Swing Support Jacobian in world frame
Eigen::Matrix<double, Eigen::Dynamic, 18> Kinematics::GetSwingJacobianInW(std::vector<LegType> &_legs,
                                                                          const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::MatrixXd J;                     // Swing Support Jacobian

    const unsigned int n_s = _legs.size(); // Number of swing legs

    // Validate number of swing legs
    if (n_s == 0)
    {
        ROS_ERROR_STREAM("[Kinematics::GetSwingJacobianInW] Zero swing legs were given!");

        std::abort();
    }
    else if (n_s > 4)
    {

        ROS_ERROR_STREAM("[Kinematics::GetSwingJacobianInW] More than four swing legs were given!");

        std::abort();
    }

    // Set Jacobian dimensions
    J.resize(3*n_s, 18);

    // Default Jacobian to zero
    J.setZero();

    // Sort vector of legs to ensure correct filling of partial Jacobians
    std::sort(_legs.begin(), _legs.end());

    // Index to track which index the partial Jacobian 
    // should be filled into in the complete Jacobian.
    int row = 0;

    for (LegType leg : _legs)
    {
        // Fill Jacobian
        J.block<3,18>(row,0) = this->GetTranslationJacobianInW(leg, BodyType::foot, _q);

        // Increment
        row += 3; 
    }


    return J;
}

// (3*n_s)x18 Time derivative of the Swing Support Jacobian in world frame
Eigen::Matrix<double, Eigen::Dynamic, 18> Kinematics::GetSwingJacobianInWDiff(std::vector<LegType> &_legs,
                                                                              const Eigen::Matrix<double, 18, 1> &_q,
                                                                              const Eigen::Matrix<double, 18, 1> &_u)
{
    Eigen::MatrixXd dot_J;                 // Swing Support Jacobian

    const unsigned int n_s = _legs.size(); // Number of swing legs

    // Validate number of swing legs
    if (n_s == 0)
    {
        ROS_ERROR_STREAM("[Kinematics::GetSwingJacobianInW] Zero swing legs were given!");

        std::abort();
    }
    else if (n_s > 4)
    {

        ROS_ERROR_STREAM("[Kinematics::GetSwingJacobianInW] More than four swing legs were given!");

        std::abort();
    }

    // Set Jacobian dimensions
    dot_J.resize(3*n_s, 18);

    // Default Jacobian to zero
    dot_J.setZero();

    // Sort vector of legs to ensure correct filling of partial Jacobians
    std::sort(_legs.begin(), _legs.end());

    // Index to track which index the partial Jacobian 
    // should be filled into in the complete Jacobian.
    int row = 0;

    for (LegType leg : _legs)
    {
        // Fill Jacobian
        dot_J.block<3,18>(row,0) = this->GetTranslationJacobianInWDiff(leg, BodyType::foot, _q, _u);

        // Increment
        row += 3; 
    }


    return dot_J;
}

// Single body mass matrix
Eigen::Matrix<double, 18, 18> Kinematics::GetSingleBodyMassMatrix(const LegType &_leg,
                                                                  const BodyType &_body,
                                                                  const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 3, 18> J_COM;  // Translation Jacobian about COM of the body
    Eigen::Matrix<double, 3, 18> J_R;    // Rotation Jacobian for the body

    Eigen::Matrix<double, 3, 3> I_COM;   // Inertia matrix for the COM of the body

    double m; // Mass of the body

    J_COM = this->GetTranslationJacobianInW(_leg, _body, _q);
    J_R = this->GetRotationJacobianInW(_leg, _body, _q);

    I_COM = this->GetBodyInertia(_body, _leg);
    m = this->GetBodyMass(_body);

    return m * J_COM.transpose() * J_COM + J_R.transpose() * I_COM * J_R;
}

// Mass matrix
Eigen::Matrix<double, 18, 18> Kinematics::GetMassMatrix(const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 18, 18> M = Eigen::Matrix<double, 18, 18>::Constant(0); // Mass matrix


    static const std::vector<BodyType> bodies{ BodyType::base,
                                               BodyType::hip,
                                               BodyType::thigh,
                                               BodyType::leg };

    static const std::vector<LegType> legs{ LegType::frontLeft, 
                                            LegType::frontRight,
                                            LegType::rearLeft,
                                            LegType::rearRight };

    for (const auto body : bodies)
    {
        if (body == BodyType::base)
        {
            M += this->GetSingleBodyMassMatrix(LegType::NONE, body, _q);
        }
        else
        {
            for (const auto leg : legs)
            {
                M += this->GetSingleBodyMassMatrix(leg, body, _q);
            }
        }
    }

    return M;
}

Eigen::Matrix<double, 3, 3> Kinematics::GetSingleLegMassMatrix(const Eigen::Matrix<double, 3, 1> &_q)
{
    Eigen::Matrix<double, 3, 3> M = Eigen::Matrix<double, 3, 3>::Zero();

    static const std::vector<BodyType> bodies{ BodyType::hip,
                                               BodyType::thigh,
                                               BodyType::leg };

    Eigen::Matrix<double, 3, 3> J_s;

    Eigen::Matrix<double, 3, 3> J_r;

    for (const auto body : bodies)
    {
        J_s = GetTranslationJacobianInB(LegType::frontLeft, body, _q(0), _q(1), _q(2));
        J_r = GetRotationJacobianInB(LegType::frontLeft, body, _q(0), _q(1), _q(2));
        M += J_s.transpose()*GetBodyMass(body)*J_s + J_r.transpose()*GetBodyInertia(body)*J_r;
    }

    return M;
}

// Single body coriolis and centrifugal terms
Eigen::Matrix<double, 18, 1> Kinematics::GetSingleBodyCoriolisAndCentrifugalTerms(const LegType &_leg,
                                                                                  const BodyType &_body,
                                                                                  const Eigen::Matrix<double, 18, 1> &_q,
                                                                                  const Eigen::Matrix<double, 18, 1> &_u)
{
    Eigen::Matrix<double, 3, 18> J_COM;  // Translation Jacobian about COM of the body
    Eigen::Matrix<double, 3, 18> J_R;    // Rotation Jacobian for the body

    Eigen::Matrix<double, 3, 18> dot_J_COM;  // Time derivative of translation Jacobian about COM of the body
    Eigen::Matrix<double, 3, 18> dot_J_R;    // Time derivative of rotation Jacobian for the body

    Eigen::Matrix<double, 3, 1> Omega; // Absolute angular velocities of the body wrt to the world (inertial) frame

    Eigen::Matrix<double, 3, 3> I_COM;   // Inertia matrix for the COM of the body


    double m; // Mass of the body

    J_COM = this->GetTranslationJacobianInW(_leg, _body, _q);
    J_R = this->GetRotationJacobianInW(_leg, _body, _q);
    
    dot_J_COM = this->GetTranslationJacobianInWDiff(_leg, _body, _q, _u);
    dot_J_R = this->GetRotationJacobianInWDiff(_leg, _body, _q, _u);

    Omega = J_R * _u;

    I_COM = GetBodyInertia(_body, _leg);
    m = GetBodyMass(_body);

    return m * J_COM.transpose() * dot_J_COM * _u + J_R.transpose() * ( I_COM * dot_J_R * _u + kindr::getSkewMatrixFromVector(Omega) * I_COM * Omega);
}

// Coriolis and centrifugal terms
Eigen::Matrix<double, 18, 1> Kinematics::GetCoriolisAndCentrifugalTerms(const Eigen::Matrix<double, 18, 1> &_q,
                                                                        const Eigen::Matrix<double, 18, 1> &_u)
{
    Eigen::Matrix<double, 18, 1> b = Eigen::Matrix<double, 18, 1>::Constant(0); // Coriolis and centrifugal terms. 


    static const std::vector<BodyType> bodies{ BodyType::base,
                                               BodyType::hip,
                                               BodyType::thigh,
                                               BodyType::leg };

    static const std::vector<LegType> legs{ LegType::frontLeft, 
                                            LegType::frontRight,
                                            LegType::rearLeft,
                                            LegType::rearRight };

    for (const auto body : bodies)
    {
        if (body == BodyType::base)
        {
            b += this->GetSingleBodyCoriolisAndCentrifugalTerms(LegType::NONE, body, _q, _u);
        }
        else
        {
            for (const auto leg : legs)
            {
                b += this->GetSingleBodyCoriolisAndCentrifugalTerms(leg, body, _q, _u);
            }
        }
    }

    return b;
}

Eigen::Matrix<double, 3, 1> Kinematics::GetSingleLegCoriolisAndCentrifugalTerms(const Eigen::Matrix<double, 3, 1> &_q,
                                                                                const Eigen::Matrix<double, 3, 1> &_u)
{
    Eigen::Matrix<double, 3, 1> b = Eigen::Matrix<double, 3, 1>::Zero();

    static const std::vector<BodyType> bodies{ BodyType::hip,
                                               BodyType::thigh,
                                               BodyType::leg };

    double m;
    Eigen::Matrix<double, 3, 3> I;
    Eigen::Matrix<double, 3, 3> J_s;
    Eigen::Matrix<double, 3, 3> J_s_d; 
    Eigen::Matrix<double, 3, 3> J_r;
    Eigen::Matrix<double, 3, 3> J_r_d;
    Eigen::Matrix<double, 3, 1> omega;
   
    

    for (const auto body : bodies)
    {
        m = GetBodyMass(body);
        I = GetBodyInertia(body);
        J_s = GetTranslationJacobianInB(LegType::frontLeft, body, _q(0), _q(1), _q(2));
        J_s_d = GetTranslationJacobianInBDiff(LegType::frontLeft, body, _q(0), _q(1), _q(2), _u(0), _u(1), _u(2));
        J_r = GetRotationJacobianInB(LegType::frontLeft, body, _q(0), _q(1), _q(2));
        J_r_d = GetRotationJacobianInBDiff(LegType::frontLeft, body, _q(0), _q(1), _q(2), _u(0), _u(1), _u(2));
        omega = J_r*_u;
        b += J_s.transpose()*m*J_s_d*_u + J_r.transpose()*(I*J_r_d*_u + kindr::getSkewMatrixFromVector(omega)*I*omega);
    }

    return b;
}                                                                                

// Single body gravitational terms
Eigen::Matrix<double, 18, 1> Kinematics::GetSingleBodyGravitationalTerms(const LegType &_leg,
                                                                         const BodyType &_body,
                                                                         const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 3, 18> J_COM;  // Translation Jacobian about COM of the body

    Eigen::Matrix<double, 3, 1> F_g;     // Gravitational force

    double m;        // Mass of the body
    double g = 9.81; // Gravitational constant

    J_COM = this->GetTranslationJacobianInW(_leg, _body, _q);

    switch (_body)
    {
        case base:
        {
            m = this->M0;

            break;
        }
        case hip:
        {
            m = this->M1;

            break;
        }
        case thigh:
        {
            m = this->M2;

            break;
        }
        case leg:
        {
            m = this->M3;

            break;
        }
        default:
        {
            ROS_ERROR_STREAM("[Kinematics::GetSingleBodyGravitationalTerms] Could not determine body type!");

            std::abort();

            break;
        }
    }

    F_g = m * g * Eigen::Matrix<double, 3, 1>(0,0,-1);
    
    return - J_COM.transpose() * F_g;
}

// Gravitational terms
Eigen::Matrix<double, 18, 1> Kinematics::GetGravitationalTerms(const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 18, 1> g = Eigen::Matrix<double, 18, 1>::Constant(0); // Gravitational terms


    static const std::vector<BodyType> bodies{ BodyType::base,
                                               BodyType::hip,
                                               BodyType::thigh,
                                               BodyType::leg };

    static const std::vector<LegType> legs{ LegType::frontLeft, 
                                            LegType::frontRight,
                                            LegType::rearLeft,
                                            LegType::rearRight };

    for (const auto body : bodies)
    {
        if (body == BodyType::base)
        {
            g += this->GetSingleBodyGravitationalTerms(LegType::NONE, body, _q);
        }
        else
        {
            for (const auto leg : legs)
            {
                g += this->GetSingleBodyGravitationalTerms(leg, body, _q);
            }
        }
    }

    //g(2) = - g(2); // TODO WHAT THE F*** DO I DO THIS FOR

    return g;
}

Eigen::Matrix<double, 3, 1> Kinematics::GetSingleLegGravitationalTerms(const Eigen::Matrix<double, 3, 1> &_q)
{
    Eigen::Matrix<double, 3, 1> G = Eigen::Matrix<double, 3, 1>::Zero();

    double g = 9.81;

    static const std::vector<BodyType> bodies{ BodyType::hip,
                                               BodyType::thigh,
                                               BodyType::leg };

    Eigen::Matrix<double, 3, 3> J_s;

    Eigen::Matrix<double, 3, 1> F;

    for (const auto body : bodies)
    {
        J_s = GetTranslationJacobianInB(LegType::frontLeft, body, _q(0), _q(1), _q(2));
        F = GetBodyMass(body) * g * Eigen::Matrix<double, 3, 1>(0.0, 0.0, 1.0);
        G += J_s.transpose()*F;
    }

    return G;
}

// Validate IK solution
bool Kinematics::ValidateSolution(const Eigen::Matrix<double, 12, 1> &_q_r)
{
    if (_q_r.hasNaN())
    {
        return false;
    }

    for (size_t i = 0; i < _q_r.size(); i++)
    {
        if (_q_r(i) < this->min_angles(i) || _q_r(i) > this->max_angles(i))
        {
            return false;
        }
    }

    return true;
}

// Inertia matrix
Eigen::Matrix<double, 3, 3> Kinematics::GetInertiaMatrix(const double &_I_XX,
                                                         const double &_I_YY,
                                                         const double &_I_ZZ,
                                                         const double &_I_XY,
                                                         const double &_I_XZ,
                                                         const double &_I_YZ)
{
    Eigen::Matrix<double, 3, 3> I;
    I(0, 0) = _I_XX;
    I(1, 1) = _I_YY;
    I(2, 2) = _I_ZZ;
    I(0, 1) = _I_XY;
    I(1, 0) = _I_XY;
    I(0, 2) = _I_XZ;
    I(2, 0) = _I_XZ;
    I(1, 2) = _I_YZ;
    I(2, 1) = _I_YZ;

    return I;
}

double Kinematics::GetBodyMass(BodyType _body)
{
    double m;

    switch (_body)
    {
    case base:
    {
        m = this->M0;

        break;
    }

    case hip:
    {
        m = this->M1;

        break;
    }
    case thigh:
    {
        m = this->M2;

        break;
    }
    case leg:
    {
        m = this->M3;

        break;
    }
    default:
        ROS_ERROR_STREAM("[Kinematics::GetBodyMass] Could not determine body type");

        std::abort();

        break;
    }

    return m;
}

Eigen::Matrix<double, 3, 3> Kinematics::GetBodyInertia(BodyType _body)
{
    Eigen::Matrix<double, 3, 3> I;

    switch (_body)
    {
    case base:
    {
        I = this->I0;

        break;
    }

    case hip:
    {
        I = this->I1_fl_rr;

        break;
    }
    case thigh:
    {
        I = this->I2;

        break;
    }
    case leg:
    {
        I = this->I3;

        break;
    }
    default:
        ROS_ERROR_STREAM("[Kinematics::GetBodyInertia] Could not determine body type");

        std::abort();

        break;
    }

    return I;
}

Eigen::Matrix<double, 3, 3> Kinematics::GetBodyInertia(BodyType _body, LegType _leg)
{
    if(_body == BodyType::hip)
    {
        switch (_leg)
        {
        case LegType::frontLeft:
        case LegType::rearRight:
            return I1_fl_rr;
            break;
        case LegType::frontRight:
        case LegType::rearLeft:
            return I1_fr_rl;
            break;
        default:
            ROS_ERROR_STREAM("[Kinematics::GetBodyInertia] Could not determine leg type");

            std::abort();

            break;
        }
    }
    else
    {
        return GetBodyInertia(_body);
    }
}