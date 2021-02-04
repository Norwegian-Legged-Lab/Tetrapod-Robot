/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   tetrapod_plugin.h                                    */
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

// Gazebo
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/transport/transport.hh>
#include <gazebo/msgs/msgs.hh>

// ROS
#include <thread>
#include "ros/ros.h"
#include "ros/console.h"
#include "ros/callback_queue.h"
#include "ros/subscribe_options.h"
#include "std_msgs/Float32.h"
#include "std_msgs/Float64MultiArray.h"

// Eigen
#include <Eigen/Core>

namespace gazebo
{
    /// \brief Fixed variable for num joints
    static constexpr unsigned int NUMJOINTS = 12;

    using JointVelocities = Eigen::Matrix<double, 12, 1>;
    
    /// \brief A plugin to control the tetrapod robot.
    class TetrapodPlugin : public ModelPlugin
    {

        /// \brief Constructor
        public: TetrapodPlugin();
        
        /// \brief Destructor
        public: virtual ~TetrapodPlugin();

        /// \brief The Load function is called by Gazebo when the
        /// plugin is inserted into simulation.
        /// \param[in] _model A pointer to the model that the
        /// plugin is attached to.
        /// \param[in] _sdf A pointer to the plugin's SDF element.
        public: virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);

        /// \brief Set the velocity of the joint.
        /// \param[in] _vel New target velocity
        public: void SetVelocity(const double &_vel);

        /// \brief The OnRosMsg function handles an incoming
        /// message from ROS.
        /// \param[in] _msg A floatt value used to set the 
        /// velocity of the joint.
        public: void OnRosMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

        /// \brief The QueueThread function is a ROS helper function
        /// that processes messages.
        public: void QueueThread();

        /// \brief The initRos function is called to initialize ROS
        protected: void InitRos();

        /// \brief Pointer to the model.
        private: physics::ModelPtr model;

        /// \brief Pointer to the joint.
        private: physics::JointPtr joint;

        /// \brief PID controller for the joint.
        private: common::PID pid;

        /// \brief Node used for ROS transport.
        private: std::unique_ptr<ros::NodeHandle> rosNode;

        /// \brief ROS Subscriber.
        private: ros::Subscriber rosSub;

        /// \brief ROS callbackque that helps process messages.
        private: ros::CallbackQueue rosQueue;

        /// \brief Thread running the rosQueue.
        private: std::thread rosQueueThread;
    };

    // Tell Gazebo about this plugin, so that Gazebo can call Load on this plugin.
    GZ_REGISTER_MODEL_PLUGIN(TetrapodPlugin)
} // namespace gazebo