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
MotorInterface::MotorInterface() 
{
    this->jointState.position.resize(12);
    this->jointState.velocity.resize(12);
    this->jointState.effort.resize(12);

    this->jointState.position[0] = 0;
    this->jointState.position[1] = 0;
    this->jointState.position[2] = 0;
    this->jointState.position[3] = 0;
    this->jointState.position[4] = 0;
    this->jointState.position[5] = 0;
    this->jointState.position[6] = 0;
    this->jointState.position[7] = 0;
    this->jointState.position[8] = 0;
    this->jointState.position[9] = 0;
    this->jointState.position[10] = 0;
    this->jointState.position[11] = 0;

    this->jointState.velocity[0] = 0;
    this->jointState.velocity[1] = 0;
    this->jointState.velocity[2] = 0;
    this->jointState.velocity[3] = 0;
    this->jointState.velocity[4] = 0;
    this->jointState.velocity[5] = 0;
    this->jointState.velocity[6] = 0;
    this->jointState.velocity[7] = 0;
    this->jointState.velocity[8] = 0;
    this->jointState.velocity[9] = 0;
    this->jointState.velocity[10] = 0;
    this->jointState.velocity[11] = 0;

    this->jointState.effort[0] = 0;
    this->jointState.effort[1] = 0;
    this->jointState.effort[2] = 0;
    this->jointState.effort[3] = 0;
    this->jointState.effort[4] = 0;
    this->jointState.effort[5] = 0;
    this->jointState.effort[6] = 0;
    this->jointState.effort[7] = 0;
    this->jointState.effort[8] = 0;
    this->jointState.effort[9] = 0;
    this->jointState.effort[10] = 0;
    this->jointState.effort[11] = 0;

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

// Callback for ROS Base Pose messages
void MotorInterface::OnMotorStateMsg(const sensor_msgs::JointStateConstPtr &_msg)
{
    std::vector<std::string> motor_category = _msg->name;

    if (!motor_category[0].compare("Front"))
    {
        //ROS_DEBUG_STREAM("Received Front Motor State message. \n Position: \n" << _msg->position << "\n Velocity: \n" << _msg->velocity);

        this->jointState.position[0] = _msg->position[0];
        this->jointState.position[1] = _msg->position[1];
        this->jointState.position[2] = _msg->position[2];
        this->jointState.position[3] = _msg->position[3];
        this->jointState.position[4] = _msg->position[4];
        this->jointState.position[5] = _msg->position[5];

        this->jointState.velocity[0] = _msg->velocity[0];
        this->jointState.velocity[1] = _msg->velocity[1];
        this->jointState.velocity[2] = _msg->velocity[2];
        this->jointState.velocity[3] = _msg->velocity[3];
        this->jointState.velocity[4] = _msg->velocity[4];
        this->jointState.velocity[5] = _msg->velocity[5];

        this->jointState.effort[0] = _msg->effort[0];
        this->jointState.effort[1] = _msg->effort[1];
        this->jointState.effort[2] = _msg->effort[2];
        this->jointState.effort[3] = _msg->effort[3];
        this->jointState.effort[4] = _msg->effort[4];
        this->jointState.effort[5] = _msg->effort[5];

        this->jointState.header.stamp = ros::Time::now();

        this->jointStatePub.publish(this->jointState);
    }
    else if (!motor_category[0].compare("Rear"))
    {
        //ROS_DEBUG_STREAM("Received Rear Motor State message. \n Position: \n" << _msg->position << "\n Velocity: \n" << _msg->velocity);

        this->jointState.position[6] = _msg->position[0];
        this->jointState.position[7] = _msg->position[1];
        this->jointState.position[8] = _msg->position[2];
        this->jointState.position[9] = _msg->position[3];
        this->jointState.position[10] = _msg->position[4];
        this->jointState.position[11] = _msg->position[5];

        this->jointState.velocity[6] = _msg->velocity[0];
        this->jointState.velocity[7] = _msg->velocity[1];
        this->jointState.velocity[8] = _msg->velocity[2];
        this->jointState.velocity[9] = _msg->velocity[3];
        this->jointState.velocity[10] = _msg->velocity[4];
        this->jointState.velocity[11] = _msg->velocity[5];

        this->jointState.effort[6] = _msg->effort[0];
        this->jointState.effort[7] = _msg->effort[1];
        this->jointState.effort[8] = _msg->effort[2];
        this->jointState.effort[9] = _msg->effort[3];
        this->jointState.effort[10] = _msg->effort[4];
        this->jointState.effort[11] = _msg->effort[5];

        this->jointState.header.stamp = ros::Time::now();

        this->jointStatePub.publish(this->jointState);

    }
    else
    {
        ROS_ERROR_STREAM("Motor Category was could not be determined as Front or Rear.");
    }
}

// Setup thread to process messages
void MotorInterface::ProcessQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Setup thread to process messages
void MotorInterface::PublishQueueThread()
{
    ros::Rate loop_rate(10);
    while (this->rosNode->ok())
    {
        loop_rate.sleep();
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

    ros::SubscribeOptions motor_state_so = 
        ros::SubscribeOptions::create<sensor_msgs::JointState>(
            "/my_robot/motor_state",
            1,
            boost::bind(&MotorInterface::OnMotorStateMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::AdvertiseOptions motor_state_cmd_ao =
        ros::AdvertiseOptions::create<sensor_msgs::JointState>(
            "/my_robot/motor_state_cmd",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
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

    this->motorStateSub = this->rosNode->subscribe(motor_state_so);

    this->motorStateCmdPub = this->rosNode->advertise(motor_state_cmd_ao);

    this->jointStatePub = this->rosNode->advertise(joint_state_ao);
}

// Initialize ROS Publish and Process Queue Threads
void MotorInterface::InitRosQueueThreads()
{
    this->rosPublishQueueThread = std::thread(
        std::bind(&MotorInterface::PublishQueueThread, this)
    );

    this->rosProcessQueueThread = std::thread(
        std::bind(&MotorInterface::ProcessQueueThread, this)
    );
}

// Main
int main(int argc, char **argv)
{
    MotorInterface pose_controller;

    ros::spin();

    return 0;
}
