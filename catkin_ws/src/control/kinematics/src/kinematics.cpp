/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   forward_kinematics.cpp                               */
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
}

// Destructor
Kinematics::~Kinematics() {}

// Solve forward kinematics
bool Kinematics::SolveForwardKinematics(const GeneralizedCoordinates &_q, FootstepPositions &_fPos)
{   
    return true;
}

// Denavit-Hartenberg Transformation
TransMatrix Kinematics::GetDhTransform(const double &_a, const double &_alpha, const double &_d, const double &_theta)
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