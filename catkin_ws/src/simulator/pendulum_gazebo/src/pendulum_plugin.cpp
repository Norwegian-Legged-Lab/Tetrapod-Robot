/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   pendulum_plugin.cpp                                  */
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


#include <pendulum_gazebo/pendulum_plugin.h>


namespace gazebo {

// Constructor
PendulumPlugin::PendulumPlugin() 
{
    this->pos_p_gain = 100;
    this->pos_i_gain = 0;
    this->pos_d_gain = 10;

    this->vel_p_gain = 100;
    this->vel_i_gain = 0;
    this->vel_d_gain = 10;
}

// Destructor
PendulumPlugin::~PendulumPlugin() 
{
    this->rosNode->shutdown();

    this->rosProcessQueue.clear();
    this->rosProcessQueue.disable();
    this->rosProcessQueueThread.join();
}

// Load Plugin 
void PendulumPlugin::Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
{
    // Store model pointer
    this->model = _model;

    // Store model name
    this->model_name = _model->GetName();

    // Store joint 
    this->joint = this->model->GetJoints()[0];

    // Initialize ROS
    InitRos();

    // Setup Joint Controllers
    InitJointController();

    // Configure initial joint states
    InitJointConfiguration();

    // Initialize ROS Queue Threads
    InitRosQueueThreads();
}

// Get joint force
double PendulumPlugin::GetJointForce()
{
    double force = this->joint->GetForce(0);

    return force;
}

// Apply force at a single joint
void PendulumPlugin::SetJointForce(const double &_force)
{
    if (this->controlMode != 3)
    {
        this->model->GetJointController()->Reset();

        this->controlMode = ControlMode::torque;
    }

    this->model->GetJointController()->SetForce(
        this->joint->GetScopedName(),
        _force
    );
}


// Set the a single joints target velocity
void PendulumPlugin::SetJointVelocity(const double &_vel)
{
    if (this->controlMode != 2)
    {
        this->model->GetJointController()->Reset();

        this->controlMode = ControlMode::velocity;
    }

    this->model->GetJointController()->SetVelocityTarget(
        this->joint->GetScopedName(),
        _vel
    );
}


// Set the a single joints target position
void PendulumPlugin::SetJointPosition(const double &_pos)
{
    if (this->controlMode != 1)
    {
        this->model->GetJointController()->Reset();

        this->controlMode = ControlMode::position;
    }

    this->model->GetJointController()->SetPositionTarget(
        this->joint->GetScopedName(),
        _pos
    );
}

// Callback for ROS Joint State messages
void PendulumPlugin::OnJointStateMsg(const sensor_msgs::JointStateConstPtr &_msg)
{
    if ((!_msg->position.empty()) && (_msg->position.size() == NUMJOINTS))
    {
        this->SetJointPosition(_msg->position[0]);
    }

    if ((!_msg->velocity.empty()) && (_msg->velocity.size() == NUMJOINTS))
    {
        this->SetJointVelocity(_msg->velocity[0]);
    }

    if ((!_msg->effort.empty()) && (_msg->effort.size() == NUMJOINTS))
    {
        this->SetJointForce(_msg->effort[0]);
    }
}

// Setup thread to process messages
void PendulumPlugin::ProcessQueueThread()
{
    static const double timeout = 0.000001;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Setup thread to process messages
void PendulumPlugin::PublishQueueThread()
{
    ros::Rate loop_rate(10);
    while (this->rosNode->ok())
    {
        std_msgs::Float64 joint_force_msg;

        joint_force_msg.data = this->GetJointForce();

        this->jointForcePub.publish(joint_force_msg);

        loop_rate.sleep();
    }
}
// Initialize ROS
void PendulumPlugin::InitRos()
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

    ros::SubscribeOptions joint_state_so = 
        ros::SubscribeOptions::create<sensor_msgs::JointState>(
            "/" + this->model->GetName() + "/joint_state_cmd",
            1,
            boost::bind(&PendulumPlugin::OnJointStateMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::AdvertiseOptions joint_force_ao =
        ros::AdvertiseOptions::create<std_msgs::Float64>(
            "/" + this->model->GetName() + "/joint_force",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    this->jointStateSub = this->rosNode->subscribe(joint_state_so);

    this->jointForcePub = this->rosNode->advertise(joint_force_ao);
}

// Initialize ROS Publish and Process Queue Threads
void PendulumPlugin::InitRosQueueThreads()
{
    this->rosPublishQueueThread = std::thread(
        std::bind(&PendulumPlugin::PublishQueueThread, this)
    );

    this->rosProcessQueueThread = std::thread(
        std::bind(&PendulumPlugin::ProcessQueueThread, this)
    );
}

// Initialize Joint Controllers
void PendulumPlugin::InitJointController()
{
    this->model->GetJointController()->SetVelocityPID(
        this->joint->GetScopedName(),
        common::PID(this->vel_p_gain, this->vel_i_gain, this->vel_d_gain)
    );

    this->model->GetJointController()->SetPositionPID(
        this->joint->GetScopedName(),
        common::PID(this->pos_p_gain, this->pos_i_gain, this->pos_d_gain)
    );
}

// Initialize joint configuration
void PendulumPlugin::InitJointConfiguration()
{
    // Set default position 
    this->model->GetJointController()->SetJointPosition(
        this->joint->GetScopedName(),
        math_utils::degToRad(90)
    );

    // Set controller position reference
    this->model->GetJointController()->SetPositionTarget(
        this->joint->GetScopedName(),
        math_utils::degToRad(90)
    );

}

} // namespace gazebo