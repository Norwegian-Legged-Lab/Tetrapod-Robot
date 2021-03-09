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
    // Set link lenghts
    this->L1 = 1;
    this->L2 = 1;
    this->L3 = 1;

    // Set position vectors
    this->positionBaseToFrontLeft << 1, 1, 0;
    this->positionBaseToFrontRight << 1, -1, 0;
    this->positionBaseToRearLeft << -1, 1, 0;
    this->positionBaseToRearRight << -1, -1, 0;
}

// Destructor
Kinematics::~Kinematics() {}

// Solve forward kinematics
bool Kinematics::SolveForwardKinematics(const GeneralizedCoordinates &_q, 
                                        FootstepPositions &_fPos)
{  
    kindr::Position3D base_position(_q.block(0,0,2,0));
    kindr::Position3D base_orientation(_q.block(3,0,5,0));

    kindr::RotationMatrixD base_rotation(kindr::EulerAnglesZyxD(base_orientation(2),
                                                                base_orientation(1),
                                                                base_orientation(0))
                                        );

    kindr::HomTransformMatrixD transformBaseToHip(base_position, base_rotation);

    Eigen::Vector3d front_left_hip_pos = transformBaseToHip.transform(kindr::Position3D(this->positionBaseToFrontLeft)).vector();
    Eigen::Vector3d front_right_hip_pos = transformBaseToHip.transform(kindr::Position3D(this->positionBaseToFrontRight)).vector();
    Eigen::Vector3d rear_left_hip_pos = transformBaseToHip.transform(kindr::Position3D(this->positionBaseToRearLeft)).vector();
    Eigen::Vector3d rear_right_hip_pos = transformBaseToHip.transform(kindr::Position3D(this->positionBaseToRearRight)).vector();

    _fPos(0) = front_left_hip_pos;
    _fPos(1) = front_right_hip_pos;
    _fPos(2) = rear_left_hip_pos;
    _fPos(3) = rear_right_hip_pos;

    return true;
}

// Solve single leg forward kinematics
Vector3d Kinematics::SolveSingleLegForwardKinematics(const Vector3d &_h_pos,
                                                     const double &_theta_hy, 
                                                     const double &_theta_hp,
                                                     const double &_theta_kp)
{
    // First D-H transformation
    kindr::HomTransformMatrixD t1 = this->GetDhTransform(this->L1,
                                                         -angle_utils::HALF_PI,
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

    // End-effector position
    Eigen::Vector3d pos = transformation.transform(kindr::Position3D(_h_pos)).vector();

    return pos;
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