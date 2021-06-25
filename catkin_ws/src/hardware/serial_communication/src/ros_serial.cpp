/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   ros_serial.cpp                                       */
/*    DATE:   Jun 25, 2021                                         */
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

#include <serial_communication/ros_serial.h>

RosSerial::RosSerial()
{
	this->InitRos();
	this->InitRosQueueThreads();
}

RosSerial::~RosSerial()
{
	this->rosNode->shutdown();

    this->rosProcessQueue.clear();
    this->rosProcessQueue.disable();
    this->rosProcessQueueThread.join();

    this->rosPublishQueue.clear();
    this->rosPublishQueue.disable();
    this->rosPublishQueueThread.join();
}

// Publish function for ROS Joint State Torque messages
void RosSerial::PublishJointStateMsg()
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
}

// Callback for ROS Contact State messages
void RosSerial::OnJointStateCmdMsg(const sensor_msgs::JointStateConstPtr &_msg);
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

	ROS_ERROR("[RosSerial::OnJointStateCmdMsg] Message failed to match specifications!");
}

// Setup thread to process messages
void RosSerial::ProcessQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Setup thread to publish messages
void RosSerial::PublishQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosPublishQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Initialize ROS
void RosSerial::InitRos()
{
    if (!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init(
            argc,
            argv,
            "hierarchical_optimization_control_node",
            ros::init_options::NoSigintHandler
        );
    }

    this->rosNode.reset(new ros::NodeHandle("hierarchical_optimization_control_node"));

    ros::SubscribeOptions gen_coord_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/gen_coord",
            1,
            boost::bind(&RosSerial::OnGenCoordMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions gen_vel_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/gen_vel",
            1,
            boost::bind(&RosSerial::OnGenVelMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions contact_state_so = 
        ros::SubscribeOptions::create<std_msgs::Int8MultiArray>(
            "/my_robot/contact_state",
            1,
            boost::bind(&RosSerial::OnContactStateMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::AdvertiseOptions joint_state_ao =
        ros::AdvertiseOptions::create<sensor_msgs::JointState>(
            "/my_robot/joint_state_cmd",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    this->genCoordSub = this->rosNode->subscribe(gen_coord_so);

    this->genVelSub = this->rosNode->subscribe(gen_vel_so);

    this->contactStateSub = this->rosNode->subscribe(contact_state_so);

    this->jointStatePub = this->rosNode->advertise(joint_state_ao);
}

// Initialize ROS Publish and Process Queue Threads
void RosSerial::InitRosQueueThreads()
{
    this->rosPublishQueueThread = std::thread(
        std::bind(&RosSerial::PublishQueueThread, this)
    );

    this->rosProcessQueueThread = std::thread(
        std::bind(&RosSerial::ProcessQueueThread, this)
    );
}