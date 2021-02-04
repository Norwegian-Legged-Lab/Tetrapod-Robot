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
    delete this->rosNode;
};

// Load Plugin 
void TetrapodPlugin::Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
{
    // Store model pointer
    this->model = _model;

    // Store joint pointer
    this->joint = model->GetJoints()[0];

    // Setup P-controller
    this->pid = common::PID(10, 0, 0);

    // Apply P-controller
    this->model->GetJointController()->SetVelocityPID(
        this->joint->GetScopedName(),
        this->pid
    );

    // Initialize ROS
    initRos();

};

// Set the joints target velocity
void TetrapodPlugin::SetVelocity(const double &_vel)
{
    this->model->GetJointController()->SetVelocityTarget(
        this->joint->GetScopedName(),
        _vel
    );
}

// Callback for ROS messages
void TetrapodPlugin::OnRosMsg(const double &_vel)
{
    this->SetVelocity(_msg->data);
    ROS_INFO("[TetrapodPlugin::OnRosMsg] Setting velocity to %f", _msg->data);
}

// Setup thread to process messages
void TetrapodPlugin::QueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok()
    {
        this->rosQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Initialize ROS
void TetrapodPlugin::initROS()
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
        ros::SubscribeOptions::create<std_msgs::Float32>(
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


} // namespace gazebo