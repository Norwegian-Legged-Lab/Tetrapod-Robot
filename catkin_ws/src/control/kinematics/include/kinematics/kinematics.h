/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   kinematics.h                                         */
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

// Kindr
#include <kindr/Core>

/// \brief A class for analytical Inverse Kinematics Solving
class Kinematics
{
    using GeneralizedCoordinates = Eigen::Matrix<double, 18, 1>;
    using FootstepPositions = Eigen::Matrix<Eigen::Vector3d, 4, 1>;
    using JointSpaceVector = Eigen::Matrix<double, 12, 1>;

    /// \brief Constructor
    public: Kinematics();

    /// \brief Destructor
    public: virtual ~Kinematics();

    /// \brief The SolveForwardKinematics function calculates
    /// the Inverse Kinematics, i.e. maps a coordinate point 
    /// in the Coordinate Space to joint angles in the Joint Space.
    /// \param[in] _q Generalized coordinates containing the floating base
    /// and joint positions.
    /// \param[out] _fPos Footstep positions generated from solving the forward
    /// kinematics.
    /// \return Evaluates true if an Forward Kinematics solution is found,
    /// and false if not.
    public: bool SolveForwardKinematics(const GeneralizedCoordinates &_q, FootstepPositions &_fPos);

    /// \brief The SolveInverseKinematics function calculates
    /// the Inverse Kinematics, i.e. maps a coordinate point 
    /// in the Coordinate Space to joint angles in the Joint Space.
    /// \param[in] _pos Cartesian coordinates to solve for.
    /// \param[out] _q_r Joint angles from the Inverse Kinematics solution.
    /// \return Evaluates true if an Inverse Kinematics solution is found,
    /// and false if not.
    public: bool SolveInverseKinematics(const Eigen::Vector3d &_pos, JointSpaceVector &_q_r);

    /// \brief The ValidateSolution function evaluates whether
    /// a set of joint angles is within joint limits. 
    /// \param[in] _q_r Joint angles generated by the IK solver.
    /// \return Evaluates true if IK solution is valid, and false if not.
    private: bool ValidateSolution(const JointSpaceVector &_q_r);

    /// \brief Minimum joint limits.
    private: JointSpaceVector min_angles;

    /// \brief Maximum joint limits.
    private: JointSpaceVector max_angles;

    /// \brief Hip link length
    private: double L1;

    /// \brief Thigh (Femur) link length
    private: double L2;

    /// \brief Leg (Fibula & Tibia) link length
    private: double L3;


};