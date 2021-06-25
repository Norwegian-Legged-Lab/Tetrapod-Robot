/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   ros_serial.h                                         */
/*    DATE:   Jun 25, 2021                                         */
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
#include <thread>

// ROS
#include "ros/ros.h" 
#include "ros/callback_queue.h"

// ROS messages
#include "std_msgs/Int8MultiArray.h"
#include "std_msgs/Float64MultiArray.h"
#include "sensor_msgs/JointState.h"

// ROS Package Libraries
#include <kinematics/kinematics.h>
#include <debug_utils/debug_utils.h>
#include <math_utils/Core>

// Eigen
#include <Eigen/Core>

// Kindr
#include <kindr/Core>

// Drake C++ Toolbox
#include <drake/common/symbolic.h>
#include <drake/solvers/mathematical_program.h>
#include <drake/solvers/solve.h>
#include <drake/solvers/osqp_solver.h>
#include <drake/solvers/equality_constrained_qp_solver.h>
#include <drake/solvers/clp_solver.h>
#include <drake/solvers/scs_solver.h>
#include <drake/solvers/snopt_solver.h>

/// \brief A class for hierarchical optimization control
class RosSerial
{
    /// \brief Constructor
    public: RosSerial();

    /// \brief Destructor
    public: virtual ~RosSerial();

	// TODO update
    /// \brief The PublishTorqueMsg function publishes
    /// a desired torque message to the ROS topic set by 
    /// the joint state publisher.
    public: void PublishJointStateMsg();

    /// \brief Set the velocity of the joints.
    /// \param[in] _vel New target velocity
    public: void SetJointVelocities(const std::vector<double> &_vel);

    /// \brief Set the position of the joints.
    /// \param[in] _pos New target position vector in radians
    public: void SetJointPositions(const std::vector<double> &_pos);

    /// \brief The OnGenCoordMsg function handles an incoming 
    /// generalized coordinates message from ROS.
    /// \param[in] _msg A float array containing the generalized
    /// coordinates.
    public: void OnJointStateCmdMsg(const sensor_msgs::JointStateConstPtr &_msg);

    /// \brief The ProcessQueueThread function is a ROS helper function
    /// that processes messages.
    public: void RosProcessQueueThread();

    /// \brief The PublishQueueThread function is a ROS helper function
    /// that publish state messages.
    public: void RosPublishQueueThread();

    /// \brief The InitRos function is called to initialize ROS 
    protected: void InitRos();

    /// \brief The InitRosQueueThreads function is called to initialize
    /// the ROS Publish and Process Queue Threads
    protected: void InitRosQueueThreads();

	private: const int NUM_MOTORS;

    /// \brief Node used for ROS transport.
    private: std::unique_ptr<ros::NodeHandle> rosNode;

    /// \brief ROS Joint State Command Subscriber.
    private: ros::Subscriber jointStateCmdSub;

    /// \brief ROS Joint State Publisher
    private: ros::Publisher jointStatePub;

    /// \brief ROS callbackque that helps process messages.
    private: ros::CallbackQueue rosProcessQueue;

    /// \brief ROS callbackque that helps publish messages.
    private: ros::CallbackQueue rosPublishQueue;

    /// \brief Thread running the rosProcessQueue.
    private: std::thread rosProcessQueueThread;

    /// \brief Thread running the rosPublishQueue.
    private: std::thread rosPublishQueueThread;
};