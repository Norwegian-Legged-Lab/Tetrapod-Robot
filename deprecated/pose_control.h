/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   pose_control.h                                       */
/*    DATE:   Apr 6, 2021                                          */
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
#include "eigen_conversions/eigen_msg.h"

//ROS Package Libraries
#include <debug_utils/debug_utils.h>
#include <kinematics/kinematics.h>

// Standard library
#include <thread>

/// \brief A class to control the tetrapod robot pose
class PoseControl
{
    /// \brief Constructor
    public: PoseControl();

    /// \brief Destructor
    public: virtual ~PoseControl();

    public: void SetBasePose(const Eigen::Matrix<double, 6, 1> &_q_b);

    public: void SetBasePosition(const Eigen::Matrix<double, 3, 1> &_base_position);
    
    public: void SetBaseOrientation(const Eigen::Matrix<double, 3, 1> &_base_orientation);
    
    public: void SetBaseHeight(const double &_base_height);


    /// \brief The OnGenCoordMsg function handles an incoming 
    /// generalized coordinates message from ROS.
    /// \param[in] _msg A float array containing the generalized
    /// coordinates.
    public: void OnGenCoordMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief The OnBasePoseMsg function handles an incoming 
    /// pose messages from ROS.
    /// \param[in] _msg A float array containing the desired 
    /// base pose command.
    public: void OnBasePoseMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief The OnBasePositionMsg function handles an incoming 
    /// base position messages from ROS.
    /// \param[in] _msg A float array containing the desired 
    /// base position command.
    public: void OnBasePositionMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief The OnBaseHeightMsg function handles an incoming 
    /// base height messages from ROS.
    /// \param[in] _msg A float array containing the desired 
    /// base height command.
    public: void OnBaseHeightMsg(const std_msgs::Float64ConstPtr &_msg);

    /// \brief The OnBaseOrientationMsg function handles an incoming 
    /// base orientation messages from ROS.
    /// \param[in] _msg A float array containing the desired 
    /// base orientation command.
    public: void OnBaseOrientationMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief The ProcessQueueThread function is a ROS helper function
    /// that processes messages.
    public: void ProcessQueueThread();

    /// \brief The PublishQueueThread function is a ROS helper function
    /// that publish state messages.
    public: void PublishQueueThread();

    /// \brief The InitRos function is called to initialize ROS 
    protected: void InitRos();

    /// \brief The InitRosQueueThreads function is called to initialize
    /// the ROS Publish and Process Queue Threads
    protected: void InitRosQueueThreads();

    /// \brief Kinematics
    private: Kinematics kinematics;

    /// \brief Generalized Coordinates
    private: Eigen::Matrix<double, 18, 1> genCoord;

    /// \brief Footstep positions
    private: Eigen::Matrix<Eigen::Vector3d, 4, 1> fPos;

    /// \brief Node used for ROS transport.
    private: std::unique_ptr<ros::NodeHandle> rosNode;

    /// \brief ROS Generalized Coordinates Subscriber.
    private: ros::Subscriber genCoordSub;

    /// \brief ROS Base Pose Subscriber
    private: ros::Subscriber basePoseSub;

    /// \brief ROS Base Pose Subscriber
    private: ros::Subscriber basePositionSub;

    /// \brief ROS Base Height Subscriber
    private: ros::Subscriber baseHeightSub;

    /// \brief ROS Base Pose Subscriber
    private: ros::Subscriber baseOrientationSub;

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