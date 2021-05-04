/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   debug_utils.h                                        */
/*    DATE:   Apr 12, 2021                                         */
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

// C++ Standard Libraries
#include <cmath>

// ROS
#include "ros/ros.h"

// ROS Package Libraries
#include <angle_utils/angle_utils.h>

// Eigen
#include <Eigen/Core>

namespace debug_utils
{
    /// \brief The printBaseState function prints a given base-
    /// state to ROS using print level INFO.
    /// \param[in] _base_state Base State (x,y,z,roll,pitch,yaw)
    void printBaseState(const Eigen::Matrix<double, 6, 1> &_base_state);

    /// \brief The printBaseTwist function prints a given base-
    /// twist to ROS using print level INFO.
    /// \param[in] _base_twist Base Twist (x_vel,y_vel,z_vel,roll_rate,pitch_rate,yaw_rate)
    void printBaseTwist(const Eigen::Matrix<double, 6, 1> &_base_twist);

    /// \brief The printJointState function prints a given joint-
    /// state to ROS using print level INFO.
    /// \param[in] _joint_state Joint angles
    void printJointState(const Eigen::Matrix<double, 12, 1> &_joint_state);

    /// \brief The printJointVelocities function prints given joint-
    /// velocities to ROS using print level INFO.
    /// \param[in] _joint_vel Joint velocities
    void printJointVelocities(const Eigen::Matrix<double, 12, 1> &_joint_vel);

    /// \brief The printGeneralizedCoordinates function prints a given set
    /// of generalized coordinates to ROS using print level INFO.
    /// \param[in] _gen_coord  Generalized coordinates
    void printGeneralizedCoordinates(const Eigen::Matrix<double, 18, 1> &_gen_coord);

    /// \brief The printGeneralizedVelocities function prints a given set
    /// of generalized velocities to ROS using print level INFO.
    /// \param[in] _gen_vel  Generalized velocities
    void printGeneralizedVelocities(const Eigen::Matrix<double, 18, 1> &_gen_vel);

    /// \brief The printFootstepPositions function prints a given set
    /// of footstep positions to ROS using print level INFO.
    /// \param[in] _gen_coord  Generalized coordinates
    void printFootstepPositions(const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_pos);


} // namespace debug_utils