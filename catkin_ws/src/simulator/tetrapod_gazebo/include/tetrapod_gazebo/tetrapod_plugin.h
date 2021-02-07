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
#include "ros/package.h"
#include "ros/console.h"
#include "ros/callback_queue.h"
#include "ros/subscribe_options.h"
#include "std_msgs/Float32.h"
#include "std_msgs/Float64MultiArray.h"

// Eigen
#include <Eigen/Core>

// Standard library
#include <vector>
#include <map>

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
        /// \param[in] _joint_name Desired joint
        /// \param[in] _vel New target velocity
        public: void SetJointVelocity(const std::string &_joint_name, const double &_vel);

        /// \brief Set the velocity of the joints.
        /// \param[in] _vel New target velocity
        public: void SetJointVelocities(const std::vector<double> &_vel);
        
        /// \brief Set the position of the joints.
        /// \param[in] _pos New target position
        public: void SetJointPositions(const std::vector<double> &_pos);

        /// \brief The OnRosMsg function handles an incoming velocity
        /// message from ROS.
        /// \param[in] _msg A float array used to set the 
        /// velocity of the joints.
        public: void OnVelMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

        /// \brief The OnRosMsg function handles an incoming velocity
        /// message from ROS.
        /// \param[in] _msg A float array used to set the 
        /// position of the joints.
        public: void OnPosMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

        /// \brief The QueueThread function is a ROS helper function
        /// that processes messages.
        public: void QueueThread();

        // TODO REMOVE
        public: void printMap(const std::map<std::string,physics::JointPtr> &_map);

        /// \brief The initRos function is called to initialize ROS
        protected: void InitRos();

        /// \brief The LoadParametersRos function is called to load 
        /// configuration from the parameter server.
        protected: bool LoadParametersRos();

        /// \brief The InitJointControllers function is called to 
        /// setup joint PID controllers.
        protected: void InitJointControllers();

        /// \brief Pointer to the model.
        private: physics::ModelPtr model;

        /// \brief Pointers to the joints.
        //private: std::vector<physics::JointPtr> joints;
        //private: physics::Joint_V joints;
        private: std::map<std::string, physics::JointPtr> joints;

        /// \brief Vector of joint names
        private: std::vector<std::string> joint_names;

        /// \brief Vector of Velocity P-gains
        private: std::vector<double> vel_p_gains;

        /// \brief Vector of Velocity I-gains
        private: std::vector<double> vel_i_gains;

        /// \brief Vector of Velocity D-gains
        private: std::vector<double> vel_d_gains;

        /// \brief Vector of Position P-gains
        private: std::vector<double> pos_p_gains;

        /// \brief Vector of Position I-gains
        private: std::vector<double> pos_i_gains;

        /// \brief Vector of Position D-gains
        private: std::vector<double> pos_d_gains;

        /// \brief Node used for ROS transport.
        private: std::unique_ptr<ros::NodeHandle> rosNode;

        /// \brief ROS Velocity Subscriber.
        private: ros::Subscriber velSub;

        /// \brief ROS Position Subscriber.
        private: ros::Subscriber posSub;

        /// \brief ROS callbackque that helps process messages.
        private: ros::CallbackQueue rosQueue;

        /// \brief Thread running the rosQueue.
        private: std::thread rosQueueThread;
    };

    // Tell Gazebo about this plugin, so that Gazebo can call Load on this plugin.
    GZ_REGISTER_MODEL_PLUGIN(TetrapodPlugin)
} // namespace gazebo