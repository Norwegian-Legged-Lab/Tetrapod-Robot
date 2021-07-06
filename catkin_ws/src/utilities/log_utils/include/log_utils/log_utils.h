/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   log_utils.h                                          */
/*    DATE:   Jun 12, 2021                                         */
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

// Eigen
#include <Eigen/Core>

/// \brief A class for logging utilities
class LogUtils
{
    /// \brief Constructor
    public: LogUtils();

    /// \brief Destructor
    public: virtual ~LogUtils();

    // TODO Describe
    public: void WriteToLog();

    /// \brief The OnGenCoordMsg function handles an incoming 
    /// generalized coordinates message from ROS.
    /// \param[in] _msg A float array containing the generalized
    /// coordinates.
    public: void OnGenCoordMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief The OnGenVelMsg function handles an incoming 
    /// generalized velocities message from ROS.
    /// \param[in] _msg A float array containing the generalized
    /// velocities.
    public: void OnGenVelMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief The OnJointStateMsg function handles an incoming joint state
    /// message from ROS.
    /// \param[in] _msg A message holding data to describe the state
    /// of a set of controlled joints. The state is defined by 
    /// * the position of the joint,
    /// * the velocity of the joint and
    /// * the effort (torque) that is applied in the joint.
    public: void OnJointStateMsg(const sensor_msgs::JointStateConstPtr &_msg);

    /// \brief The OnJointStateCmdMsg function handles an incoming joint state
    /// command message from ROS.
    /// \param[in] _msg A message holding data to describe the state
    /// of a set of controlled joints. The state is defined by 
    /// * the position of the joint,
    /// * the velocity of the joint and
    /// * the effort (torque) that is applied in the joint.
    public: void OnJointStateCmdMsg(const sensor_msgs::JointStateConstPtr &_msg);

    /// \brief The PublishQueueThread function is a ROS helper function
    /// that publish state messages.
    public: void PublishQueueThread();

    /// \brief The ProcessQueueThread function is a ROS helper function
    /// that processes messages.
    public: void ProcessQueueThread();

    /// \brief The InitRos function is called to initialize ROS 
    protected: void InitRos();

    /// \brief The InitRosQueueThreads function is called to initialize
    /// the ROS Publish and Process Queue Threads
    protected: void InitRosQueueThreads();

    /// \brief Kinematics
    private: Kinematics kinematics;

    /// \brief Generalized Coordinates
    private: Eigen::Matrix<double, 18, 1> genCoord;

    /// \brief Generalized Velocities
    private: Eigen::Matrix<double, 18, 1> genVel;

    /// \brief Joint State
    private: sensor_msgs::JointState jointState;

    /// \brief Joint State Command
    private: sensor_msgs::JointState jointStateCmd;

    /// \brief Footstep positions
    private: Eigen::Matrix<Eigen::Vector3d, 4, 1> fPos;

    /// \brief Contact State
    private: int contactState[4];

    /// \brief Node used for ROS transport.
    private: std::unique_ptr<ros::NodeHandle> rosNode;

    /// \brief ROS Generalized Coordinates Subscriber.
    private: ros::Subscriber genCoordSub;

    /// \brief ROS Generalized Coordinates Subscriber.
    private: ros::Subscriber genVelSub;

    /// \brief ROS Joint State Subscriber.
    private: ros::Subscriber jointStateSub;

    /// \brief ROS Joint State Command Subscriber.
    private: ros::Subscriber jointStateCmdSub;

    /// \brief ROS Contact State Subscriber.
    private: ros::Subscriber contactStateSub;

    /// \brief ROS Generalized Coordinates Log Publisher
    private: ros::Publisher genCoordLogPub;

    /// \brief ROS Generalized Velocities Log Publisher
    private: ros::Publisher genVelLogPub;

    /// \brief ROS Joint State Log Publisher.
    private: ros::Publisher jointStatePub;

    /// \brief ROS Joint State Command Log Publisher.
    private: ros::Publisher jointStateCmdPub;

    /// \brief ROS callbackque that helps publish messages.
    private: ros::CallbackQueue rosPublishQueue;

    /// \brief ROS callbackque that helps process messages.
    private: ros::CallbackQueue rosProcessQueue;

    /// \brief Thread running the rosPublishQueue.
    private: std::thread rosPublishQueueThread;

    /// \brief Thread running the rosProcessQueue.
    private: std::thread rosProcessQueueThread;
};