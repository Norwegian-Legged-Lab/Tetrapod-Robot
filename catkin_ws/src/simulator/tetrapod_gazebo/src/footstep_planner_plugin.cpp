#include "tetrapod_gazebo/footstep_planner_plugin.h"
#include<iostream>
namespace gazebo{

// Constructor
FootstepPlannerPlugin::FootstepPlannerPlugin() {std::cout << "Footstep_planner_plugin is constructed" << std::endl;}

// Destructor
FootstepPlannerPlugin::~FootstepPlannerPlugin() 
{
    this->rosNode->shutdown();

    this->rosProcessQueue.clear();
    this->rosProcessQueue.disable();
    this->rosProcessQueueThread.join();
}

// Initialize ROS Publish and Process Queue Threads
void FootstepPlannerPlugin::InitRosQueueThreads()
{
    this->rosProcessQueueThread = std::thread(
        std::bind(&FootstepPlannerPlugin::ProcessQueueThread, this)
    );
}

// Setup thread to process messages
void FootstepPlannerPlugin::ProcessQueueThread()
{
    static const double timeout = 0.000001;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}


void FootstepPlannerPlugin::Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
{
    this->world = _world;

    InitRos();

    InitRosQueueThreads();

    InitGazebo();
}

void FootstepPlannerPlugin::InitRos()
{
    if (!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init(
            argc,
            argv,
            "gazebo_footstep_planner",
            ros::init_options::NoSigintHandler
        );
    }
    this->rosNode.reset(new ros::NodeHandle("gazebo_footstep_planner"));

    this->footstepPlannerSub = this->rosNode->subscribe("/footstep_planner/footstep_plan", 1000, &FootstepPlannerPlugin::UpdateFootstepPlan, this);
}

void FootstepPlannerPlugin::InitGazebo()
{
    //gazebo::client::setup();
    this->gazeboNode.reset(new gazebo::transport::Node());

    this->gazeboNode->Init();

    this->indicatorPub = this->gazeboNode->Advertise("~/visual", "gazebo.msgs.Visual");
}

void FootstepPlannerPlugin::SetVisuals(Eigen::MatrixX3d &poses)
{
    indicators = Eigen::Matrix<msgs::Visual, Eigen::Dynamic, 1>();
    ROS_INFO("created new indicator matrix.");
    indicators.conservativeResize(poses.rows(), Eigen::NoChange);
    ROS_INFO("resized new indicator matrix");

    int n_steps = indicators.rows();

    std::string parent_name = "default";

    std::string name;

    msgs::Visual *indicator;

    msgs::Geometry *geometry;
    
    Eigen::Vector3d pose;

    Eigen::Vector3d yellow(1, 1, 0);

    Eigen::Vector3d green(0, 1, 0);

    Eigen::Matrix3Xd colors = interpolateColors(yellow, green, n_steps);

    ignition::math::Color c;

    ignition::math::Color spec(0.1, 0.1, 0.1);

    for (int i = 0; i < n_steps; ++i)
    {
        ROS_INFO("start of loop");
        c.Set(colors(0, i), colors(1, i), colors(2, i));

        pose = poses.row(i).transpose();

        indicator = &(indicators(i));
        
        name = "footstep " + std::to_string(i);
        ROS_INFO("about to set name");
        indicator->set_name(name);
        ROS_INFO("set name completed");
        indicator->set_visible(true);

        indicator->set_parent_name(parent_name);

        indicator->set_cast_shadows(false);

        geometry = indicator->mutable_geometry();
        
        geometry->set_type(msgs::Geometry::CYLINDER);

        geometry->mutable_cylinder()->set_radius(0.02);
        
        geometry->mutable_cylinder()->set_length(0.01);

        msgs::Set(indicator->mutable_pose(), ignition::math::Pose3d(pose(0), pose(1), pose(2), 0, 0, 0));
        std::cout << pose(0) << " " << pose(1) << " " << pose(2) << std::endl;
        msgs::Set(indicator->mutable_material()->mutable_ambient(), c);
        
        msgs::Set(indicator->mutable_material()->mutable_diffuse(), c);

        msgs::Set(indicator->mutable_material()->mutable_ambient(), spec);

        msgs::Set(indicator->mutable_material()->mutable_emissive(), c);

        indicator->set_is_static(true);
        ROS_INFO("end of loop");
    }
}

void FootstepPlannerPlugin::PublishVisuals()
{
    int n_steps = indicators.rows();

    msgs::Visual *indicator;

    for (int i = 0; i < n_steps; ++i)
    {
        indicator = &(indicators(i));

        indicatorPub->Publish(*indicator);
    }
}

void FootstepPlannerPlugin::DeleteVisuals()
{
    int n_steps = indicators.rows();

    msgs::Visual *indicator;

    for(int i = 0; i < n_steps; ++i)
    {
        indicator = &(indicators(i));

        indicator->set_delete_me(true);

        indicatorPub->Publish(*indicator);
    }
}

void FootstepPlannerPlugin::UpdateFootstepPlan(const geometry_msgs::PoseArray::ConstPtr& msg)
{
    ROS_INFO("Footstep_planner_plugin: Received updated footstep plan");
    Eigen::MatrixX3d poses = eigen_matr_from_pose_array(*msg);

    //DeleteVisuals();

    SetVisuals(poses);

    PublishVisuals();
}
}