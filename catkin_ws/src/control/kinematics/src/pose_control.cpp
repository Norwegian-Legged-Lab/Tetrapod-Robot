/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   pose_control.cpp                                     */
/*    DATE:   Apr 6, 2021                                          */
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

#include <kinematics/pose_control.h>

// Constructor
PoseControl::PoseControl()
{
    this->InitRos();
    this->InitRosQueueThreads();
}

// Destructor
PoseControl::~PoseControl()
{
    this->rosNode->shutdown();

    this->rosProcessQueue.clear();
    this->rosProcessQueue.disable();
    this->rosProcessQueueThread.join();

    this->rosPublishQueue.clear();
    this->rosPublishQueue.disable();
    this->rosPublishQueueThread.join();
}

// Set Pose
void PoseControl::SetBasePose(const Eigen::Matrix<double, 6, 1> &_q_b)
{
    Eigen::Matrix<double, 12, 1> q_r;

    if(!this->kinematics.SolveInverseKinematics(_q_b, this->fPos, q_r))
    {
        ROS_ERROR_STREAM("Could not solve inverse kinematics for pose control."); 
        debug_utils::printBaseState(_q_b);
        debug_utils::printFootstepPositions(fPos);
        debug_utils::printJointState(q_r);
    }
    else
    {
        std_msgs::Float64MultiArray pos_msg;

        tf::matrixEigenToMsg(q_r, pos_msg);

        sensor_msgs::JointState joint_state_msg;

        joint_state_msg.position = pos_msg.data;

        this->jointStatePub.publish(joint_state_msg);
    }
}


// Set Position
void PoseControl::SetBasePosition(const Eigen::Matrix<double, 3, 1> &_base_position)
{
    Eigen::Matrix<double, 12, 1> q_r;

    Eigen::Matrix<double, 6, 1> q_b = this->genCoord.block(0,0,5,0);

    q_b.block(0,0,2,0) << _base_position;

    if(!this->kinematics.SolveInverseKinematics(q_b, this->fPos, q_r))
    {
        ROS_ERROR_STREAM("Could not solve inverse kinematics for pose control."); 
        debug_utils::printBaseState(q_b);
        debug_utils::printFootstepPositions(fPos);
        debug_utils::printJointState(q_r);
    }
    else
    {
        std_msgs::Float64MultiArray pos_msg;

        tf::matrixEigenToMsg(q_r, pos_msg);

        sensor_msgs::JointState joint_state_msg;

        joint_state_msg.position = pos_msg.data;

        this->jointStatePub.publish(joint_state_msg);
    }
}

// Set Orientation
void PoseControl::SetBaseOrientation(const Eigen::Matrix<double, 3, 1> &_base_orientation)
{
    Eigen::Matrix<double, 12, 1> q_r;

    Eigen::Matrix<double, 6, 1> q_b = this->genCoord.block(0,0,5,0);

    q_b.block(3,0,5,0) << _base_orientation;

    if(!this->kinematics.SolveInverseKinematics(q_b, this->fPos, q_r))
    {
        ROS_ERROR_STREAM("Could not solve inverse kinematics for pose control."); 
        debug_utils::printBaseState(q_b);
        debug_utils::printFootstepPositions(fPos);
        debug_utils::printJointState(q_r);
    }
    else
    {
        std_msgs::Float64MultiArray pos_msg;

        tf::matrixEigenToMsg(q_r, pos_msg);

        sensor_msgs::JointState joint_state_msg;

        joint_state_msg.position = pos_msg.data;

        this->jointStatePub.publish(joint_state_msg);
    }
}

// Set Height
void PoseControl::SetBaseHeight(const double &_base_height)
{
    Eigen::Matrix<double, 12, 1> q_r;

    Eigen::Matrix<double, 6, 1> q_b = this->genCoord.block(0,0,5,0);

    q_b(2) = _base_height;

    if(!this->kinematics.SolveInverseKinematics(q_b, this->fPos, q_r))
    {
        ROS_ERROR_STREAM("Could not solve inverse kinematics for pose control."); 
        debug_utils::printBaseState(q_b);
        debug_utils::printFootstepPositions(fPos);
        debug_utils::printJointState(q_r);
    }
    else
    {
        std_msgs::Float64MultiArray pos_msg;

        tf::matrixEigenToMsg(q_r, pos_msg);

        sensor_msgs::JointState joint_state_msg;

        joint_state_msg.position = pos_msg.data;

        this->jointStatePub.publish(joint_state_msg);
    }
}

// Callback for ROS Generalized Coordinates messages
void PoseControl::OnGenCoordMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    this->genCoord = Eigen::Map<Eigen::MatrixXd>(data.data(), 18, 1); 

    if (!this->kinematics.SolveForwardKinematics(genCoord, fPos))
    {
        ROS_ERROR("Could not solve forward kinematics for pose control.");
    }

   //ROS_INFO_STREAM("fPos(0): \n" << this->fPos(0));
   //ROS_INFO_STREAM("fPos(1): \n" << this->fPos(1));
   //ROS_INFO_STREAM("fPos(2): \n" << this->fPos(2));
   //ROS_INFO_STREAM("fPos(3): \n" << this->fPos(3));
}

// Callback for ROS Base Pose messages
void PoseControl::OnBasePoseMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    Eigen::Matrix<double, 6, 1> q_b = Eigen::Map<Eigen::MatrixXd>(data.data(), 6, 1);

    this->SetBasePose(q_b);
}

// Callback for ROS Base Position messages
void PoseControl::OnBasePositionMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    Eigen::Matrix<double, 6, 1> q_b = this->genCoord.block(0,0,5,0);

    q_b.block(0,0,2,0) << Eigen::Map<Eigen::MatrixXd>(data.data(), 3, 1);

    this->SetBasePose(q_b);
}

// Callback for ROS Base Position messages
void PoseControl::OnBaseHeightMsg(const std_msgs::Float64ConstPtr &_msg)
{
    double data = _msg->data;

    Eigen::Matrix<double, 6, 1> q_b = this->genCoord.block(0,0,5,0);

    q_b(2) = data;

    this->SetBasePose(q_b);
}

// Callback for ROS Base Orientation messages
void PoseControl::OnBaseOrientationMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    Eigen::Matrix<double, 6, 1> q_b = this->genCoord.block(0,0,5,0); 

    q_b.block(3,0,5,0) << Eigen::Map<Eigen::MatrixXd>(data.data(), 3, 1);

    this->SetBasePose(q_b);
}

// Setup thread to process messages
void PoseControl::ProcessQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Setup thread to process messages
void PoseControl::PublishQueueThread()
{
    ros::Rate loop_rate(10);
    while (this->rosNode->ok())
    {
        loop_rate.sleep();
    }
}

// Initialize ROS
void PoseControl::InitRos()
{
    if (!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init(
            argc,
            argv,
            "pose_control_node",
            ros::init_options::NoSigintHandler
        );
    }

    this->rosNode.reset(new ros::NodeHandle("pose_control_node"));

    ros::AdvertiseOptions joint_state_ao =
        ros::AdvertiseOptions::create<sensor_msgs::JointState>(
            "/my_robot/joint_state_cmd",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    ros::SubscribeOptions gen_coord_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/gen_coord",
            1,
            boost::bind(&PoseControl::OnGenCoordMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions base_pose_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/base_pose_cmd",
            1,
            boost::bind(&PoseControl::OnBasePoseMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions base_position_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/base_position_cmd",
            1,
            boost::bind(&PoseControl::OnBasePositionMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions base_height_so = 
        ros::SubscribeOptions::create<std_msgs::Float64>(
            "/my_robot/base_height_cmd",
            1,
            boost::bind(&PoseControl::OnBaseHeightMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions base_orientation_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/base_orientation_cmd",
            1,
            boost::bind(&PoseControl::OnBaseOrientationMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    this->genCoordSub = this->rosNode->subscribe(gen_coord_so);

    this->basePoseSub = this->rosNode->subscribe(base_pose_so);

    this->basePositionSub = this->rosNode->subscribe(base_position_so);

    this->baseHeightSub = this->rosNode->subscribe(base_height_so);

    this->baseOrientationSub = this->rosNode->subscribe(base_orientation_so);

    this->jointStatePub = this->rosNode->advertise(joint_state_ao);
}

// Initialize ROS Publish and Process Queue Threads
void PoseControl::InitRosQueueThreads()
{
    this->rosPublishQueueThread = std::thread(
        std::bind(&PoseControl::PublishQueueThread, this)
    );

    this->rosProcessQueueThread = std::thread(
        std::bind(&PoseControl::ProcessQueueThread, this)
    );
}

// Main
int main(int argc, char **argv)
{
    PoseControl pose_controller;

    ros::spin();

    return 0;
}