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

#include "ros/ros.h" // TODO remove when removing prints

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
    this->L3 = 0.279;

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
    kindr::HomTransformMatrixD transformFrontLeftHipToFoot = this->GetHipToFootTransform(this->flOffset,
                                                                                         _q(6),
                                                                                         _q(7),
                                                                                         _q(8));
    kindr::HomTransformMatrixD transformFrontRightHipToFoot = this->GetHipToFootTransform(this->frOffset,
                                                                                          _q(9),
                                                                                          _q(10),
                                                                                          _q(11));
    kindr::HomTransformMatrixD transformRearLeftHipToFoot = this->GetHipToFootTransform(this->rlOffset,
                                                                                        _q(12),
                                                                                        _q(13),
                                                                                        _q(14));
    kindr::HomTransformMatrixD transformRearRightHipToFoot = this->GetHipToFootTransform(this->rrOffset,
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
    kindr::HomTransformMatrixD transformation = this->GetHipToFootTransform(false,
                                                                            _theta_hy,
                                                                            _theta_hp,
                                                                            _theta_kp); 

    // End-effector position
    Eigen::Vector3d pos = _h_pos + transformation.transform(kindr::Position3D(0,0,0)).vector(); 

    return pos;
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

// Get position vector from base to foot in body
Eigen::Matrix<double, 3, 1> Kinematics::GetPositionBaseToFootInB(const LegType &_leg,
                                                                 const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 3, 1> positionBaseToFootInB;

    Eigen::Matrix<double, 3, 1> positionBaseToHipInB;

    kindr::HomTransformMatrixD transformHipToFoot;

    if (_leg == LegType::frontLeft)
    {
        transformHipToFoot = this->GetHipToFootTransform(this->flOffset,
                                                                                    _q(6),
                                                                                    _q(7),
                                                                                    _q(8));

        positionBaseToHipInB = this->positionBaseToFrontLeftInB;
    }
    else if (_leg == LegType::frontRight)
    {
        transformHipToFoot = this->GetHipToFootTransform(this->frOffset,
                                                                                    _q(9),
                                                                                    _q(10),
                                                                                    _q(11));

        positionBaseToHipInB = this->positionBaseToFrontRightInB;
    }
    else if (_leg == LegType::rearLeft)
    {
        transformHipToFoot = this->GetHipToFootTransform(this->rlOffset,
                                                                                    _q(12),
                                                                                    _q(13),
                                                                                    _q(14));

        positionBaseToHipInB = this->positionBaseToRearLeftInB;
    }
    else if (_leg == LegType::rearRight)
    {
        transformHipToFoot = this->GetHipToFootTransform(this->rrOffset,
                                                                                    _q(15),
                                                                                    _q(16),
                                                                                    _q(17));

        positionBaseToHipInB = this->positionBaseToRearRightInB;
    }
    else
    {
        ROS_ERROR_STREAM("Leg type could not be determined when finding positionBaseToFootInB!");
    }

    // TODO remove this zero
    positionBaseToFootInB = 0*positionBaseToHipInB + transformHipToFoot.transform(kindr::Position3D(0,0,0)).vector();


    return positionBaseToFootInB;
}

// HipToFootTransform
TransMatrix Kinematics::GetHipToFootTransform(const bool &_offset,
                                              const double &_theta_hy, 
                                              const double &_theta_hp, 
                                              const double &_theta_kp)
{
    // Check offset for D-H transformation
    double roll_offset = 0;

    if (_offset)
    {
        roll_offset = math_utils::HALF_PI;
    } else
    {
        roll_offset = -math_utils::HALF_PI;
    }

    // First D-H transformation
    kindr::HomTransformMatrixD t1 = this->GetDhTransform(this->L1,
                                                         roll_offset,
                                                         0,
                                                         _theta_hy);

    // Second D-H transformation
    kindr::HomTransformMatrixD t2 = this->GetDhTransform(this->L2,
                                                         0,
                                                         0,
                                                         _theta_hp);

    // Third D-H transformation
    kindr::HomTransformMatrixD t3 = this->GetDhTransform(this->L3,
                                                         0,
                                                         0,
                                                         _theta_kp);

    // Complete D-H transformation
    kindr::HomTransformMatrixD transformation = t1*t2*t3;

    return transformation;
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

// Leg state single leg translation Jacobian in body frame
Eigen::Matrix<double, 3, 3> Kinematics::GetSingleLegTranslationJacobianInB(const bool &_offset,
                                                                           const double &_theta_hy, 
                                                                           const double &_theta_hp, 
                                                                           const double &_theta_kp)
{
    Eigen::Matrix<double, 3, 3> J;

    /*
    double c1;
    double s1;

    double c2;
    double s2;

    double c23;
    double s23;

    if (_offset)
    {
        c1 = std::cos(_theta_hy);
        s1 = std::sin(_theta_hy);

        c2 = std::cos(_theta_hp);
        s2 = std::sin(_theta_hp);

        c23 = std::cos(_theta_hp + _theta_kp);
        s23 = std::sin(_theta_hp + _theta_kp);
    }
    else
    {
        c1 = std::cos(_theta_hy);
        s1 = std::sin(_theta_hy);

        c2 = std::cos(-_theta_hp);
        s2 = std::sin(-_theta_hp);

        c23 = std::cos(-_theta_hp - _theta_kp);
        s23 = std::sin(-_theta_hp - _theta_kp);
    }

    J(0,0) = -(this->L1 + this->L2 * c2 + this->L3 * c23) * s1;
    J(1,0) = (this->L1 + this->L2 * c2 + this->L3 * c23) * c1;
    J(2,0) = 0;

    J(0,1) = (- this->L2 * s2 - this->L3 * s23) * c1;
    J(1,1) = (- this->L2 * s2 - this->L3 * s23) * s1;
    J(2,1) = - this->L2 * c2 - this->L3 * c23;

    J(0,2) = (- this->L3 * s23) * c1;
    J(1,2) = (- this->L3 * s23) * s1;
    J(2,2) = - this->L3 * c23;
    */

    double c1 = std::cos(_theta_hy);
    double s1 = std::sin(_theta_hy);

    double c2 = std::cos(_theta_hp);
    double s2 = std::sin(_theta_hp);

    double c23 = std::cos(_theta_hp + _theta_kp);
    double s23 = std::sin(_theta_hp + _theta_kp);

    J(0, 0) = (this->L1 + this->L2*c2 + this->L3*c23)*(-s1);
    J(1, 0) = (this->L1 + this->L2*c2 + this->L3*c23)*( c1);
    J(2, 0) = 0.0;

    J(0, 1) = (-this->L2*s2 - this->L3*s23)*c1;
    J(1, 1) = (-this->L2*s2 - this->L3*s23)*s1;
    J(2, 1) = -this->L2*c2 -this->L3*c23;

    J(0, 2) = -this->L3*s23*c1;
    J(1, 2) = -this->L3*s23*s1;
    J(2, 2) = -this->L3*c23;

    // For front right and rear left foot positive angles causes increase in height
    if(_offset)
    {
        J(2, 1) = - J(2, 1); 
        J(2, 2) = - J(2, 2);
    }

    return J;
}

// Leg state single leg translation Jacobian in body frame
Eigen::Matrix<double, 3, 3> Kinematics::GetSingleLegTranslationLegJacobianInB(const bool &_offset,
                                                                              const double &_theta_hy, 
                                                                              const double &_theta_hp, 
                                                                              const double &_theta_kp)
{
    Eigen::Matrix<double, 3, 3> J;

    double c1 = std::cos(_theta_hy);
    double s1 = std::sin(_theta_hy);

    double c2 = std::cos(_theta_hp);
    double s2 = std::sin(_theta_hp);

    double c23 = std::cos(_theta_hp + _theta_kp);
    double s23 = std::sin(_theta_hp + _theta_kp);

    J(0, 0) = (this->L1 + this->L2*c2 + this->LC3*c23)*(-s1);
    J(1, 0) = (this->L1 + this->L2*c2 + this->LC3*c23)*( c1);
    J(2, 0) = 0.0;

    J(0, 1) = (-this->L2*s2 - this->LC3*s23)*c1;
    J(1, 1) = (-this->L2*s2 - this->LC3*s23)*s1;
    J(2, 1) = -this->L2*c2 -this->LC3*c23;

    J(0, 2) = -this->LC3*s23*c1;
    J(1, 2) = -this->LC3*s23*s1;
    J(2, 2) = -this->LC3*c23;

    // For front right and rear left foot positive angles causes increase in height
    if(_offset)
    {
        J(2, 1) = - J(2, 1); 
        J(2, 2) = - J(2, 2);
    }

    return J;
}

// Leg state single leg translation Jacobian in body frame
Eigen::Matrix<double, 3, 3> Kinematics::GetSingleLegTranslationHipJacobianInB(const bool &_offset,
                                                                              const double &_theta_hy, 
                                                                              const double &_theta_hp, 
                                                                              const double &_theta_kp)
{
    Eigen::Matrix<double, 3, 3> J = Eigen::Matrix<double, 3, 3>::Zero();

    double c1 = std::cos(_theta_hy);
    double s1 = std::sin(_theta_hy);

    double c2 = std::cos(_theta_hp);
    double s2 = std::sin(_theta_hp);

    J(0, 0) = (this->L1 + this->LC2*c2)*(-s1);
    J(1, 0) = (this->L1 + this->LC2*c2)*( c1);
    J(2, 0) = 0.0;

    J(0, 1) = (-this->LC2*s2)*c1;
    J(1, 1) = (-this->LC2*s2)*s1;
    J(2, 1) = -this->LC2*c2;

    // For front right and rear left foot positive angles causes increase in height
    if(_offset)
    {
        J(2, 1) = - J(2, 1); 
    }

    return J;
}

// Leg state single leg translation Jacobian in body frame
Eigen::Matrix<double, 3, 3> Kinematics::GetSingleLegTranslationShoulderJacobianInB(const bool &_offset,
                                                                              const double &_theta_hy, 
                                                                              const double &_theta_hp, 
                                                                              const double &_theta_kp)
{
    Eigen::Matrix<double, 3, 3> J = Eigen::Matrix<double, 3, 3>::Zero();

    double c1 = std::cos(_theta_hy);
    double s1 = std::sin(_theta_hy);

    J(0, 0) = (this->LC1)*(-s1);
    J(1, 0) = (this->LC1)*( c1);

    return J;
}

// Joint state single leg translation Jacobian in body frame
Eigen::Matrix<double, 3, 12> Kinematics::GetSingleLegTranslationJacobianInB(const LegType &_leg, 
                                                                            const Eigen::Matrix<double, 12, 1> &_q_r)
{
    Eigen::Matrix<double, 3, 12> J = Eigen::Matrix<double, 3, 12>::Constant(0);

    if (_leg == LegType::frontLeft)
    {
        J.block<3, 3>(0,0) = this->GetSingleLegTranslationJacobianInB(this->flOffset,
                                                                      _q_r(0), 
                                                                      _q_r(1), 
                                                                      _q_r(2));
    }
    else if (_leg == LegType::frontRight)
    {
        J.block<3, 3>(0,3) = this->GetSingleLegTranslationJacobianInB(this->frOffset,
                                                                      _q_r(3), 
                                                                      _q_r(4), 
                                                                      _q_r(5));
    }
    else if (_leg == LegType::rearLeft)
    {
        J.block<3, 3>(0,6) = this->GetSingleLegTranslationJacobianInB(this->rlOffset,
                                                                      _q_r(6), 
                                                                      _q_r(7), 
                                                                      _q_r(8));
    }
    else if (_leg == LegType::rearRight)
    {
        J.block<3, 3>(0,9) = this->GetSingleLegTranslationJacobianInB(this-rrOffset,
                                                                      _q_r(9), 
                                                                      _q_r(10), 
                                                                      _q_r(11));
    }
    else
    {
        ROS_ERROR_STREAM("Leg type could not be determined when finding SingeLegTranslationJacobianInB!");
    }

    return J;
}


// Joint state single leg translation shoulder Jacobian in body frame
Eigen::Matrix<double, 3, 12> Kinematics::GetSingleLegTranslationShoulderJacobianInB(const TetrapodLeg &_leg,
                                                                                      const Eigen::Matrix<double, 12, 1> &_q_r)
{
    Eigen::Matrix<double, 3, 12> J = Eigen::Matrix<double, 3, 12>::Zero();

    if (_leg == TetrapodLeg::frontLeft)
    {
        J.block<3, 3>(0, 0) = this->GetSingleLegTranslationShoulderJacobianInB(this->flOffset,
                                                                               _q_r(0),
                                                                               _q_r(1),
                                                                               _q_r(2));
    }
    else if (_leg == TetrapodLeg::frontRight)
    {
        J.block<3, 3>(0, 3) = this->GetSingleLegTranslationShoulderJacobianInB(this->frOffset,
                                                                               _q_r(3),
                                                                               _q_r(4),
                                                                               _q_r(5));
    }
    else if (_leg == TetrapodLeg::rearLeft)
    {
        J.block<3, 3>(0, 6) = this->GetSingleLegTranslationShoulderJacobianInB(this->rlOffset,
                                                                               _q_r(6),
                                                                               _q_r(7),
                                                                               _q_r(8));
    }
    else if (_leg == TetrapodLeg::rearRight)
    {
        J.block<3, 3>(0, 9) = this->GetSingleLegTranslationShoulderJacobianInB(this->rrOffset,
                                                                               _q_r(9),
                                                                               _q_r(10),
                                                                               _q_r(11));
    }
    else
    {
        ROS_ERROR_STREAM("Leg type could not be determined when finding SingeLegTranslationShoulderJacobianInB!");
    }

    return J;
}

// Joint state single leg translation hip Jacobian in body frame
Eigen::Matrix<double, 3, 12> Kinematics::GetSingleLegTranslationLegJacobianInB(const TetrapodLeg &_leg,
                                                                                      const Eigen::Matrix<double, 12, 1> &_q_r)
{
    Eigen::Matrix<double, 3, 12> J = Eigen::Matrix<double, 3, 12>::Zero();

    if (_leg == TetrapodLeg::frontLeft)
    {
        J.block<3, 3>(0, 0) = this->GetSingleLegTranslationLegJacobianInB(this->flOffset,
                                                                               _q_r(0),
                                                                               _q_r(1),
                                                                               _q_r(2));
    }
    else if (_leg == TetrapodLeg::frontRight)
    {
        J.block<3, 3>(0, 3) = this->GetSingleLegTranslationLegJacobianInB(this->frOffset,
                                                                               _q_r(3),
                                                                               _q_r(4),
                                                                               _q_r(5));
    }
    else if (_leg == TetrapodLeg::frontRight)
    {
        J.block<3, 3>(0, 6) = this->GetSingleLegTranslationLegJacobianInB(this->rlOffset,
                                                                               _q_r(6),
                                                                               _q_r(7),
                                                                               _q_r(8));
    }
    else if (_leg == TetrapodLeg::frontRight)
    {
        J.block<3, 3>(0, 9) = this->GetSingleLegTranslationLegJacobianInB(this->rrOffset,
                                                                               _q_r(9),
                                                                               _q_r(10),
                                                                               _q_r(11));
    }
    else
    {
        ROS_ERROR_STREAM("Leg type could not be determined when finding SingeLegTranslationLegJacobianInB!");
    }

    return J;
}

// Joint state single leg translational  Jacobian in body frame
Eigen::Matrix<double, 3, 12> Kinematics::GetSingleLegTranslationalHipJacobianInB(const TetrapodLeg &_leg,
                                                                                      const Eigen::Matrix<double, 12, 1> &_q_r)
{
    Eigen::Matrix<double, 3, 12> J = Eigen::Matrix<double, 3, 12>::Zero();

    if (_leg == TetrapodLeg::frontLeft)
    {
        J.block<3, 3>(0, 0) = this->GetSingleLegTranslationalHipJacobianInB(this->flOffset,
                                                                               _q_r(0),
                                                                               _q_r(1),
                                                                               _q_r(2));
    }
    else if (_leg == TetrapodLeg::frontRight)
    {
        J.block<3, 3>(0, 3) = this->GetSingleLegTranslationalHipJacobianInB(this->frOffset,
                                                                               _q_r(3),
                                                                               _q_r(4),
                                                                               _q_r(5));
    }
    else if (_leg == TetrapodLeg::frontRight)
    {
        J.block<3, 3>(0, 6) = this->GetSingleLegTranslationalHipJacobianInB(this->rlOffset,
                                                                               _q_r(6),
                                                                               _q_r(7),
                                                                               _q_r(8));
    }
    else if (_leg == TetrapodLeg::frontRight)
    {
        J.block<3, 3>(0, 9) = this->GetSingleLegTranslationalHipJacobianInB(this->rrOffset,
                                                                               _q_r(9),
                                                                               _q_r(10),
                                                                               _q_r(11));
    }
    else
    {
        ROS_ERROR_STREAM("Leg type could not be determined when finding SingeLegTranslationHipJacobianInB!");
    }

    return J;
}


// Full state single leg translation Jacobian in world frame
Eigen::Matrix<double, 3, 18> Kinematics::GetTranslationJacobianInW(const LegType &_leg,
                                                                   const Eigen::Matrix<double, 18, 1> &_q)
{
    // Jacobian
    Eigen::Matrix<double, 3, 18> J;

    // Rotation from World to Body frame (transform from Body to World)
    kindr::RotationMatrixD rotationWToB(kindr::EulerAnglesZyxD(_q(5),
                                                               _q(4),
                                                               _q(3))
                                        );

    Eigen::Matrix<double, 3, 1> positionBaseToFootInB = this->GetPositionBaseToFootInB(_leg, _q);

    Eigen::Matrix<double, 3, 12> translationJacobianInB = this->GetSingleLegTranslationJacobianInB(_leg, _q.block<12, 1>(6,0));

    J.block<3, 3>(0,0).setIdentity();
    J.block<3, 3>(0,3) = - rotationWToB.matrix() * kindr::getSkewMatrixFromVector(positionBaseToFootInB);
    J.block<3, 12>(0,6) = rotationWToB.matrix() * translationJacobianInB; 

    return J;
} 

// Leg state single leg rotational Jacobian in body frame
Eigen::Matrix<double, 3, 3> Kinematics::GetSingleLegRotationJacobianInB(const bool &_offset,
                                                                        const double &_theta_hy, 
                                                                        const double &_theta_hp, 
                                                                        const double &_theta_kp)
{
    Eigen::Matrix<double, 3, 3> J;

    double c1 = std::cos(_theta_hy);
    double s1 = std::sin(_theta_hy);

    if (_offset)
    {
        J(0,0) = 0;
        J(1,0) = 0;
        J(2,0) = 1;

        J(0,1) = s1;
        J(1,1) = - c1;
        J(2,1) = 0;

        J(0,2) = s1;
        J(1,2) = - c1;
        J(2,2) = 0;
    }
    else
    {

        J(0,0) = 0;
        J(1,0) = 0;
        J(2,0) = 1;

        J(0,1) = - s1;
        J(1,1) = c1;
        J(2,1) = 0;

        J(0,2) = - s1;
        J(1,2) = c1;
        J(2,2) = 0;
    }

    return J;
}

// Joint state single leg rotation Jacobian in body frame
Eigen::Matrix<double, 3, 12> Kinematics::GetSingleLegRotationJacobianInB(const LegType &_leg, 
                                                                         const Eigen::Matrix<double, 12, 1> &_q_r)
{
    Eigen::Matrix<double, 3, 12> J = Eigen::Matrix<double, 3, 12>::Constant(0);

    if (_leg == LegType::frontLeft)
    {
        J.block<3, 3>(0,0) = this->GetSingleLegRotationJacobianInB(this->flOffset,
                                                                   _q_r(0), 
                                                                   _q_r(1), 
                                                                   _q_r(2));
    }
    else if (_leg == LegType::frontRight)
    {
        J.block<3, 3>(0,3) = this->GetSingleLegRotationJacobianInB(this->frOffset,
                                                                   _q_r(3), 
                                                                   _q_r(4), 
                                                                   _q_r(5));
    }
    else if (_leg == LegType::rearLeft)
    {
        J.block<3, 3>(0,6) = this->GetSingleLegRotationJacobianInB(this->rlOffset,
                                                                   _q_r(6), 
                                                                   _q_r(7), 
                                                                   _q_r(8));
    }
    else if (_leg == LegType::rearRight)
    {
        J.block<3, 3>(0,9) = this->GetSingleLegRotationJacobianInB(this->rrOffset,
                                                                   _q_r(9), 
                                                                   _q_r(10), 
                                                                   _q_r(11));
    }
    else
    {
        ROS_ERROR_STREAM("Leg type could not be determined when finding SingeLegTranslationJacobianInB!");
    }

    return J;
}

// Full state single leg rotation Jacobian in world frame
Eigen::Matrix<double, 3, 18> Kinematics::GetRotationJacobianInW(const LegType &_leg,
                                                                const Eigen::Matrix<double, 18, 1> &_q)
{
    // Jacobian
    Eigen::Matrix<double, 3, 18> J;

    // Rotation from World to Body frame (transform from Body to World)
    kindr::RotationMatrixD rotationWToB(kindr::EulerAnglesZyxD(_q(5),
                                                               _q(4),
                                                               _q(3))
                                        );

    Eigen::Matrix<double, 3, 12> rotationJacobianInB = this->GetSingleLegRotationJacobianInB(_leg, _q.block<12, 1>(6,0));

    J.block<3, 3>(0,0).setZero();
    J.block<3, 3>(0,3) = rotationWToB.matrix();
    J.block<3, 12>(0,6) = rotationWToB.matrix() * rotationJacobianInB; 

    return J;
} 

// Full state single leg rotation Jacobian in world frame
Eigen::Matrix<double, 6, 18> Kinematics::GetJacobianInW(const LegType &_leg,
                                                        const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 6, 18> J;

    J.block<3, 18>(0,0) = this->GetTranslationJacobianInW(_leg, _q);
    J.block<3, 18>(3,0) = this->GetRotationJacobianInW(_leg, _q);

    return J;
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

    // TODO Implement functionality here



    return m * J_COM.transpose() * J_COM + J_R.transpose() * I_COM * J_R;
}

// Mass matrix
Eigen::Matrix<double, 18, 18> Kinematics::GetMassMatrix(const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 18, 18> M = Eigen::Matrix<double, 18, 18>::Constant(0); // Mass matrix


    static const std::vector<BodyType> bodies{ BodyType::base,
                                               BodyType::shoulder,
                                               BodyType::femur,
                                               BodyType::fibula };

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

    Eigen::Matrix<double, 3, 3> I_COM;   // Inertia matrix for the COM of the body

    Eigen::Matrix<double, 3, 1> omega_inW = J_R * _u;

    double m; // Mass of the body

    // TODO Implement





    return m * J_COM.transpose() * dot_J_COM * _u + J_R.transpose() * ( I_COM * dot_J_R * _u + kindr::getSkewMatrixFromVector(omega_inW) * I_COM * omega_inW);
}

// Coriolis and centrifugal terms
Eigen::Matrix<double, 18, 1> Kinematics::GetCoriolisAndCentrifugalTerms(const Eigen::Matrix<double, 18, 1> &_q,
                                                                        const Eigen::Matrix<double, 18, 1> &_u)
{
    Eigen::Matrix<double, 18, 1> b = Eigen::Matrix<double, 18, 1>::Constant(0); // Coriolis and centrifugal terms. 


    static const std::vector<BodyType> bodies{ BodyType::base,
                                               BodyType::shoulder,
                                               BodyType::femur,
                                               BodyType::fibula };

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

// Single body gravitational terms
Eigen::Matrix<double, 18, 1> Kinematics::GetSingleBodyGravitationalTerms(const LegType &_leg,
                                                                         const BodyType &_body,
                                                                         const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 3, 18> J_COM;  // Translation Jacobian about COM of the body

    Eigen::Matrix<double, 3, 1> F_g;     // Gravitational force

    double g = 9.81; // Gravitational constant
    double m; // Mass

    // TODO Implement

    F_g = m * g * Eigen::Matrix<double, 3, 1>(0,0,1);
    
    return - J_COM.transpose() * F_g;
}

// Gravitational terms
Eigen::Matrix<double, 18, 1> Kinematics::GetGravitationalTerms(const Eigen::Matrix<double, 18, 1> &_q)
{
    Eigen::Matrix<double, 18, 1> g = Eigen::Matrix<double, 18, 1>::Constant(0); // Gravitational terms


    static const std::vector<BodyType> bodies{ BodyType::base,
                                               BodyType::shoulder,
                                               BodyType::femur,
                                               BodyType::fibula };

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

    return g;
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