/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   tetrapod_plugin.cpp                                  */
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
TetrapodPlugin::TetrapodPlugin() {}

// Destructor
TetrapodPlugin::~TetrapodPlugin() 
{
    this->rosNode->shutdown();
    this->rosQueue.clear();
    this->rosQueue.disable();
    this->rosQueueThread.join();
}

// Load Plugin 
void TetrapodPlugin::Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
{
    // Store model pointer
    this->model = _model;

    // Store model name
    this->model_name = _model->GetName();
    // ROS_INFO_STREAM("Model name: " << model_name); TODO REMOVE



    // Store joints 
    this->joints = this->model->GetJointController()->GetJoints();
    //printMap(joints); TODO remove

    // Initialize ROS
    InitRos();

    // Load parameters from config
    if (!LoadParametersRos())
    {
        ROS_ERROR("Could not load parameters.");
        return;
    }

    // Setup Joint Controllers
    InitJointControllers();

    // Configure initial joint states
    InitJointConfiguration();
}

// Apply force at a single joint
void TetrapodPlugin::SetJointForce(const std::string &_joint_name, const double &_force)
{
    this->model->GetJointController()->SetForce(
        this->model_name + "::" + _joint_name,
        _force
    );
}

// Apply joint forces
void TetrapodPlugin::SetJointForces(const std::vector<double> &_forces)
{
    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        this->model->GetJointController()->SetForce(
            this->model_name + "::" + this->joint_names[i],
            _forces[i]
        );
    }
}

// Set the a single joints target velocity
void TetrapodPlugin::SetJointVelocity(const std::string &_joint_name, const double &_vel)
{
    this->model->GetJointController()->SetVelocityTarget(
        this->model_name + "::" + _joint_name, 
        _vel
    );
}

// Set joint target velocities
void TetrapodPlugin::SetJointVelocities(const std::vector<double> &_vel)
{
    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        this->model->GetJointController()->SetVelocityTarget(
            this->model_name + "::" + this->joint_names[i],
            _vel[i]
        );
    }
}

// Set joint target positions
void TetrapodPlugin::SetJointPositions(const std::vector<double> &_pos)
{
    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        this->model->GetJointController()->SetPositionTarget(
            this->model_name + "::" + this->joint_names[i],
            angle_utils::wrapAngleToPi(angle_utils::degToRad(_pos[i]))
        );
    }
}

// Callback for ROS Force messages
void TetrapodPlugin::OnForceMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    this->SetJointForces(_msg->data);
}

// Callback for ROS Velocity messages
void TetrapodPlugin::OnVelMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    this->SetJointVelocities(_msg->data);
}

// Callback for ROS Position messages
void TetrapodPlugin::OnPosMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    this->SetJointPositions(_msg->data);
}

// Setup thread to process messages
void TetrapodPlugin::QueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosQueue.callAvailable(ros::WallDuration(timeout));
    }
}

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

    ros::SubscribeOptions force_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/" + this->model->GetName() + "/force_cmd",
            1,
            boost::bind(&TetrapodPlugin::OnForceMsg, this, _1),
            ros::VoidPtr(),
            &this->rosQueue
            );

    ros::SubscribeOptions vel_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/" + this->model->GetName() + "/vel_cmd",
            1,
            boost::bind(&TetrapodPlugin::OnVelMsg, this, _1),
            ros::VoidPtr(),
            &this->rosQueue
            );

    ros::SubscribeOptions pos_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/" + this->model->GetName() + "/pos_cmd",
            1,
            boost::bind(&TetrapodPlugin::OnPosMsg, this, _1),
            ros::VoidPtr(),
            &this->rosQueue
            );

    this->forceSub = this->rosNode->subscribe(force_so);

    this->velSub = this->rosNode->subscribe(vel_so);

    this->posSub = this->rosNode->subscribe(pos_so);

    this->rosQueueThread = std::thread(
        std::bind(&TetrapodPlugin::QueueThread, this)
    );
}

// Load configuration
bool TetrapodPlugin::LoadParametersRos()
{
    if (!this->rosNode->getParam("joint_names", this->joint_names))
    {
        ROS_ERROR("Could not read joint names from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_config", this->joint_config))
    {
        ROS_ERROR("Could not read joint config from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_velocity_controller/p_gains", this->vel_p_gains))
    {
        ROS_ERROR("Could not read velocity P-gains from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_velocity_controller/i_gains", this->vel_i_gains))
    {
        ROS_ERROR("Could not read velocity I-gains from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_velocity_controller/d_gains", this->vel_d_gains))
    {
        ROS_ERROR("Could not read velocity D-gains from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_position_controller/p_gains", this->pos_p_gains))
    {
        ROS_ERROR("Could not read position P-gains from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_position_controller/i_gains", this->pos_i_gains))
    {
        ROS_ERROR("Could not read position I-gains from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_position_controller/d_gains", this->pos_d_gains))
    {
        ROS_ERROR("Could not read position D-gains from parameter server.");
        return false;
    }

    if (joint_names.size() != vel_p_gains.size() ||
        joint_names.size() != vel_i_gains.size() ||
        joint_names.size() != vel_d_gains.size() ||
        joint_names.size() != pos_p_gains.size() ||
        joint_names.size() != pos_i_gains.size() ||
        joint_names.size() != pos_d_gains.size())
    {
        ROS_ERROR("Mismatch in number of joints and number of gains.");
        return false;
    }

    return true;
}

// Initialize Joint Controllers
void TetrapodPlugin::InitJointControllers()
{
    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        this->model->GetJointController()->SetVelocityPID(
            this->model_name + "::" + this->joint_names[i],
            common::PID(vel_p_gains[i], vel_i_gains[i], vel_d_gains[i])
        );

        this->model->GetJointController()->SetPositionPID(
            this->model_name + "::" + this->joint_names[i],
            common::PID(pos_p_gains[i], pos_i_gains[i], pos_d_gains[i])
        );
    }
}

// Initialize joint configuration
void TetrapodPlugin::InitJointConfiguration()
{
    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        this->model->GetJointController()->SetJointPosition(
            this->model_name + "::" + this->joint_names[i],
            angle_utils::wrapAngleToPi(angle_utils::degToRad(this->joint_config[i]))
        );
    }

    this->SetJointPositions(this->joint_config);
}

} // namespace gazebo
