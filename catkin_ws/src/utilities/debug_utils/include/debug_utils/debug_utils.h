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
#include <math_utils/angle_utils.h>

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

    /// \brief The printBaseAccel function prints a given base-
    /// accel to ROS using print level INFO.
    /// \param[in] _base_accel Base Accel (x_accel,y_accel,z_accel,roll_accel,pitch_accel,yaw_accel)
    void printBaseAccel(const Eigen::Matrix<double, 6, 1> &_base_accel);

    /// \brief The printJointState function prints a given joint-
    /// state to ROS using print level INFO.
    /// \param[in] _joint_state Joint angles
    void printJointState(const Eigen::Matrix<double, 12, 1> &_joint_state);

    /// \brief The printJointVelocities function prints given joint-
    /// velocities to ROS using print level INFO.
    /// \param[in] _joint_vel Joint velocities
    void printJointVelocities(const Eigen::Matrix<double, 12, 1> &_joint_vel);

    /// \brief The printJointAccelerations function prints given joint-
    /// accelerations to ROS using print level INFO.
    /// \param[in] _joint_accel Joint accelerations
    void printJointAccelerations(const Eigen::Matrix<double, 12, 1> &_joint_vel);

    /// \brief The printJointTorques function prints given joint-
    /// torques to ROS using print level INFO.
    /// \param[in] _joint_trq Joint torques
    void printJointTorques(const Eigen::Matrix<double, 12, 1> &_joint_trq);

    /// \brief The printGeneralizedCoordinates function prints a given set
    /// of generalized coordinates to ROS using print level INFO.
    /// \param[in] _gen_coord  Generalized coordinates
    void printGeneralizedCoordinates(const Eigen::Matrix<double, 18, 1> &_gen_coord);

    /// \brief The printGeneralizedVelocities function prints a given set
    /// of generalized velocities to ROS using print level INFO.
    /// \param[in] _gen_vel  Generalized velocities
    void printGeneralizedVelocities(const Eigen::Matrix<double, 18, 1> &_gen_vel);

    /// \brief The printGeneralizedAccelerations function prints a given set
    /// of generalized accelerations to ROS using print level INFO.
    /// \param[in] _gen_accel  Generalized accelerations 
    void printGeneralizedAccelerations(const Eigen::Matrix<double, 18, 1> &_gen_accel);

    /// \brief The printFootstepPositions function prints a given set
    /// of footstep positions to ROS using print level INFO.
    /// \param[in] _gen_coord  Generalized coordinates
    void printFootstepPositions(const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_pos);

    /// \brief The printFootstepPositions function prints a given set
    /// of footstep forces to ROS using print level INFO.
    /// \param[in] _contact_state Pointer to array of contact state
    /// \param[in] _F_c Contact forces
    void printFootstepForces(const int* _contact_state,
                             const Eigen::VectorXd &_F_c);


} // namespace debug_utils