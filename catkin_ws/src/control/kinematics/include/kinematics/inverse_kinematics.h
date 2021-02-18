/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   tetrapod_plugin.h                                    */
/*    DATE:   Feb 4, 2021                                          */
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

#pragma once

// Eigen
#include <Eigen/Core>

/// \brief A class for analytical Inverse Kinematics Solving
class InverseKinematics
{
    /// \brief Constructor
    public: InverseKinematics();

    /// \brief Destructor
    public: virtual ~InverseKinematics();

    /// \brief The SolveInverseKinematics function calculates
    /// the Inverse Kinematics, i.e. maps a coordinate point 
    /// in the Coordinate Space to joint angles in the Joint Space.
    /// \param[in] _pos Cartesian coordinates to solve for.
    /// \param[out] _q Joint angles from the Inverse Kinematics solution.
    /// \return Evaluates true if an Inverse Kinematics solution is found
    /// and false if not.
    public: bool SolveInverseKinematics(const Eigen::Vector3d &_pos, Eigen::Matrix<double, 12, 1> &_q);

};