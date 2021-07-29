/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   log_utils.cpp                                        */
/*    DATE:   Jun 12, 2021                                         */
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

#include <log_utils/log_utils.h>

// Constructor
LogUtils::LogUtils()
{
    this->InitRos();
    this->InitRosQueueThreads();

    this->genCoord.setZero();
    this->genVel.setZero();
    this->fPos.setZero();


}

// Destructor
LogUtils::~LogUtils()
{
    this->rosNode->shutdown();

    this->rosProcessQueue.clear();
    this->rosProcessQueue.disable();
    this->rosProcessQueueThread.join();

    this->rosPublishQueue.clear();
    this->rosPublishQueue.disable();
    this->rosPublishQueueThread.join();
}

// Write to log
void LogUtils::WriteToLog()
{
    // Update time stamps
    this->jointState.header.stamp = ros::Time::now();
    this->jointStateCmd.header.stamp = ros::Time::now();

    // Publish
    this->jointStatePub.publish(this->jointState);
    this->jointStateCmdPub.publish(this->jointStateCmd);
}

// Callback for ROS Generalized Coordinates messages
void LogUtils::OnGenCoordMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    this->genCoord = Eigen::Map<Eigen::MatrixXd>(data.data(), 18, 1);

    //debug_utils::printGeneralizedCoordinates(this->genCoord);

    if (!this->kinematics.SolveForwardKinematics(genCoord, fPos))
    {
        ROS_ERROR("[LogUtils::OnGenCoordMsg] Could not solve forward kinematics!");
    }

    //debug_utils::printFootstepPositions(this->fPos);

}

// Callback for ROS Generalized Velocities messages
void LogUtils::OnGenVelMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    this->genVel = Eigen::Map<Eigen::MatrixXd>(data.data(), 18, 1); 

}

// Callback for ROS Joint State messages
void LogUtils::OnJointStateMsg(const sensor_msgs::JointStateConstPtr &_msg)
{
    this->jointState.name = _msg->name;
    this->jointState.position = _msg->position;
    this->jointState.velocity = _msg->velocity;
    this->jointState.effort = _msg->effort;
}

// Callback for ROS Joint State Command messages
void LogUtils::OnJointStateCmdMsg(const sensor_msgs::JointStateConstPtr &_msg)
{
    this->jointStateCmd.name = _msg->name;
    this->jointStateCmd.position = _msg->position;
    this->jointStateCmd.velocity = _msg->velocity;
    this->jointStateCmd.effort = _msg->effort;
}

// Setup thread to publish messages
void LogUtils::PublishQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosPublishQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Setup thread to process messages
void LogUtils::ProcessQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Initialize ROS
void LogUtils::InitRos()
{
    if (!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init(
            argc,
            argv,
            "log_utils_node",
            ros::init_options::NoSigintHandler
        );
    }

    this->rosNode.reset(new ros::NodeHandle("log_utils_node"));

    ros::SubscribeOptions gen_coord_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/gen_coord",
            1,
            boost::bind(&LogUtils::OnGenCoordMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions gen_vel_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/gen_vel",
            1,
            boost::bind(&LogUtils::OnGenVelMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions joint_state_so = 
        ros::SubscribeOptions::create<sensor_msgs::JointState>(
            "/my_robot/joint_state",
            1,
            boost::bind(&LogUtils::OnJointStateMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions joint_state_cmd_so = 
        ros::SubscribeOptions::create<sensor_msgs::JointState>(
            "/my_robot/joint_state_cmd",
            1,
            boost::bind(&LogUtils::OnJointStateCmdMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::AdvertiseOptions gen_coord_log_ao =
        ros::AdvertiseOptions::create<std_msgs::Float64MultiArray>(
            "/log/gen_coord",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    ros::AdvertiseOptions gen_vel_log_ao =
        ros::AdvertiseOptions::create<std_msgs::Float64MultiArray>(
            "/log/gen_vel",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    ros::AdvertiseOptions joint_state_log_ao =
        ros::AdvertiseOptions::create<sensor_msgs::JointState>(
            "/log/joint_state",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    ros::AdvertiseOptions joint_state_cmd_log_ao =
        ros::AdvertiseOptions::create<sensor_msgs::JointState>(
            "/log/joint_state_cmd",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    this->genCoordSub = this->rosNode->subscribe(gen_coord_so);

    this->genVelSub = this->rosNode->subscribe(gen_vel_so);

    this->jointStateSub = this->rosNode->subscribe(joint_state_so);

    this->jointStateCmdSub = this->rosNode->subscribe(joint_state_cmd_so);

    this->genCoordLogPub = this->rosNode->advertise(gen_coord_log_ao);

    this->genVelLogPub = this->rosNode->advertise(gen_vel_log_ao);

    this->jointStatePub = this->rosNode->advertise(joint_state_log_ao);

    this->jointStateCmdPub = this->rosNode->advertise(joint_state_cmd_log_ao);

}

// Initialize ROS Publish and Process Queue Threads
void LogUtils::InitRosQueueThreads()
{
    this->rosPublishQueueThread = std::thread(
        std::bind(&LogUtils::PublishQueueThread, this)
    );

    this->rosProcessQueueThread = std::thread(
        std::bind(&LogUtils::ProcessQueueThread, this)
    );
}