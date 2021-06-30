#pragma once

// Gazebo
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>

// ROS
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


#include<string>
#include<vector>
#include<iostream>

namespace gazebo{


class TerrainPlugin : public WorldPlugin
{
    public: TerrainPlugin();

    public: virtual ~TerrainPlugin();

    /// \brief The Load function is called by Gazebo when the
    /// plugin is inserted into simulation.
    /// \param[in] _model A pointer to the model that the
    /// plugin is attached to.
    /// \param[in] _sdf A pointer to the plugin's SDF element.
    public: virtual void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf);

    public: bool ResetSimulation(const std_srvs::Empty::Request &_req,
                                    std_srvs::Empty::Response &_res);

    public: void InitRos();

    public: void InitRosQueueThreads();

    public: void ProcessQueueThread();

    /// \brief Pointer to the world.
    private: physics::WorldPtr world;

    /// \brief Node used for ROS transport.
    private: std::unique_ptr<ros::NodeHandle> rosNode;

    /// \brief ROS Reset Simulation Service.
    private: ros::ServiceServer resetSimService;

    private: ros::ServiceClient tetrapodResetService;

    /// \brief ROS callbackque that helps process messages.
    private: ros::CallbackQueue rosProcessQueue;

    /// \brief Thread running the rosProcessQueue.
    private: std::thread rosProcessQueueThread;

};

    // Tell Gazebo about this plugin, so that Gazebo can call Load on this plugin.
GZ_REGISTER_WORLD_PLUGIN(TerrainPlugin)
}