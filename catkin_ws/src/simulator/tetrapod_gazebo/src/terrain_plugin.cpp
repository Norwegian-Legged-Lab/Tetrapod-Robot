#include "tetrapod_gazebo/terrain_plugin.h"

namespace gazebo{

// Constructor
TerrainPlugin::TerrainPlugin() {}

// Destructor
TerrainPlugin::~TerrainPlugin() 
{
    this->rosNode->shutdown();

    this->rosProcessQueue.clear();
    this->rosProcessQueue.disable();
    this->rosProcessQueueThread.join();
}

// Initialize ROS Publish and Process Queue Threads
void TerrainPlugin::InitRosQueueThreads()
{
    this->rosProcessQueueThread = std::thread(
        std::bind(&TerrainPlugin::ProcessQueueThread, this)
    );
}

// Setup thread to process messages
void TerrainPlugin::ProcessQueueThread()
{
    static const double timeout = 0.000001;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}


void TerrainPlugin::Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
{
    this->world = _world;

    InitRos();

    InitRosQueueThreads();
}

void TerrainPlugin::InitRos()
{
    if (!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init(
            argc,
            argv,
            "gazebo_client",
            ros::init_options::NoSigintHandler
        );
    }

    this->rosNode.reset(new ros::NodeHandle("gazebo_client"));
    
    ros::AdvertiseServiceOptions reset_simulation_aso =
        ros::AdvertiseServiceOptions::create<std_srvs::Empty>(
            "/" + std::string("my_robot") + "/reset_simulation_terrain",
            boost::bind(&TerrainPlugin::ResetSimulation, this, _1, _2),    
            ros::VoidPtr(),
            &this->rosProcessQueue
        );
    
    this->resetSimService = this->rosNode->advertiseService(reset_simulation_aso);
    
   this->tetrapodResetService = this->rosNode->serviceClient<std_srvs::Empty>("/my_robot/reset_simulation");
}

bool TerrainPlugin::ResetSimulation(const std_srvs::Empty::Request &_req,
                                     std_srvs::Empty::Response &_res)
{
    physics::Model_V models = this->world->Models();

    models = this->world->Models();

    this->world->RemoveModel("terrain");

    this->world->InsertModelFile("model://terrain_description");

    this->world->DisableAllModels();

    this->world->EnableAllModels();

    this->world->Reset();

    std_srvs::Empty srv_call;

    this->tetrapodResetService.call(srv_call);

    return true;
}
}