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
    this->min_angles(0) = angle_utils::degToRad(0);      // fl, hy
    this->min_angles(1) = angle_utils::degToRad(-90);    // fl, hp
    this->min_angles(2) = angle_utils::degToRad(-115);   // fl, kp
    this->min_angles(3) = angle_utils::degToRad(-170);   // fr, hy
    this->min_angles(4) = angle_utils::degToRad(-90);    // fr, hp
    this->min_angles(5) = angle_utils::degToRad(-115);   // fr, kp
    this->min_angles(6) = angle_utils::degToRad(10);     // rl, hy
    this->min_angles(7) = angle_utils::degToRad(-90);    // rl, hp
    this->min_angles(8) = angle_utils::degToRad(-115);   // rl, kp
    this->min_angles(9) = angle_utils::degToRad(-180);   // rr, hy
    this->min_angles(10) = angle_utils::degToRad(-90);   // rr, hp
    this->min_angles(11) = angle_utils::degToRad(-115);  // rr, kp

    this->max_angles(0) = angle_utils::degToRad(170);    // fl, hy
    this->max_angles(1) = angle_utils::degToRad(90);     // fl, hp
    this->max_angles(2) = angle_utils::degToRad(115);    // fl, kp
    this->max_angles(3) = angle_utils::degToRad(0);      // fr, hy
    this->max_angles(4) = angle_utils::degToRad(90);     // fr, hp
    this->max_angles(5) = angle_utils::degToRad(115);    // fr, kp
    this->max_angles(6) = angle_utils::degToRad(180);    // rl, hy
    this->max_angles(7) = angle_utils::degToRad(90);     // rl, hp
    this->max_angles(8) = angle_utils::degToRad(115);    // rl, kp
    this->max_angles(9) = angle_utils::degToRad(-10);    // rr, hy
    this->max_angles(10) = angle_utils::degToRad(90);    // rr, hp
    this->max_angles(11) = angle_utils::degToRad(115);   // rr, kp

    // Set link lenghts
    this->L1 = 0.127;
    this->L2 = 0.302;
    this->L3 = 0.4645;

    // Set position vectors
    this->positionBaseToFrontLeftInB << 0.151, 0.185, 0;
    this->positionBaseToFrontRightInB << 0.151, -0.185, 0;
    this->positionBaseToRearLeftInB << -0.151, 0.185, 0;
    this->positionBaseToRearRightInB << -0.151, -0.185, 0;

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
    // Base Pose
    kindr::Position3D base_position(_q_b.block(0,0,2,0));
    kindr::Position3D base_orientation(_q_b.block(3,0,5,0));

    // Rotation from Body to World frame
    kindr::RotationMatrixD rotationBToW(kindr::EulerAnglesZyxD(base_orientation(2),
                                                                base_orientation(1),
                                                                base_orientation(0))
                                        );

    // Base to hip positions in World Frame.
    kindr::Position3D positionBaseToFrontLeftInW(rotationBToW.matrix()*positionBaseToFrontLeftInB);
    kindr::Position3D positionBaseToFrontRightInW(rotationBToW.matrix()*positionBaseToFrontRightInB);
    kindr::Position3D positionBaseToRearLeftInW(rotationBToW.matrix()*positionBaseToRearLeftInB);
    kindr::Position3D positionBaseToRearRightInW(rotationBToW.matrix()*positionBaseToRearRightInB);

    // Base to hip transformations
    kindr::HomTransformMatrixD transformBaseToFrontLeftHip(positionBaseToFrontLeftInW, rotationBToW);
    kindr::HomTransformMatrixD transformBaseToFrontRightHip(positionBaseToFrontRightInW, rotationBToW);
    kindr::HomTransformMatrixD transformBaseToRearLeftHip(positionBaseToRearLeftInW, rotationBToW);
    kindr::HomTransformMatrixD transformBaseToRearRightHip(positionBaseToRearRightInW, rotationBToW);

    // Hip positions
    Eigen::Matrix<Eigen::Vector3d, 4, 1> h_pos;

    h_pos(0) = transformBaseToFrontLeftHip.transform(base_position).vector();
    h_pos(1) = transformBaseToFrontRightHip.transform(base_position).vector();
    h_pos(2) = transformBaseToRearLeftHip.transform(base_position).vector();
    h_pos(3) = transformBaseToRearRightHip.transform(base_position).vector();

    // TODO remove uneccesarry prints
    //ROS_INFO_STREAM("h_pos(0): " << h_pos(0));
    //ROS_INFO_STREAM("h_pos(1): " << h_pos(1));
    //ROS_INFO_STREAM("h_pos(2): " << h_pos(2));
    //ROS_INFO_STREAM("h_pos(3): " << h_pos(3));

    // Joint angles
    _q_r.block(0,0,2,0) << this->SolveSingleLegInverseKinematics(this->flOffset, h_pos(0), _f_pos(0));
    _q_r.block(3,0,5,0) << this->SolveSingleLegInverseKinematics(this->frOffset, h_pos(1), _f_pos(1));
    _q_r.block(6,0,8,0) << this->SolveSingleLegInverseKinematics(this->rlOffset, h_pos(2), _f_pos(2));
    _q_r.block(9,0,11,0) << this->SolveSingleLegInverseKinematics(this->rrOffset, h_pos(3), _f_pos(3));

    return this->ValidateSolution(_q_r); 
}

// Solve forward kinematics
bool Kinematics::SolveForwardKinematics(const GeneralizedCoordinates &_q, 
                                        FootstepPositions &_f_pos)
{  

    // Base Pose
    kindr::Position3D base_position(_q.block(0,0,2,0));
    kindr::Position3D base_orientation(_q.block(3,0,5,0));

    // Rotation from Body to World frame
    kindr::RotationMatrixD rotationBToW(kindr::EulerAnglesZyxD(base_orientation(2),
                                                                base_orientation(1),
                                                                base_orientation(0))
                                        );

    // Base to hip positions in World Frame.
    kindr::Position3D positionBaseToFrontLeftInW(rotationBToW.matrix()*positionBaseToFrontLeftInB);
    kindr::Position3D positionBaseToFrontRightInW(rotationBToW.matrix()*positionBaseToFrontRightInB);
    kindr::Position3D positionBaseToRearLeftInW(rotationBToW.matrix()*positionBaseToRearLeftInB);
    kindr::Position3D positionBaseToRearRightInW(rotationBToW.matrix()*positionBaseToRearRightInB);

    // Base to hip transformations
    kindr::HomTransformMatrixD transformBaseToFrontLeftHip(positionBaseToFrontLeftInW, rotationBToW);
    kindr::HomTransformMatrixD transformBaseToFrontRightHip(positionBaseToFrontRightInW, rotationBToW);
    kindr::HomTransformMatrixD transformBaseToRearLeftHip(positionBaseToRearLeftInW, rotationBToW);
    kindr::HomTransformMatrixD transformBaseToRearRightHip(positionBaseToRearRightInW, rotationBToW);

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
    Eigen::Vector3d pos = transformation.transform(kindr::Position3D(_h_pos)).vector();

    return pos;
}

Vector3d Kinematics::SolveSingleLegInverseKinematics(const bool &_offset, const Vector3d &_h_pos, const Vector3d &_f_pos)
{
    // Define joint angles vector
    Eigen::Vector3d joint_angles;

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

    // Angle between foot-hip pitch-knee joints
    double beta = std::acos( ( std::pow(normHipPitchToFoot, 2) + std::pow(this->L2, 2) - std::pow(this->L3, 2) ) / ( 2 * normHipPitchToFoot * this->L2 ) );

    // Check offset and set angles accordingly
    if (_offset)
    {
        // Calculate theta_hy
        joint_angles(0) = std::atan2(y_e, x_e);

        // Calculate theta_hp
        joint_angles(1) = beta - zeta;

        // Calculate theta_kp
        joint_angles(2) = alpha - angle_utils::PI;
    }
    else
    {
        // Calculate theta_hy
        joint_angles(0) = std::atan2(y_e, x_e);

        // Calculate theta_hp
        joint_angles(1) = - beta + zeta;

        // Calculate theta_kp
        joint_angles(2) = angle_utils::PI - alpha;
    }

    return joint_angles;
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
        roll_offset = angle_utils::HALF_PI;
    } else
    {
        roll_offset = -angle_utils::HALF_PI;
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