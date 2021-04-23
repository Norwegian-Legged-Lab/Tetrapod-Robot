
/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   motor_interface.h                                    */
/*    DATE:   Apr 23, 2021                                         */
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

// ROS
#include "ros/ros.h"
#include "ros/callback_queue.h"
#include "sensor_msgs/JointState.h"
#include "std_msgs/Float64.h"
#include "std_msgs/Float64MultiArray.h"

// Standard library
#include <thread>


/// \brief A class to control and distribute motor position, velocity and torque information.
class MotorInterface
{
    /// \brief Constructor
    public: MotorInterface();

    /// \brief Destructor
    public: virtual ~MotorInterface();

    /// \brief The OnMotorStateCMsg function handles an incoming 
    /// generalized coordinates message from ROS.
    /// \param[in] _msg A float array containing the generalized
    /// coordinates.
    public: void OnMotorStateMsg(const sensor_msgs::JointStateConstPtr &_msg);

    /// \brief The ProcessQueueThread function is a ROS helper function
    /// that processes messages.
    public: void ProcessQueueThread();

    /// \brief The PublishQueueThread function is a ROS helper function
    /// that publish messages.
    public: void PublishQueueThread();

    /// \brief The InitRos function is called to initialize ROS 
    protected: void InitRos();

    /// \brief The InitRosQueueThreads function is called to initialize
    /// the ROS Publish and Process Queue Threads
    protected: void InitRosQueueThreads();

    /// \brief Node used for ROS transport.
    private: std::unique_ptr<ros::NodeHandle> rosNode;

    /// \brief ROS Motor State Subscriber.
    private: ros::Subscriber motorStateSub;

    /// \brief ROS Joint State Publisher
    private: ros::Publisher motorStateCmdPub;

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