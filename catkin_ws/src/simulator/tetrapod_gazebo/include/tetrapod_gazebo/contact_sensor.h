/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   contact_sensor.h                                     */
/*    DATE:   May 19, 2021                                         */
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

// Gazebo
#include <gazebo/gazebo.hh>
#include <gazebo/gazebo_client.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/transport/transport.hh>
#include <gazebo/msgs/msgs.hh>

// ROS
#include "ros/ros.h"
#include "ros/callback_queue.h"
#include "std_msgs/Int8MultiArray.h"

// Boost
#include <boost/algorithm/string.hpp>

/// \brief A plugin for the contact sensors
class ContactSensor
{
    /// \brief Constructor
    public: ContactSensor();

    /// \brief Destructor
    public: virtual ~ContactSensor();

    /// \brief The OnFlContactCallback function handles an incoming 
    /// contact message from the front left contact sensor in Gazebo.
    /// \param[in] _msg A contact message.
    public: void OnFlContactCallback(const ConstContactsPtr &_msg);

    /// \brief The OnFrContactCallback function handles an incoming 
    /// contact message from the front right contact sensor in Gazebo.
    /// \param[in] _msg A contact message.
    public: void OnFrContactCallback(const ConstContactsPtr &_msg);

    /// \brief The OnRlContactCallback function handles an incoming 
    /// contact message from the rear left contact sensor in Gazebo.
    /// \param[in] _msg A contact message.
    public: void OnRlContactCallback(const ConstContactsPtr &_msg);

    /// \brief The OnRrContactCallback function handles an incoming 
    /// contact message from the rear rear contact sensor in Gazebo.
    /// \param[in] _msg A contact message.
    public: void OnRrContactCallback(const ConstContactsPtr &_msg);

    /// \brief The PublishQueueThread function is a ROS helper function
    /// that publish state messages.
    public: void PublishQueueThread();

    /// \brief The InitRos function is called to initialize Gazebo 
    protected: void InitGazebo();

    /// \brief The InitRos function is called to initialize ROS 
    protected: void InitRos();

    /// \brief The InitRosQueueThreads function is called to initialize
    /// the ROS Publish and Process Queue Threads
    protected: void InitRosQueueThreads();

    /// \brief Vector of foot contacts, zero indicates no contact and
    /// one indicates contact.
    private: int footContacts[4];

    /// \brief Node used for Gazebo transport.
    private: gazebo::transport::NodePtr gazeboNode;

    /// \brief Gazebo front left contact sensor Subscriber.
    private: gazebo::transport::SubscriberPtr flContactSensorSub;

    /// \brief Gazebo front right contact sensor Subscriber.
    private: gazebo::transport::SubscriberPtr frContactSensorSub;

    /// \brief Gazebo rear left contact sensor Subscriber.
    private: gazebo::transport::SubscriberPtr rlContactSensorSub;

    /// \brief Gazebo rear right contact sensor Subscriber.
    private: gazebo::transport::SubscriberPtr rrContactSensorSub;

    /// \brief Node used for ROS transport.
    private: std::unique_ptr<ros::NodeHandle> rosNode;

    /// \brief ROS Contact State Publisher.
    private: ros::Publisher contactStatePub;

    /// \brief ROS callbackque that helps publish messages.
    private: ros::CallbackQueue rosPublishQueue;

    /// \brief Thread running the rosPublishQueue.
    private: std::thread rosPublishQueueThread;
};