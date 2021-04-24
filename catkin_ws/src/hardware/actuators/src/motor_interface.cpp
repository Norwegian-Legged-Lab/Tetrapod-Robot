/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   pose_control.cpp                                     */
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
    std::string motor_category = _msg->name(0);

    std::vector<double> pos_data = _msg->position;

    std::vector<double> vel_data = _msg->velocity;

    if (!std::strcmp(motor_category, "Front"))
    {
        //ROS_DEBUG_STREAM("Received Front Motor State message. \n Position: \n" << pos_data << "\n Velocity: \n" << vel_data);

        jointState.block<6,1>(0,0) << Eigen::Map<Eigen::MatrixXd>(pos_data.data(), 6, 1);

        std_msgs::Float64MultiArray pos_msg;

        tf::matrixEigenToMsg(jointState, pos_msg);

        sensor_msgs::JointState joint_state_msg;

        joint_state_msg.position = pos_msg.data;

        this->jointStatePub.publish(joint_state_msg);
    }
    else if (!std::strcmp(motor_category, "Rear"))
    {
        //ROS_DEBUG_STREAM("Received Rear Motor State message. \n Position: \n" << pos_data << "\n Velocity: \n" << vel_data);

        jointState.block<6,1>(6,0) << Eigen::Map<Eigen::MatrixXd>(pos_data.data(), 6, 1);

        std_msgs::Float64MultiArray pos_msg;

        tf::matrixEigenToMsg(jointState, pos_msg);

        sensor_msgs::JointState joint_state_msg;

        joint_state_msg.position = pos_msg.data;

        this->jointStatePub.publish(joint_state_msg);
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
