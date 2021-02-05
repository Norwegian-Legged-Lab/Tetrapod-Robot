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


#include <tetrapod_gazebo/tetrapod_plugin.h>

namespace gazebo {

// Constructor
TetrapodPlugin::TetrapodPlugin() {};

// Destructor
TetrapodPlugin::~TetrapodPlugin() 
{
    this->rosNode->shutdown();
    this->rosQueue.clear();
    this->rosQueue.disable();
    this->rosQueueThread.join();
};

// Load Plugin 
void TetrapodPlugin::Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
{
    // Store model pointer
    this->model = _model;
    ROS_INFO_STREAM("Model name: " << this->model->GetName());

    // Store joint pointer
    //this->joint = model->GetJoints()[0];

    // Store joints 
    this->joints = this->model->GetJointController()->GetJoints();
    //printMap(joints);

    // Test access to a single joint
    //this->joint = this->joints["my_robot::tetrapod::front_left_hip_yaw"];

    // Initialize ROS
    InitRos();

    // Load parameters from config
    if (!LoadParametersRos())
    {
        ROS_ERROR("Could not load parameters.");
        return;
    }

    // Initialize Joint Controllers
    InitJointControllers();


};

// Set the a single joints target velocity
void TetrapodPlugin::SetJointVelocity(const std::string &_joint_name, const double &_vel)
{
    this->model->GetJointController()->SetVelocityTarget(
        joint_name,
        _vel
    );
}

// Set joint target velocities
void TetrapodPlugin::SetJointVelocities(const std::vector<double> &_vel)
{
    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        this->model->GetJointController()->SetVelocityTarget(
            "my_robot::tetrapod::" + joint_names[i],
            _vel[i]
        );
    }
}

// Callback for ROS messages
void TetrapodPlugin::OnRosMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    this->SetJointVelocities(_msg->data);
}

// Setup thread to process messages
void TetrapodPlugin::QueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosQueue.callAvailable(ros::WallDuration(timeout));
    }
};

// Initialize ROS
void TetrapodPlugin::InitRos()
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

    ros::SubscribeOptions so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/" + this->model->GetName() + "/vel_cmd",
            1,
            boost::bind(&TetrapodPlugin::OnRosMsg, this, _1),
            ros::VoidPtr(),
            &this->rosQueue
            );

    this->rosSub = this->rosNode->subscribe(so);

    this->rosQueueThread = std::thread(
        std::bind(&TetrapodPlugin::QueueThread, this)
    );
};

// Load configuration
bool TetrapodPlugin::LoadParametersRos()
{
    if (!this->rosNode->getParam("joint_velocity_controller/joint_names", this->joint_names))
    {
        ROS_ERROR("Could not read joint names from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_velocity_controller/p_gains", this->p_gains))
    {
        ROS_ERROR("Could not read P-gains from parameter server.");
        return false;
    }

    if (joint_names.size() != p_gains.size())
    {
        ROS_ERROR("Mismatch in number of joints and number of gains.");
        return false;
    }

    return true;
};

// Initialize Joint Controllers
void TetrapodPlugin::InitJointControllers()
{
    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        this->model->GetJointController()->SetVelocityPID(
            "my_robot::tetrapod::" + joint_names[i],
            common::PID(p_gains[i],0,0)
        );
    }
};

} // namespace gazebo
