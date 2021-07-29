/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   kinematics.h                                         */
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

// C++ Standard Library
#include <cmath>
#include <algorithm>

// ROS
#include "ros/ros.h" 

// ROS Package Libraries
#include <math_utils/angle_utils.h>

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
    /// \brief Leg type enumerator
    public: enum LegType { frontLeft = 1, frontRight = 2, rearLeft = 3, rearRight = 4, NONE };

    /// \brief Body type enumerator
    public: enum BodyType { base = 1, hip = 2, thigh = 3, leg = 4, foot = 5 };

    /// \brief Constructor
    public: Kinematics();

    /// \brief Destructor
    public: virtual ~Kinematics();

    /// \brief The SolveForwardKinematics function calculates
    /// the Forward Kinematics, i.e. maps joint angles in Joint Space
    /// to a coordinate point in Coordinate Space.
    /// \param[in] _q Generalized coordinates. containing the floating base
    /// and joint positions.
    /// \param[out] _f_pos Footstep positions generated from solving the forward
    /// kinematics.
    /// \return Evaluates true if an Forward Kinematics solution is found,
    /// and false if not.
    public: bool SolveForwardKinematics(const GeneralizedCoordinates &_q, 
                                        FootstepPositions &_f_pos);

    /// \brief The SolveInverseKinematics function calculates
    /// the Inverse Kinematics, i.e. maps a coordinate point 
    /// in the Coordinate Space to joint angles in the Joint Space.
    /// \param[in] _q_b Base Pose in the world frame.
    /// \param[in] _f_pos Footstep positions in the world frame.
    /// \param[out] _q_r Joint angles from the Inverse Kinematics solution.
    /// \return Evaluates true if an Inverse Kinematics solution is found,
    /// and false if not.
    public: bool SolveInverseKinematics(const Twist &_q_b, 
                                        const FootstepPositions &_f_pos, 
                                        JointSpaceVector &_q_r);

    /// \brief The SolveSingleLegForwardKinematics function calculates
    /// the Forward Kinematics for a single leg.
    /// \param[in] _h_pos Hip position in world frame.
    /// \param[in] _theta_hy Hip yaw angle.
    /// \param[in] _theta_hp Hip pitch angle.
    /// \param[in] _theta_kp Knee pitch angle.
    /// \return Returns end-effector position in Coordinate Space.
    public: Vector3d SolveSingleLegForwardKinematics(const Vector3d &_h_pos, 
                                                     const double &_theta_hy, 
                                                     const double &_theta_hp, 
                                                     const double &_theta_kp); 

    /// \brief The SolveSingleLegForwardKinematics function calculates
    /// the foot position in the hip frame
    /// \param[in] _joint_angles A vector containing the hip yaw, hip pitch and
    /// knee pitch angles 
    /// \return Returns end-effector position in the hip frame.
    public: Vector3d SolveSingleLegForwardKinematics(const Vector3d &_joint_angles);

    /// \brief The SolveSingleLegForwardKinematics function calculates
    /// the foot position in the hip frame
    /// \param[in] _leg_type Indicates which leg it is
    /// \param[in] _joint_angles A vector containing the hip yaw, hip pitch and
    /// knee pitch angles 
    /// \return Returns end-effector position in the hip frame.
    public: Vector3d SolveSingleLegForwardKinematics(const LegType &_leg_type, const Vector3d &_joint_angles);

    /// \brief The SolveSingleLegHipToFootForwardKinematics function calculates
    /// the foot position in the hip frame
    /// \param[in] _leg_type Indicates which leg it is
    /// \param[in] _joint_angles A vector containing the hip yaw, hip pitch and
    /// knee pitch angles 
    /// \return Returns end-effector position in the hip frame.
    public: Vector3d SolveSingleLegHipToFootForwardKinematics(const LegType &_leg_type, const Vector3d &_joint_angles);

    /// \brief The SolveSingeLegInverseKinematics function calculates
    /// the inverse kinematics for a single leg.
    /// \param[in] _offset Bool indicating whether the leg is roll
    /// offset to -90 or 90 degrees. True indicates roll offset of
    /// of 90 deg, false indicates roll offset of -90 degrees.
    /// \param[in] _h_pos Hip position in world frame.
    /// \param[in] _f_pos Foot position in world frame.
    /// \param[out] _joint_angles Joint angles from the Inverse Kinematics solution
    /// for a single-leg (sl).
    /// \return Evaluates true if an Inverse Kinematics solution is found, 
    /// and false if not.
    public: bool SolveSingleLegInverseKinematics(const bool &_offset, 
                                                 const Vector3d &_h_pos, 
                                                 const Vector3d &_f_pos, 
                                                 Vector3d &_joint_angles);

    /// \brief The SolveSingeLegInverseKinematics function calculates
    /// the inverse kinematics of foot in the hip frame
    /// \param[in] _offset Bool indicating whether the leg is roll
    /// offset to -90 or 90 degrees. True indicates roll offset of
    /// of 90 deg, false indicates roll offset of -90 degrees.
    /// \param[in] _f_pos Foot position in hip frame.
    /// \param[out] _joint_angles Joint angles from the Inverse Kinematics solution
    /// for a single-leg (sl).
    /// \return Evaluates true if an Inverse Kinematics solution is found, 
    /// and false if not.
    public: bool SolveSingleLegInverseKinematics(const bool &_offset, 
                                                 const Vector3d &_f_pos, 
                                                 Vector3d &_joint_angles);

    /// \brief The GetDhTransform function returns the Denavit-Hartenberg
    /// transformation from frame A to frame B.
    /// \param[in] _a Link length.
    /// \param[in] _alpha Link twist.
    /// \param[in] _d Link offset.
    /// \param[in] _theta Joint angle.
    /// \return Returns the kindr homogeneous transformation matrix from frame A to frame B.
    public: TransMatrix GetDhTransform(const double &_a, 
                                       const double &_alpha, 
                                       const double &_d, 
                                       const double &_theta);

    /// \brief The GetHipToBodyTransform function returns the homogeneous
    /// transformation from the hip frame to the specified body frame.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _theta_hy Hip yaw angle.
    /// \param[in] _theta_hp Hip pitch angle.
    /// \param[in] _theta_kp Knee pitch angle.
    /// \return Returns the kindr homogeneous transformation matrix from hip to body.
    public: TransMatrix GetHipToBodyTransform(const LegType &_leg,
                                              const BodyType &_body,
                                              const double &_theta_hy, 
                                              const double &_theta_hp, 
                                              const double &_theta_kp);
    
    /// \brief The GetRotationMatrixWToB function returns the 
    /// Euler Angles ZYX rotation matrix from World to Body frame,
    /// i.e., the transform from Body to World.
    /// \param[in] _roll Roll angle (x-axis).
    /// \param[in] _pitch Pitch angle (y-axis).
    /// \param[in] _yaw Yaw angle (z-axis).
    /// \return Returns the rotation matrix from World to Body frame
    /// (transform from Body to World), using the Euler Angles ZYX convention.
    public: Eigen::Matrix<double, 3, 3> GetRotationMatrixWToB(const double &_roll,
                                                              const double &_pitch,
                                                              const double &_yaw);

    /// \brief The GetRotationMatrixWToBDiff function returns the 
    /// time derivative of the Euler Angles ZYX rotation matrix 
    /// from World to Body frame.
    /// \param[in] _roll Roll angle (x-axis).
    /// \param[in] _pitch Pitch angle (y-axis).
    /// \param[in] _yaw Yaw angle (z-axis).
    /// \param[in] _roll_rate Roll rate (x-axis).
    /// \param[in] _pitch_rate Pitch rate (y-axis).
    /// \param[in] _yaw_rate Yaw rate (z-axis).
    /// \return Returns the time derivative of the rotation matrix 
    /// from World to Body frame, using the Euler Angles ZYX convention.
    public: Eigen::Matrix<double, 3, 3> GetRotationMatrixWToBDiff(const double &_roll,
                                                                  const double &_pitch,
                                                                  const double &_yaw,
                                                                  const double &_roll_rate,
                                                                  const double &_pitch_rate,
                                                                  const double &_yaw_rate);

    /// \brief The GetRotationMatrixWToC function returns the 
    /// Euler Angles ZYX rotation matrix from World to Control frame,
    /// i.e., the transform from Control to World. For flat-terrain
    /// the roll and pitch angles should be set to zero.
    /// \param[in] _roll Roll angle (x-axis).
    /// \param[in] _pitch Pitch angle (y-axis).
    /// \param[in] _yaw Yaw angle (z-axis).
    /// \return Returns the rotation matrix from World to Control frame
    /// (transform from Body to World), using the Euler Angles ZYX convention.
    public: Eigen::Matrix<double, 3, 3> GetRotationMatrixWToC(const double &_roll,
                                                              const double &_pitch,
                                                              const double &_yaw);

    /// \brief The GetRotationMatrixWToCDiff function returns the 
    /// time derivative of the Euler Angles ZYX rotation matrix 
    /// from World to Control frame.
    /// \param[in] _roll Roll angle (x-axis).
    /// \param[in] _pitch Pitch angle (y-axis).
    /// \param[in] _yaw Yaw angle (z-axis).
    /// \param[in] _roll_rate Roll rate (x-axis).
    /// \param[in] _pitch_rate Pitch rate (y-axis).
    /// \param[in] _yaw_rate Yaw rate (z-axis).
    /// \return Returns the time derivative of the rotation matrix 
    /// from World to Control frame, using the Euler Angles ZYX convention.
    public: Eigen::Matrix<double, 3, 3> GetRotationMatrixWToCDiff(const double &_roll,
                                                                  const double &_pitch,
                                                                  const double &_yaw,
                                                                  const double &_roll_rate,
                                                                  const double &_pitch_rate,
                                                                  const double &_yaw_rate);

    /// \brief The GetRotationMatrixCToB function returns the 
    /// Euler Angles ZYX rotation matrix from Control to Body frame,
    /// i.e., the transform from Body to Control. For flat-terrain
    /// the yaw angle should be set zero.
    /// \param[in] _roll Roll angle (x-axis).
    /// \param[in] _pitch Pitch angle (y-axis).
    /// \param[in] _yaw Yaw angle (z-axis).
    /// \return Returns the rotation matrix from Control to Body frame
    /// (transform from Body to Control), using the Euler Angles ZYX convention.
    public: Eigen::Matrix<double, 3, 3> GetRotationMatrixCToB(const double &_roll,
                                                              const double &_pitch,
                                                              const double &_yaw);

    /// \brief The GetRotationMatrixCToBDiff function returns the 
    /// time derivative of the Euler Angles ZYX rotation matrix 
    /// from World to Body frame.
    /// \param[in] _roll Roll angle (x-axis).
    /// \param[in] _pitch Pitch angle (y-axis).
    /// \param[in] _yaw Yaw angle (z-axis).
    /// \param[in] _roll_rate Roll rate (x-axis).
    /// \param[in] _pitch_rate Pitch rate (y-axis).
    /// \param[in] _yaw_rate Yaw rate (z-axis).
    /// \return Returns the time derivative of the rotation matrix 
    /// from Control to Body frame, using the Euler Angles ZYX convention.
    public: Eigen::Matrix<double, 3, 3> GetRotationMatrixCToBDiff(const double &_roll,
                                                                  const double &_pitch,
                                                                  const double &_yaw,
                                                                  const double &_roll_rate,
                                                                  const double &_pitch_rate,
                                                                  const double &_yaw_rate);

    /// \brief The GetPositionBaseToBodyInB returns the position vector
    /// from base origin to COM position in body-frame for
    /// a given body.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns the position vector from base to foot.
    public: Eigen::Matrix<double, 3, 1> GetPositionBaseToBodyInB(const LegType &_leg,
                                                                 const BodyType &_body, 
                                                                 const Eigen::Matrix<double, 18, 1> &_q);

    /// \brief The GetTranslationJacobianInB function returns the 3x3
    /// Jacobian matrix for body linear velocities in the body(base)-frame for
    /// a given state.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _theta_hy Hip yaw angle.
    /// \param[in] _theta_hp Hip pitch angle.
    /// \param[in] _theta_kp Knee pitch angle.
    /// \return Returns the 3x3 translation Jacobian Matrix relating 
    /// body linear velocities to joint velocities.
    public: Eigen::Matrix<double, 3, 3> GetTranslationJacobianInB(const LegType &_leg,
                                                                  const BodyType &_body,
                                                                  const double &_theta_hy, 
                                                                  const double &_theta_hp, 
                                                                  const double &_theta_kp);

    /// \brief The GetTranslationJacobianInB function returns the 3x12
    /// Jacobian matrix for body linear velocities in the body(base)-frame for
    /// given states.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q_r Joint coordinates.
    /// \return Returns the 3x12 translation Jacobian Matrix relating 
    /// body linear velocities to joint velocities.
    public: Eigen::Matrix<double, 3, 12> GetTranslationJacobianInB(const LegType &_leg, 
                                                                   const BodyType &_body,
                                                                   const Eigen::Matrix<double, 12, 1> &_q_r);

    /// \brief The GetTranslationJacobianInW function returns the 3x18
    /// spatial translation Jacobian mapping generalized velocities
    /// to operational space twist of the body attached frame.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns the translation Jacobian Matrix mapping from generalized velocities to
    /// the operational space (world-frame) twist of the body attached frame.
    public: Eigen::Matrix<double, 3, 18> GetTranslationJacobianInW(const LegType &_leg,
                                                                   const BodyType &_body,
                                                                   const Eigen::Matrix<double, 18, 1> &_q);

    /// \brief The GetTranslationJacobianInC function returns the 3x18
    /// spatial translation Jacobian mapping generalized velocities
    /// to operational space twist of the control frame.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns the translation Jacobian Matrix mapping from generalized velocities to
    /// the operational space (world-frame) twist of the control frame.
    public: Eigen::Matrix<double, 3, 18> GetTranslationJacobianInC(const LegType &_leg,
                                                                   const BodyType &_body,
                                                                   const Eigen::Matrix<double, 18, 1> &_q);

    /// \brief The GetTranslationJacobianDerivativeInB function returns the 
    /// time derivative of the 3x3 translation Jacobian matrix.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _theta_hy Hip yaw angle.
    /// \param[in] _theta_hp Hip pitch angle.
    /// \param[in] _theta_kp Knee pitch angle.
    /// \param[in] _dot_theta_hy Hip yaw rate.
    /// \param[in] _dot_theta_hp Hip pitch rate.
    /// \param[in] _dot_theta_kp Knee pitch rate.
    /// \return Returns the 3x3 time derivative of the translation Jacobian Matrix.
    public: Eigen::Matrix<double, 3, 3> GetTranslationJacobianInBDiff(const LegType &_leg,
                                                                       const BodyType &_body,
                                                                       const double &_theta_hy, 
                                                                       const double &_theta_hp, 
                                                                       const double &_theta_kp,
                                                                       const double &_dot_theta_hy,
                                                                       const double &_dot_theta_hp,
                                                                       const double &_dot_theta_kp);

    /// \brief The GetTranslationJacobianInBDiff function returns the 
    /// time derivative of the 3x12 translation Jacobian matrix.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q_r Joint coordinates.
    /// \param[in] _dot_q_r Joint velocities.
    /// \return Returns the 3x12 time derivative of the translation Jacobian Matrix.
    public: Eigen::Matrix<double, 3, 12> GetTranslationJacobianInBDiff(const LegType &_leg,
                                                                       const BodyType &_body,
                                                                       const Eigen::Matrix<double, 12, 1> &_q_r,
                                                                       const Eigen::Matrix<double, 12, 1> &_dot_q_r);

    /// \brief The GetTranslationJacobianInWDiff function returns the 
    /// time derivative of the 3x18 spatial translation Jacobian in the
    /// world frame.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \param[in] _u Generalized velocities.
    /// \return Returns the 3x18 time derivative of the translation Jacobian Matrix
    /// in the world frame.
    public: Eigen::Matrix<double, 3, 18> GetTranslationJacobianInWDiff(const LegType &_leg,
                                                                       const BodyType &_body,
                                                                       const Eigen::Matrix<double, 18, 1> &_q,
                                                                       const Eigen::Matrix<double, 18, 1> &_u);

    /// \brief The GetTranslationJacobianInCDiff function returns the 
    /// time derivative of the 3x18 spatial translation Jacobian in the 
    /// control frame.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \param[in] _u Generalized velocities.
    /// \return Returns the 3x18 time derivative of the translation Jacobian Matrix 
    /// in the control frame.
    public: Eigen::Matrix<double, 3, 18> GetTranslationJacobianInCDiff(const LegType &_leg,
                                                                       const BodyType &_body,
                                                                       const Eigen::Matrix<double, 18, 1> &_q,
                                                                       const Eigen::Matrix<double, 18, 1> &_u);


    /// \brief The GetRotationJacobianInB function returns the 3x3
    /// Jacobian matrix for body angular velocities in the body(base)-frame for
    /// a given state.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _theta_hy Hip yaw angle.
    /// \param[in] _theta_hp Hip pitch angle.
    /// \param[in] _theta_kp Knee pitch angle.
    /// \return Returns the 3x3 rotation Jacobian Matrix relating 
    /// body angular velocities to joint velocities.
    public: Eigen::Matrix<double, 3, 3> GetRotationJacobianInB(const LegType &_leg,
                                                               const BodyType &_body,
                                                               const double &_theta_hy, 
                                                               const double &_theta_hp, 
                                                               const double &_theta_kp);

    /// \brief The GetRotationJacobianInB function returns the 3x3
    /// Jacobian matrix for body angular velocities in the body(base)-frame for
    /// a given state.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q_r Joint coordinates.
    /// \return Returns the 3x12 rotation Jacobian Matrix relating 
    /// body angular velocities to joint velocities.
    public: Eigen::Matrix<double, 3, 12> GetRotationJacobianInB(const LegType &_leg, 
                                                                const BodyType &_body,
                                                                const Eigen::Matrix<double, 12, 1> &_q_r);

    /// \brief The GetRotationJacobianInW function returns the 3x18
    /// spatial rotation Jacobian mapping generalized velocities
    /// to operational space twist of the body attached frame.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns the rotation Jacobian Matrix mapping from generalized velocities to
    /// the operational space (world-frame) twist of the body attached frame.
    public: Eigen::Matrix<double, 3, 18> GetRotationJacobianInW(const LegType &_leg,
                                                                const BodyType &_body,
                                                                const Eigen::Matrix<double, 18, 1> &_q);

    /// \brief The GetRotationJacobianInC function returns the 3x18
    /// spatial rotation Jacobian mapping generalized velocities
    /// to control frame twist of the body attached frame.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns the rotation Jacobian Matrix mapping from generalized velocities to
    /// the control frame twist of the body attached frame.
    public: Eigen::Matrix<double, 3, 18> GetRotationJacobianInC(const LegType &_leg,
                                                                const BodyType &_body,
                                                                const Eigen::Matrix<double, 18, 1> &_q);

    /// \brief The GetRotationJacobianInBDiff function returns the 
    /// time derivative of the 3x3 Rotation Jacobian matrix.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _theta_hy Hip yaw angle.
    /// \param[in] _theta_hp Hip pitch angle.
    /// \param[in] _theta_kp Knee pitch angle.
    /// \param[in] _dot_theta_hy Hip yaw rate.
    /// \param[in] _dot_theta_hp Hip pitch rate.
    /// \param[in] _dot_theta_kp Knee pitch rate.
    /// \return Returns the 3x3 time derivative of the Rotation Jacobian Matrix.
    public: Eigen::Matrix<double, 3, 3> GetRotationJacobianInBDiff(const LegType &_leg,
                                                                   const BodyType &_body,
                                                                   const double &_theta_hy, 
                                                                   const double &_theta_hp, 
                                                                   const double &_theta_kp,
                                                                   const double &_dot_theta_hy,
                                                                   const double &_dot_theta_hp,
                                                                   const double &_dot_theta_kp);

    /// \brief The GetRotationJacobianDerivativeInB function returns the 
    /// time derivative of the 3x12 Rotation Jacobian matrix.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q_r Joint coordinates.
    /// \param[in] _dot_q_r Joint velocities.
    /// \return Returns the 3x12 time derivative of the Rotation Jacobian Matrix.
    public: Eigen::Matrix<double, 3, 12> GetRotationJacobianInBDiff(const LegType &_leg,
                                                                    const BodyType &_body,
                                                                    const Eigen::Matrix<double, 12, 1> &_q_r,
                                                                    const Eigen::Matrix<double, 12, 1> &_dot_q_r);

    /// \brief The GetRotationJacobianInWDiff function returns the 
    /// time derivative of the 3x18 spatial Rotation Jacobian.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \param[in] _u Generalized velocities.
    /// \return Returns the 3x18 time derivative of the Rotation Jacobian Matrix
    /// in the world frame.
    public: Eigen::Matrix<double, 3, 18> GetRotationJacobianInWDiff(const LegType &_leg,
                                                                    const BodyType &_body,
                                                                    const Eigen::Matrix<double, 18, 1> &_q,
                                                                    const Eigen::Matrix<double, 18, 1> &_u);

    /// \brief The GetRotationJacobianInCDiff function returns the 
    /// time derivative of the 3x18 control frame Rotation Jacobian.
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \param[in] _u Generalized velocities.
    /// \return Returns the 3x18 time derivative of the Rotation Jacobian Matrix
    /// in the control frame.
    public: Eigen::Matrix<double, 3, 18> GetRotationJacobianInCDiff(const LegType &_leg,
                                                                    const BodyType &_body,
                                                                    const Eigen::Matrix<double, 18, 1> &_q,
                                                                    const Eigen::Matrix<double, 18, 1> &_u);

    /// \brief The GetJacobianInW function returns the 6x18
    /// spatial Jacobian mapping generalized velocities
    /// to operational space twist of the body attached frame.
    /// \param[in] _leg Leg type.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns the spatial Jacobian Matrix mapping from generalized velocities to
    /// the operational space (world-frame) twist of the body attached frame. 
    public: Eigen::Matrix<double, 6, 18> GetJacobianInW(const LegType &_leg,
                                                        const BodyType &_body,
                                                        const Eigen::Matrix<double, 18, 1> &_q);

    /// \brief The GetJacobianInW function returns the
    /// time derivative of the 6x18 spatial Jacobian.
    /// \param[in] _leg Leg type.
    /// \param[in] _q Generalized coordinates.
    /// \param[in] _u Generalized velocities.
    /// \return Returns the time derivative of the spatial Jacobian Matrix.
    public: Eigen::Matrix<double, 6, 18> GetJacobianInWDiff(const LegType &_leg,
                                                            const BodyType &_body,
                                                            const Eigen::Matrix<double, 18, 1> &_q,
                                                            const Eigen::Matrix<double, 18, 1> &_u);

    /// \brief The GetContactJacobianInW function returns the (3*n_c)x18
    /// support Jacobian mapping reaction forces at the contact points
    /// to generalized coordinate space.
    /// \param[in] _legs A vector of leg types containing the contact points.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns the contact Jacobian Matrix mapping reaction (contact) forces
    /// to generalized coordinate space.
    public: Eigen::Matrix<double, Eigen::Dynamic, 18> GetContactJacobianInW(std::vector<LegType> &_legs,
                                                                            const Eigen::Matrix<double, 18, 1> &_q);

    /// \brief The GetContactJacobianInWDiff function returns the
    /// time derivative of the (3*n_c)x18 support Jacobian.
    /// \param[in] _legs A vector of leg types containing the contact points.
    /// \param[in] _q Generalized coordinates.
    /// \param[in] _u Generalized velocities.
    /// \return Returns the time derivative of the contact Jacobian Matrix.
    public: Eigen::Matrix<double, Eigen::Dynamic, 18> GetContactJacobianInWDiff(std::vector<LegType> &_legs,
                                                                                const Eigen::Matrix<double, 18, 1> &_q,
                                                                                const Eigen::Matrix<double, 18, 1> &_u);

    /// \brief The GetSwingJacobianInW function returns the (3*n_s)x18
    /// support Jacobian mapping swing foot velocities
    /// to generalized coordinate space. (n_s = 4 - n_c)
    /// \param[in] _legs A vector of leg types containing the swing legs.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns the support Jacobian Matrix mapping swing foot
    /// velocities to generalized coordinate space.
    public: Eigen::Matrix<double, Eigen::Dynamic, 18> GetSwingJacobianInW(std::vector<LegType> &_legs,
                                                                          const Eigen::Matrix<double, 18, 1> &_q);

    /// \brief The GetContactJacobianInWDiff function returns the
    /// time derivative of the (3*n_s)x18 support Jacobian. (n_s = 4 - n_c)
    /// \param[in] _legs A vector of leg types containing the swing legs.
    /// \param[in] _q Generalized coordinates.
    /// \param[in] _u Generalized velocities.
    /// \return Returns the time derivative of the support 
    /// swing-leg Jacobian Matrix.
    public: Eigen::Matrix<double, Eigen::Dynamic, 18> GetSwingJacobianInWDiff(std::vector<LegType> &_legs,
                                                                              const Eigen::Matrix<double, 18, 1> &_q,
                                                                              const Eigen::Matrix<double, 18, 1> &_u);

    /// \brief The GetSingleBodyMassMatrix function returns the
    /// mass matrix for a single body in the system. 
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns a single body mass matrix as specified by leg and body type.
    public: Eigen::Matrix<double, 18, 18> GetSingleBodyMassMatrix(const LegType &_leg,
                                                                  const BodyType &_body,
                                                                  const Eigen::Matrix<double, 18, 1> &_q);

    /// \brief The GetMassMatrix function returns the
    /// mass matrix for the floating base system.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns an orthogonal mass matrix (n_q x n_q) for the floating base system.
    public: Eigen::Matrix<double, 18, 18> GetMassMatrix(const Eigen::Matrix<double, 18, 1> &_q);


    public: Eigen::Matrix<double, 3, 3> GetSingleLegMassMatrix(const Eigen::Matrix<double, 3, 1> &_q);

    /// \brief The GetSingleBodyCoriolisAndCentrifugalTerms function returns the
    /// coriolis and centrifugal terms for a single body in the system. 
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \param[in] _u Generalized velocities.
    /// \return Returns a single body coriolis and centrifugal terms as specified by leg and body type.
    public: Eigen::Matrix<double, 18, 1> GetSingleBodyCoriolisAndCentrifugalTerms(const LegType &_leg,
                                                                                  const BodyType &_body,
                                                                                  const Eigen::Matrix<double, 18, 1> &_q,
                                                                                  const Eigen::Matrix<double, 18, 1> &_u);

    /// \brief The GetCoriolisAndCentrifugalTerms function returns the
    /// coriolis and centrifugal terms for the floating base system.
    /// \param[in] _q Generalized coordinates.
    /// \param[in] _u Generalized velocities.
    /// \return Returns coriolis and centrifugal terms for the floating base system. 
    public: Eigen::Matrix<double, 18, 1> GetCoriolisAndCentrifugalTerms(const Eigen::Matrix<double, 18, 1> &_q,
                                                                        const Eigen::Matrix<double, 18, 1> &_u);


    public: Eigen::Matrix<double, 3, 1> GetSingleLegCoriolisAndCentrifugalTerms(const Eigen::Matrix<double, 3, 1> &_q,
                                                                                const Eigen::Matrix<double, 3, 1> &_u);

    /// \brief The GetSingleBodyGravitationalTerms function returns the
    /// gravitational terms for a single body in the system. 
    /// \param[in] _leg Leg type.
    /// \param[in] _body Body type.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns a single body gravitational terms as specified by leg and body type.
    public: Eigen::Matrix<double, 18, 1> GetSingleBodyGravitationalTerms(const LegType &_leg,
                                                                         const BodyType &_body,
                                                                         const Eigen::Matrix<double, 18, 1> &_q);

    /// \brief The GetGravitationalTerms function returns the
    /// gravitational terms for the floating base system.
    /// \param[in] _q Generalized coordinates.
    /// \return Returns gravitational terms for the floating base system. 
    public: Eigen::Matrix<double, 18, 1> GetGravitationalTerms(const Eigen::Matrix<double, 18, 1> &_q);

    public: Eigen::Matrix<double, 3, 1> GetSingleLegGravitationalTerms(const Eigen::Matrix<double, 3, 1> &_q);

    /// \brief The ValidateSolution function evaluates whether
    /// a set of joint angles is within joint limits. 
    /// \param[in] _q_r Joint angles generated by the IK solver.
    /// \return Evaluates true if IK solution is valid, and false if not.
    public: bool ValidateSolution(const JointSpaceVector &_q_r);

    /// \brief Overloaded version of the ValidateSolution function, 
    /// which evaluates whether a set of joint angles for a single leg is within the joint limits.
    /// \param[in] _q_r Joint angles for a single leg generated by the IK solver.
    /// \return Evaluates true if the IK solution is valid, and false if not.
    public: bool ValidateSolution(const Eigen::Matrix<double, 3, 1> &_q_r);

    /// \brief The GetInertiaMatrix function returns the inertia matrix from the six inertial parameters
    /// \param[in] _I_XX inertia about the x axis
    /// \param[in] _I_YY inertia about the y axis
    /// \param[in] _I_ZZ inertia about the z axis
    /// \param[in] _I_XY inertia about the xy axis
    /// \param[in] _I_XZ inertia about the xz axis
    /// \param[in] _I_YZ inertia about the yz axis
    private: Eigen::Matrix<double, 3, 3> GetInertiaMatrix(const double &_I_XX,
                                                          const double &_I_YY,
                                                          const double &_I_ZZ,
                                                          const double &_I_XY,
                                                          const double &_I_XZ,
                                                          const double &_I_YZ);

    private: double GetBodyMass(BodyType _body);

    private: Eigen::Matrix<double, 3, 3> GetBodyInertia(BodyType _body);

    private: Eigen::Matrix<double, 3, 3> GetBodyInertia(BodyType _body, LegType _leg);

    public: bool GetflOffset() {return flOffset;}

    public: bool GetfrOffset() {return frOffset;}

    public: bool GetrlOffset() {return rlOffset;}

    public: bool GetrrOffset() {return rrOffset;}

    public: Eigen::Matrix<double, 3, 1> GetDistanceFromBaseToFrontLeftHipInB() {return positionBaseToFrontLeftInB;}

    public: Eigen::Matrix<double, 3, 1> GetDistanceFromBaseToFrontRightHipInB() {return positionBaseToFrontRightInB;}

    public: Eigen::Matrix<double, 3, 1> GetDistanceFromBaseToRearLeftHipInB() {return positionBaseToRearLeftInB;}
    
    public: Eigen::Matrix<double, 3, 1> GetDistanceFromBaseToRearRightHipInB() {return positionBaseToRearRightInB;}

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

    /// \brief Hip yaw joint to hip CoM length
    private: double LC1;

    /// \brief Hip pitch joint to thigh CoM length
    private: double LC2;

    /// \brief Knee pitch joint to leg CoM length
    private: double LC3;

    /// \brief Front Left offset
    private: bool flOffset;

    /// \brief Front Right offset
    private: bool frOffset;

    /// \brief Rear Left offset
    private: bool rlOffset;

    /// \brief Rear Right offset
    private: bool rrOffset;

    /// \brief Body link mass
    private: double M0;

    /// \brief Hip link mass
    private: double M1;

    /// \brief Thigh link mass
    private: double M2; 

    /// \brief Leg link mass
    private: double M3;

    /// \brief Body link inertia matrix
    private: Eigen::Matrix<double, 3, 3> I0;

    /// \brief Front Left & Rear Right Hip link inertia matrix
    private: Eigen::Matrix<double, 3, 3> I1_fl_rr;

    /// \brief Front Right & Rear Left Hip link inertia matrix
    private: Eigen::Matrix<double, 3, 3> I1_fr_rl;

    /// \brief Thigh link inertia matrix
    private: Eigen::Matrix<double, 3, 3> I2;

    /// \brief Leg link inertia matrix
    private: Eigen::Matrix<double, 3, 3> I3;
};