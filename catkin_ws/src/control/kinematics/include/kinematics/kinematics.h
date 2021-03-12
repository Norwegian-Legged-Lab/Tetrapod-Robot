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

// C++ Standard Library
#include <cmath>

// ROS Package Libraries
#include <angle_utils/angle_utils.h>

// Eigen
#include <Eigen/Core>

// Kindr
#include <kindr/Core>

using GeneralizedCoordinates = Eigen::Matrix<double, 18, 1>;
using FootstepPositions = Eigen::Matrix<Eigen::Vector3d, 4, 1>;
using JointSpaceVector = Eigen::Matrix<double, 12, 1>;
using Twist = Eigen::Matrix<double, 6, 1>;
using Vector3d = Eigen::Vector3d;
using TransMatrix = kindr::HomTransformMatrixD;

/// \brief A class for analytical Kinematics Solving
class Kinematics
{

    /// \brief Constructor
    public: Kinematics();

    /// \brief Destructor
    public: virtual ~Kinematics();

    /// \brief The SolveForwardKinematics function calculates
    /// the Forward Kinematics, i.e. maps joint angles in Joint Space
    /// to a coordinate point in Coordinate Space.
    /// \param[in] _q Generalized coordinates containing the floating base
    /// and joint positions.
    /// \param[out] _f_pos Footstep positions generated from solving the forward
    /// kinematics.
    /// \return Evaluates true if an Forward Kinematics solution is found,
    /// and false if not.
    public: bool SolveForwardKinematics(const GeneralizedCoordinates &_q, FootstepPositions &_f_pos);

    /// \brief The SolveInverseKinematics function calculates
    /// the Inverse Kinematics, i.e. maps a coordinate point 
    /// in the Coordinate Space to joint angles in the Joint Space.
    /// \param[in] _pos Cartesian coordinates to solve for.
    /// \param[out] _q_r Joint angles from the Inverse Kinematics solution.
    /// \return Evaluates true if an Inverse Kinematics solution is found,
    /// and false if not.
    public: bool SolveInverseKinematics(const Vector3d &_pos, JointSpaceVector &_q_r);

    /// \brief The SolveSingleLegForwardKinematics function calculates
    /// the Forward Kinematics for a single leg.
    /// \param[in] _h_pos Hip position in world frame.
    /// \param[in] _theta_hy Hip yaw angle.
    /// \param[in] _theta_hp Hip pitch angle.
    /// \param[in] _theta_kp Knee pitch angle.
    /// \return Returns end-effector position in Coordinate Space.
    public: Vector3d SolveSingleLegForwardKinematics(const Vector3d &_h_pos, const double &_theta_hy, const double &_theta_hp, const double &_theta_kp); 

    /// \brief The SolveSingeLegInverseKinematics function calculates
    /// the inverse kinematics for a single leg.
    /// \param[in] _h_pos Hip position in world frame.
    /// \param[in] _f_pos Foot position in world frame.
    /// \return Returns a joint positions in Joint Space for a single leg, i.e. theta_hy, theta_hp & theta_kp.
    public: Vector3d SolveSingleLegInverseKinematics(const Vector3d &_h_pos, const Vector3d &_f_pos);

    /// \brief The GetHipToFootTransform function returns the homogeneous
    /// transformation from the Hip frame to the Foot frame.
    /// \param[in] _theta_hy Hip yaw angle.
    /// \param[in] _theta_hp Hip pitch angle.
    /// \param[in] _theta_kp Knee pitch angle.
    /// \return Returns the kindr homogeneous transformation matrix from Hip to Foot.
    public: TransMatrix GetHipToFootTransform(const double &_theta_hy, const double &_theta_hp, const double &_theta_kp);

    /// \brief The GetDhTransform function returns the Denavit-Hartenberg
    /// transformation from frame A to frame B.
    /// \param[in] _a Link length.
    /// \param[in] _alpha Link twist.
    /// \param[in] _d Link offset.
    /// \param[in] _theta Joint angle.
    /// \return Returns the kindr homogeneous transformation matrix from frame A to frame B.
    public: TransMatrix GetDhTransform(const double &_a, const double &_alpha, const double &_d, const double &_theta);

    /// \brief The ValidateSolution function evaluates whether
    /// a set of joint angles is within joint limits. 
    /// \param[in] _q_r Joint angles generated by the IK solver.
    /// \return Evaluates true if IK solution is valid, and false if not.
    private: bool ValidateSolution(const JointSpaceVector &_q_r);

    /// \brief Minimum joint limits.
    private: JointSpaceVector min_angles;

    /// \brief Maximum joint limits.
    private: JointSpaceVector max_angles;

    /// \brief Position vector relating the base coordinates to 
    /// the front left hip
    private: Vector3d positionBaseToFrontLeftInB;

    /// \brief Position vector relating the base coordinates to 
    /// the front right hip
    private: Vector3d positionBaseToFrontRightInB;

    /// \brief Position vector relating the base coordinates to 
    /// the rear left hip
    private: Vector3d positionBaseToRearLeftInB;

    /// \brief Position vector relating the base coordinates to 
    /// the rear right hip
    private: Vector3d positionBaseToRearRightInB;

    /// \brief Hip link length
    private: double L1;

    /// \brief Thigh (Femur) link length
    private: double L2;

    /// \brief Leg (Fibula & Tibia) link length
    private: double L3;


};