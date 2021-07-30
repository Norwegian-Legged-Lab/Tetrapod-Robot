#pragma once

// Gazebo
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <gazebo/gazebo_client.hh>
#include <gazebo/transport/transport.hh>
#include <gazebo/msgs/msgs.hh>

#include "ros/ros.h"
#include "ros/package.h"
#include "ros/console.h"
#include "ros/callback_queue.h"
#include "ros/subscribe_options.h"
#include "eigen_conversions/eigen_msg.h"
#include "geometry_msgs/PoseArray.h"
#include "visualization_utils/eigen_geometry_msgs.h"
#include "visualization_utils/xml_utils.h"
#include<string>
#include<vector>
#include<iostream>
#include<Eigen/Core>
#include <ignition/math.hh>

namespace gazebo{


class FootstepPlannerPlugin : public WorldPlugin
{
    public: FootstepPlannerPlugin();

    public: virtual ~FootstepPlannerPlugin();

    /// \brief The Load function is called by Gazebo when the
    /// plugin is inserted into simulation.
    /// \param[in] _model A pointer to the model that the
    /// plugin is attached to.
    /// \param[in] _sdf A pointer to the plugin's SDF element.
    public: virtual void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf);

    public: void UpdateFootstepPlan(const geometry_msgs::PoseArray::ConstPtr& msg);

    public: void InitRos();

    public: void InitRosQueueThreads();

    public: void ProcessQueueThread();

    public: void InitGazebo();

    public: void DeleteVisuals();

    public: void SetVisuals(Eigen::MatrixX3d &poses);

    public: void PublishVisuals();

    /// \brief Pointer to the world.
    private: physics::WorldPtr world;

    /// \brief Node used for ROS transport.
    private: std::unique_ptr<ros::NodeHandle> rosNode;

    private: ros::Subscriber footstepPlannerSub;

    /// \brief ROS callbackque that helps process messages.
    private: ros::CallbackQueue rosProcessQueue;

    /// \brief Thread running the rosProcessQueue.
    private: std::thread rosProcessQueueThread;

    private: Eigen::Matrix<msgs::Visual, Eigen::Dynamic, 1> indicators;

    private: transport::PublisherPtr indicatorPub;

    private: transport::NodePtr gazeboNode;
};

    // Tell Gazebo about this plugin, so that Gazebo can call Load on this plugin.
GZ_REGISTER_WORLD_PLUGIN(FootstepPlannerPlugin)
}