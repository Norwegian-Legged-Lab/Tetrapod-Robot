/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth & Adrian B. Ghansah          */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   single_leg_plugin.h                                  */
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
#include "eigen_conversions/eigen_msg.h"
#include "std_msgs/Float32.h"
#include "std_msgs/Float64MultiArray.h"
#include "sensor_msgs/JointState.h"
#include "std_srvs/Empty.h"

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
    static constexpr unsigned int NUMJOINTS = 3;

    using JointVelocities = Eigen::Matrix<double, 3, 1>;

    enum ControlMode { position = 1, velocity = 2, torque = 3 };
    
    /// \brief A plugin to control the single_leg robot.
    class SingleLegPlugin : public ModelPlugin
    {

        /// \brief Constructor
        public: SingleLegPlugin();
        
        /// \brief Destructor
        public: virtual ~SingleLegPlugin();

        /// \brief The Load function is called by Gazebo when the
        /// plugin is inserted into simulation.
        /// \param[in] _model A pointer to the model that the
        /// plugin is attached to.
        /// \param[in] _sdf A pointer to the plugin's SDF element.
        public: virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);

        /// \brief Get current base pose for the robot.
        /// \return Returns base pose: q_b = (x, y, z, roll, pitch, yaw) 
        /// in the world frame.
        public: Eigen::Matrix<double, 6, 1> GetBasePose();

        /// \brief Get current base twist for the robot.
        /// \return Returns base twist: 
        /// u_b = (x_vel, y_vel, z_vel, roll_rate, pitch_rate, yaw_rate) 
        /// in the world frame.
        public: Eigen::Matrix<double, 6, 1> GetBaseTwist();

        /// \brief Get currently applied force at a specific joint 
        /// \param[in] _joint_name Desired joint
        /// \return Current joint force
        public: double GetJointForce(const std::string &_joint_name);

        /// \brief Get current joint forces for the robot
        /// \return Returns joint velocities : tau_r //TODO maybe the use of tau_r needs change  
        public: Eigen::Matrix<double, 3, 1> GetJointForces();

        /// \brief Get current velocity at a specific joint 
        /// \param[in] _joint_name Desired joint
        /// \return Current joint velocity
        public: double GetJointVelocity(const std::string &_joint_name);

        /// \brief Get current joint velocities for the robot
        /// \return Returns joint velocities : dot_q_r  
        public: Eigen::Matrix<double, 3, 1> GetJointVelocities();

        /// \brief Get current position at a specific joint 
        /// \param[in] _joint_name Desired joint
        /// \return Current joint position
        public: double GetJointPosition(const std::string &_joint_name);

        /// \brief Get current joint positions for the robot
        /// \return Returns joint configuration : q_r  
        public: Eigen::Matrix<double, 3, 1> GetJointPositions();

        /// \brief Apply force at a specific joint 
        /// \param[in] _joint_name Desired joint
        /// \param[in] _force Force to apply
        public: void SetJointForce(const std::string &_joint_name, const double &_force);

        /// \brief Apply joint forces
        /// \param[in] _forces Forces to apply
        public: void SetJointForces(const std::vector<double> &_forces);

        /// \brief Set the velocity of the joint.
        /// \param[in] _joint_name Desired joint
        /// \param[in] _vel New target velocity
        public: void SetJointVelocity(const std::string &_joint_name, const double &_vel);

        /// \brief Set the velocity of the joints.
        /// \param[in] _vel New target velocity
        public: void SetJointVelocities(const std::vector<double> &_vel);
        
        /// \brief Set the position of the joints.
        /// \param[in] _pos New target position vector in radians
        public: void SetJointPositions(const std::vector<double> &_pos);

        /// \brief The OnJointStateMsg function handles an incoming joint state
        /// message from ROS.
        /// \param[in] _msg A message holding data to describe the state
        /// of a set of controlled joints. The state is defined by 
        /// * the position of the joint,
        /// * the velocity of the joint and
        /// * the effort (torque) that is applied in the joint.
        public: void OnJointStateMsg(const sensor_msgs::JointStateConstPtr &_msg);

        /// \brief The OnRosMsg function handles an incoming force
        /// message from ROS.
        /// \param[in] _msg A float array used to set the 
        /// force of the joints.
        public: void OnForceMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

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

        /// \brief The ProcessQueueThread function is a ROS helper function
        /// that processes messages.
        public: void ProcessQueueThread();

        /// \brief The PublishQueueThread function is a ROS helper function
        /// that publish state messages.
        public: void PublishQueueThread();

        // TODO REMOVE
        public: void printMap(const std::map<std::string,physics::JointPtr> &_map);

        /// \brief The initRos function is called to initialize ROS
        protected: void InitRos();

        /// \brief The InitRosQueueThreads function is called to initialize
        /// the ROS Publish and Process Queue Threads
        protected: void InitRosQueueThreads();

        /// \brief The LoadParametersRos function is called to load 
        /// conffloatiguration from the parameter server.
        /// \return True if parameters loaded successfully.
        protected: bool LoadParametersRos();

        /// \brief The InitJointControllers function is called to 
        /// setup joint PID controllers.
        protected: void InitJointControllers();

        /// \brief The InitJointConfiguration function is called to 
        /// initialize the desired joint configuration
        protected: void InitJointConfiguration();

        /// \brief The ResetSimulation function handles an incoming
        /// reset simulation service request.
        /// \param[in] _req Service request.
        /// \param[out] _res Service response.
        /// \return Returns true if success, and false if not.
        public: bool ResetSimulation(const std_srvs::Empty::Request &_req,
                                     std_srvs::Empty::Response &_res);

        /// \brief Pointer to the model.
        private: physics::ModelPtr model;

        /// \brief Pointer to the world.
        private: physics::WorldPtr world;

        /// \brief Model name
        private: std::string model_name;

        /// \brief Pointer to the body link
        private: physics::LinkPtr base;

        /// \brief Pointers to the joints.
        //private: std::vector<physics::JointPtr> joints;
        //private: physics::Joint_V joints;
        private: std::map<std::string, physics::JointPtr> joints;

        /// \brief Vector of joint names
        private: std::vector<std::string> joint_names;

        /// \brief Vector of joint configuration
        private: std::vector<double> joint_config;

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

        /// \brief Control mode indicator
        /// { position = 1, velocity = 2, torque = 3 }
        private: ControlMode controlMode;

        /// \brief Node used for ROS transport.
        private: std::unique_ptr<ros::NodeHandle> rosNode;

        /// \brief ROS Reset Simulation Service.
        private: ros::ServiceServer resetSimService;

        /// \brief ROS Generalized Coordinates Publisher.
        private: ros::Publisher genCoordPub;

        /// \brief ROS Generalized Velocities Publisher.
        private: ros::Publisher genVelPub;

        /// \brief ROS Joint State Subscriber.
        private: ros::Subscriber jointStateSub;

        /// \brief ROS Force Subscriber.
        private: ros::Subscriber forceSub;

        /// \brief ROS Velocity Subscriber.
        private: ros::Subscriber velSub;

        /// \brief ROS Position Subscriber.
        private: ros::Subscriber posSub;

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
    GZ_REGISTER_MODEL_PLUGIN(SingleLegPlugin)
} // namespace gazebo