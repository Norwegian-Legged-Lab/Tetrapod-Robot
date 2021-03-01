/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   forward_kinematics.h                                 */
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

#pragma once

// Eigen
#include <Eigen/Core>

/// \brief A class for analytical Inverse Kinematics Solving
class ForwardKinematics
{
    using GeneralizedCoordinates = Eigen::Matrix<double, 18, 1>;
    using FootstepPositions = Eigen::Matrix<Eigen::Vector3d, 4, 1>;

    /// \brief Constructor
    public: ForwardKinematics();

    /// \brief Destructor
    public: virtual ~ForwardKinematics();

    /// \brief The SolveForwardKinematics function calculates
    /// the Inverse Kinematics, i.e. maps a coordinate point 
    /// in the Coordinate Space to joint angles in the Joint Space.
    /// \param[in] _q Generalized coordinates containing the floating base
    /// and joint positions.
    /// \param[out] _fPos Footstep positions generated from solving the forward
    /// kinematics.
    /// \return Evaluates true if an Forward Kinematics solution is found,
    /// and false if not.
    public: bool SolveForwardKinematics(const GeneralizedCoordinates &_q, FootstepPositions &_fPos );

};