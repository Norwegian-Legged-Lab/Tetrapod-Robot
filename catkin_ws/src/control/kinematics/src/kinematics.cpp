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
    this->positionBaseToFrontLeftInB << 1, 1, 0;
    this->positionBaseToFrontRightInB << 1, -1, 0;
    this->positionBaseToRearLeftInB << -1, 1, 0;
    this->positionBaseToRearRightInB << -1, -1, 0;
}

// Destructor
Kinematics::~Kinematics() {}

// Solve forward kinematics
bool Kinematics::SolveForwardKinematics(const GeneralizedCoordinates &_q, 
                                        FootstepPositions &_fPos)
{  

    // Base Pose
    kindr::Position3D base_position(_q.block(0,0,2,0));
    kindr::Position3D base_orientation(_q.block(3,0,5,0));

    // Rotation from Body to World frame
    kindr::RotationMatrixD rotationBToW(kindr::EulerAnglesZyxD(base_orientation(2),
                                                                base_orientation(1),
                                                                base_orientation(0))
                                        );

    kindr::Position3D positionBaseToFrontLeftInW(rotationBToW.matrix()*positionBaseToFrontLeftInB);
    kindr::Position3D positionBaseToFrontRightInW(rotationBToW.matrix()*positionBaseToFrontRightInB);
    kindr::Position3D positionBaseToRearLeftInW(rotationBToW.matrix()*positionBaseToRearLeftInB);
    kindr::Position3D positionBaseToRearRightInW(rotationBToW.matrix()*positionBaseToRearRightInB);


    kindr::HomTransformMatrixD transformBaseToFrontLeftHip(positionBaseToFrontLeftInW, rotationBToW);
    kindr::HomTransformMatrixD transformBaseToFrontRightHip(positionBaseToFrontRightInW, rotationBToW);
    kindr::HomTransformMatrixD transformBaseToRearLeftHip(positionBaseToRearLeftInW, rotationBToW);
    kindr::HomTransformMatrixD transformBaseToRearRightHip(positionBaseToRearRightInW, rotationBToW);

    kindr::HomTransformMatrixD transformFrontLeftHipToFoot = this->GetHipToFootTransform(_q(6),
                                                                                         _q(7),
                                                                                         _q(8));
    kindr::HomTransformMatrixD transformFrontRightHipToFoot = this->GetHipToFootTransform(_q(9),
                                                                                          _q(10),
                                                                                          _q(11));

    kindr::HomTransformMatrixD transformRearLeftHipToFoot = this->GetHipToFootTransform(_q(12),
                                                                                        _q(13),
                                                                                        _q(14));

    kindr::HomTransformMatrixD transformRearRightHipToFoot = this->GetHipToFootTransform(_q(15),
                                                                                         _q(16),
                                                                                         _q(17));

    kindr::HomTransformMatrixD transformBaseToFrontLeftFoot = transformBaseToFrontLeftHip*transformFrontLeftHipToFoot;
    kindr::HomTransformMatrixD transformBaseToFrontRightFoot = transformBaseToFrontRightHip*transformFrontRightHipToFoot;
    kindr::HomTransformMatrixD transformBaseToRearLeftFoot = transformBaseToRearLeftHip*transformRearRightHipToFoot;
    kindr::HomTransformMatrixD transformBaseToRearRightFoot = transformBaseToRearRightHip*transformRearRightHipToFoot;

    //_fPos(0) = transformBaseToFrontLeftFoot.transform(kindr::Position3D(this->positionBaseToFrontLeft)).vector();
    _fPos(0) = transformBaseToFrontLeftFoot.transform(base_position).vector();
    _fPos(1) = transformBaseToFrontRightFoot.transform(base_position).vector();
    _fPos(2) = transformBaseToRearLeftFoot.transform(base_position).vector();
    _fPos(3) = transformBaseToRearRightFoot.transform(base_position).vector();

    return true;
}

// Solve single leg forward kinematics
Vector3d Kinematics::SolveSingleLegForwardKinematics(const Vector3d &_h_pos,
                                                     const double &_theta_hy, 
                                                     const double &_theta_hp,
                                                     const double &_theta_kp)
{
    // Complete D-H transformation
    kindr::HomTransformMatrixD transformation = this->GetHipToFootTransform(_theta_hy,
                                                                            _theta_hp,
                                                                            _theta_kp); 

    // End-effector position
    Eigen::Vector3d pos = transformation.transform(kindr::Position3D(_h_pos)).vector();

    return pos;
}

// HipToFootTransform
TransMatrix Kinematics::GetHipToFootTransform(const double &_theta_hy, 
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