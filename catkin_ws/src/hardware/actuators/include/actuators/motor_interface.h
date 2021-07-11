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
#include "eigen_conversions/eigen_msg.h"

// ROS Package Libraries
#include <serial_communication/serial_communication.h>

// Standard library
#include <thread>

// Eigen
#include <Eigen/Core>

/// \brief A class to control and distribute motor position, velocity and torque information.
class MotorInterface
{
    /// \brief The maximum numbers of motors to be interfaced with by one Teensy
    private: static constexpr int MAX_NUM_MOTORS_PER_PORT = 6;

    /// \brief Default Constructor
    public: MotorInterface();

    /// \brief Custom Constructor
    /// \param[in] _num_motors Number of motors in use.
    public: MotorInterface(const int &_num_motors);

    /// \brief Destructor
    public: virtual ~MotorInterface();

    /// \brief Set the position of the joints.
    /// \param[in] _pos New target position vector in radians
    public: void SetJointPositions(const std::vector<double> &_pos);

    /// \brief Set the velocity of the joints.
    /// \param[in] _vel New target velocity
    public: void SetJointVelocities(const std::vector<double> &_vel);

    /// \brief Set the torque of the joints.
    /// \param[in] _torque New target torque
    public: void SetJointTorques(const std::vector<double> &_torque);

    /// \brief Checks if there are any incomming messages from the serial ports.
    /// If there are new replies these are read and published
    public: void ProcessSerialMessages();

    /// \brief The OnGenCoordMsg function handles an incoming 
    /// generalized coordinates message from ROS.
    /// \param[in] _msg A float array containing the generalized
    /// coordinates.
    public: void OnJointStateCmdMsg(const sensor_msgs::JointStateConstPtr &_msg);

    /// \brief The SerialProcessQueueThread function is a helper function
    /// that processes serial messages.
    public: void SerialProcessQueueThread();

    /// \brief The RosProcessQueueThread function is a ROS helper function
    /// that processes messages.
    public: void RosProcessQueueThread();

    /// \brief The RosPublishQueueThread function is a ROS helper function
    /// that publish state messages.
    public: void RosPublishQueueThread();

    /// \brief The InitRos function is called to initialize ROS 
    protected: void InitRos();

    /// \brief The InitRosQueueThreads function is called to initialize
    /// the ROS Publish and Process Queue Threads
    protected: void InitRosQueueThreads();

    /// \brief The number of motors to interface with
	private: const int NUM_MOTORS;

    /// \brief The number of motors interfaced by the first Teensy
    private: int num_motors_port_1;

    /// \brief The number of motors interfaced by the second Teensy
    private: int num_motors_port_2;

    /// \brief The serial interface used to communicate with the first Teensy
    private: SerialCommunication serialInterface1;

    /// \brief The serial interface used to communicate with the second Teensy
    private: SerialCommunication serialInterface2;

    /// \brief Node used for ROS transport.
    private: std::unique_ptr<ros::NodeHandle> rosNode;

    /// \brief Joint State Message
    private: sensor_msgs::JointState jointStateMsg;

    /// \brief ROS Joint State Command Subscriber.
    private: ros::Subscriber jointStateCmdSub;

    /// \brief ROS Joint State Publisher
    private: ros::Publisher jointStatePub;

    /// \brief ROS callbackque that helps process messages.
    private: ros::CallbackQueue rosProcessQueue;

    /// \brief ROS callbackque that helps publish messages.
    private: ros::CallbackQueue rosPublishQueue;

    /// \brief Thread running the serialProcessQueue.
    private: std::thread serialProcessQueueThread;

    /// \brief Thread running the rosProcessQueue.
    private: std::thread rosProcessQueueThread;

    /// \brief Thread running the rosPublishQueue.
    private: std::thread rosPublishQueueThread;
};