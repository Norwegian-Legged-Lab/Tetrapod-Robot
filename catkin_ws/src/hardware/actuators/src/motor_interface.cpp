/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   motor_interface.cpp                                  */
/*    DATE:   Apr 23, 2021                                         */
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

#include <actuators/motor_interface.h>

// Constructor
MotorInterface::MotorInterface() :
    NUM_MOTORS { 12 }
{
    this->InitRos();
    this->InitRosQueueThreads();
}

MotorInterface::MotorInterface(const int &_num_motors) :
    NUM_MOTORS { _num_motors }
{
    this->InitRos();
    this->InitRosQueueThreads();
}

// Destructor 
MotorInterface::~MotorInterface() 
{
    this->rosNode->shutdown();

    this->rosProcessQueue.clear();
    this->rosProcessQueue.disable();
    this->rosProcessQueueThread.join();

    this->rosPublishQueue.clear();
    this->rosPublishQueue.disable();
    this->rosPublishQueueThread.join();
}

void MotorInterface::SetJointForces(const std::vector<double> &_forces)
{
    if (this->NUM_MOTORS <= 6)
    {
        this->teensy_A.SendMessage(3, _forces);
    }
    else
    {
        this->teensy_A.SendMessage(3, _forces);
        this->teensy_B.SendMessage(3, _forces);
    }
}

// Publish function for ROS Joint State Torque messages
void MotorInterface::PublishJointStateMsg()
{
    // Declare msg
    sensor_msgs::JointState joint_state_msg;    

    // Set dimension
    joint_state_msg.effort.resize(12);

    // Front-left 
    //joint_state_msg.effort[0] = _desired_tau(0);
    //joint_state_msg.effort[1] = _desired_tau(1);
    //joint_state_msg.effort[2] = _desired_tau(2);

    //// Front right
    //joint_state_msg.effort[3] = _desired_tau(3);
    //joint_state_msg.effort[4] = _desired_tau(4);
    //joint_state_msg.effort[5] = _desired_tau(5);

    //// Rear left
    //joint_state_msg.effort[6] = _desired_tau(6);
    //joint_state_msg.effort[7] = _desired_tau(7);
    //joint_state_msg.effort[8] = _desired_tau(8);

    //// Rear right
    //joint_state_msg.effort[9] = _desired_tau(9);
    //joint_state_msg.effort[10] = _desired_tau(10);
    //joint_state_msg.effort[11] = _desired_tau(11);

    // Set timestamp
    joint_state_msg.header.stamp = ros::Time::now();

    // Publish
    this->jointStatePub.publish(joint_state_msg);
}

// Callback for ROS Contact State messages
void MotorInterface::OnJointStateCmdMsg(const sensor_msgs::JointStateConstPtr &_msg)
{
    if ((!_msg->position.empty()) && (_msg->position.size() == this->NUM_MOTORS))
    {
        this->SetJointPositions(_msg->position);
    }

    if ((!_msg->velocity.empty()) && (_msg->velocity.size() == this->NUM_MOTORS))
    {
        this->SetJointVelocities(_msg->velocity);
    }

    if ((!_msg->effort.empty()) && (_msg->effort.size() == this->NUM_MOTORS))
    {
        this->SetJointForces(_msg->effort);
    }

	ROS_ERROR("[MotorInterface::OnJointStateCmdMsg] Message failed to match specifications!");
}

// Setup thread to process messages
void MotorInterface::SerialProcessQueueThread()
{
    ros::Rate loop_rate(1000);

    while (this->rosNode->ok())
    {

        loop_rate.sleep();
    }
}

// Setup thread to publish messages
void MotorInterface::SerialPublishQueueThread()
{
    ros::Rate loop_rate(1000);

    while (this->rosNode->ok())
    {

        loop_rate.sleep();
    }
}

// Setup thread to process messages
void MotorInterface::RosProcessQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Setup thread to publish messages
void MotorInterface::RosPublishQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosPublishQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Initialize ROS
void MotorInterface::InitRos()
{
    if (!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init(
            argc,
            argv,
            "motor_interface_node",
            ros::init_options::NoSigintHandler
        );
    }

    this->rosNode.reset(new ros::NodeHandle("motor_interface_node"));

    ros::SubscribeOptions joint_state_cmd_so = 
        ros::SubscribeOptions::create<sensor_msgs::JointState>(
            "/my_robot/joint_state_cmd",
            1,
            boost::bind(&MotorInterface::OnJointStateCmdMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );


    ros::AdvertiseOptions joint_state_ao =
        ros::AdvertiseOptions::create<sensor_msgs::JointState>(
            "/my_robot/joint_state",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    this->jointStateCmdSub = this->rosNode->subscribe(joint_state_cmd_so);

    this->jointStatePub = this->rosNode->advertise(joint_state_ao);
}

// Initialize ROS Publish and Process Queue Threads
void MotorInterface::InitRosQueueThreads()
{
    this->serialPublishQueueThread = std::thread(
        std::bind(&MotorInterface::SerialPublishQueueThread, this)
    );

    this->serialProcessQueueThread = std::thread(
        std::bind(&MotorInterface::SerialProcessQueueThread, this)
    );

    this->rosPublishQueueThread = std::thread(
        std::bind(&MotorInterface::RosPublishQueueThread, this)
    );

    this->rosProcessQueueThread = std::thread(
        std::bind(&MotorInterface::RosProcessQueueThread, this)
    );
}
