/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   pendulum_plugin.h                                    */
/*    DATE:   May 5, 2021                                          */
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
#include "ros/package.h"
#include "ros/console.h"
#include "ros/callback_queue.h"
#include "ros/subscribe_options.h"
#include "eigen_conversions/eigen_msg.h"
#include "std_msgs/Float64.h"
#include "std_msgs/Float64MultiArray.h"
#include "sensor_msgs/JointState.h"

// ROS Package Libraries
#include<math_utils/angle_utils.h>

// Eigen
#include <Eigen/Core>

// Standard library
#include <vector>
#include <map>

namespace gazebo
{
    /// \brief Fixed variable for num joints
    static constexpr unsigned int NUMJOINTS = 1;

    /// \brief A plugin to control the pendulum robot.
    class PendulumPlugin : public ModelPlugin
    {
        /// \brief Control mode enumerator
        public: enum ControlMode { position = 1, velocity = 2, torque = 3 };

        /// \brief Constructor
        public: PendulumPlugin();
        
        /// \brief Destructor
        public: virtual ~PendulumPlugin();

        /// \brief The Load function is called by Gazebo when the
        /// plugin is inserted into simulation.
        /// \param[in] _model A pointer to the model that the
        /// plugin is attached to.
        /// \param[in] _sdf A pointer to the plugin's SDF element.
        public: virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);

        /// \brief Get currently applied force at the joint 
        /// \return Current joint force
        public: double GetJointForce();

        /// \brief Apply force at a specific joint 
        /// \param[in] _force Force to apply
        public: void SetJointForce(const double &_force);

        /// \brief Set the velocity of the joint.
        /// \param[in] _vel New target velocity
        public: void SetJointVelocity(const double &_vel);

        /// \brief Set the position of the joint.
        /// \param[in] _pos New target position in radians
        public: void SetJointPosition(const double &_pos);

        /// \brief The OnJointStateMsg function handles an incoming joint state
        /// message from ROS.
        /// \param[in] _msg A message holding data to describe the state
        /// of a set of controlled joints. The state is defined by 
        /// * the position of the joint,
        /// * the velocity of the joint and
        /// * the effort (torque) that is applied in the joint.
        public: void OnJointStateMsg(const sensor_msgs::JointStateConstPtr &_msg);

        /// \brief The ProcessQueueThread function is a ROS helper function
        /// that processes messages.
        public: void ProcessQueueThread();

        /// \brief The PublishQueueThread function is a ROS helper function
        /// that publish state messages.
        public: void PublishQueueThread();

        /// \brief The initRos function is called to initialize ROS
        protected: void InitRos();

        /// \brief The InitRosQueueThreads function is called to initialize
        /// the ROS Publish and Process Queue Threads
        protected: void InitRosQueueThreads();

        /// \brief The InitJointControllers function is called to 
        /// setup joint PID controllers.
        protected: void InitJointController();

        /// \brief The InitJointConfiguration function is called to 
        /// initialize the desired joint configuration
        protected: void InitJointConfiguration();

        /// \brief Pointer to the model.
        private: physics::ModelPtr model;

        /// \brief Model name
        private: std::string model_name;

        /// \brief Pointers to the joint.
        private: physics::JointPtr joint;

        /// \brief Velocity P-gain
        private: double vel_p_gain;

        /// \brief Velocity I-gain
        private: double vel_i_gain;

        /// \brief Velocity D-gain
        private: double vel_d_gain;

        /// \brief Position P-gain
        private: double pos_p_gain;

        /// \brief Position I-gain
        private: double pos_i_gain;

        /// \brief Position D-gain
        private: double pos_d_gain;

        /// \brief Control mode indicator
        /// { position = 1, velocity = 2, torque = 3 }
        private: ControlMode controlMode;

        /// \brief Node used for ROS transport.
        private: std::unique_ptr<ros::NodeHandle> rosNode;

        /// \brief ROS Joint State Subscriber.
        private: ros::Subscriber jointStateSub;

        /// \brief ROS Joint Force (Torque) Publisher.
        private: ros::Publisher jointForcePub;

        /// \brief ROS callbackque that helps process messages.
        private: ros::CallbackQueue rosProcessQueue;

        /// \brief ROS callbackque that helps publish messages.
        private: ros::CallbackQueue rosPublishQueue;

        /// \brief Thread running the rosProcessQueue.
        private: std::thread rosProcessQueueThread;

        /// \brief Thread running the rosPublishQueue.
        private: std::thread rosPublishQueueThread;

    };

    // Tell Gazebo about this plugin, so that Gazebo can call Load on this plugin.
    GZ_REGISTER_MODEL_PLUGIN(PendulumPlugin)
} // namespace gazebo