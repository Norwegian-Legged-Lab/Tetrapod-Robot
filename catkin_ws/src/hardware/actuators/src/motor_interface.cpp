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
    NUM_MOTORS { 12 },
    serialInterface1("/dev/ttyACM0"),
    serialInterface2("/dev/ttyACM1")
{

    this->num_motors_port_1 = MAX_NUM_MOTORS_PER_PORT;

    this->num_motors_port_2 = MAX_NUM_MOTORS_PER_PORT;

    this->InitRos();
    this->InitRosQueueThreads();
}

MotorInterface::MotorInterface(const int &_num_motors) :
    NUM_MOTORS { _num_motors }
{
    // Check whether we should use one or two parts
    if(_num_motors <= this->MAX_NUM_MOTORS_PER_PORT)
    {
        this->num_motors_port_1 = _num_motors;

        this->serialInterface1.SetPort("/dev/ttyACM0");

        this->serialInterface1.SetNumberOfMotors(_num_motors);

        this->serialInterface1.InitLibSerial();
    }
    else
    {
        num_motors_port_1 = MAX_NUM_MOTORS_PER_PORT;
        
        num_motors_port_2 = _num_motors - num_motors_port_1;

        this->serialInterface1.SetPort("/dev/ttyACM0");

        this->serialInterface1.SetNumberOfMotors(num_motors_port_1);

        this->serialInterface2.SetPort("/dev/ttyACM1");

        this->serialInterface2.SetNumberOfMotors(num_motors_port_2);

        this->serialInterface1.InitLibSerial();

        this->serialInterface2.InitLibSerial();
    }

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

void MotorInterface::SetJointPositions(const std::vector<double> &_pos)
{
    if (this->NUM_MOTORS <= MAX_NUM_MOTORS_PER_PORT)
    {
        this->serialInterface1.SendMessage(SerialCommunication::ControlMode::position, _pos);
    }
    else
    {
        std::vector<double> commands_port_1(_pos.begin(), _pos.begin() + this->num_motors_port_1);
        std::vector<double> commands_port_2(_pos.begin() + this->num_motors_port_1, _pos.end());

        serialInterface1.SendMessage(SerialCommunication::ControlMode::position, commands_port_1);
        serialInterface2.SendMessage(SerialCommunication::ControlMode::position, commands_port_2);
    }
}

void MotorInterface::SetJointVelocities(const std::vector<double> &_vel)
{
    if (this->NUM_MOTORS <= MAX_NUM_MOTORS_PER_PORT)
    {
        this->serialInterface1.SendMessage(SerialCommunication::ControlMode::velocity, _vel);
    }
    else
    {
        std::vector<double> commands_port_1(_vel.begin(), _vel.begin() + this->num_motors_port_1);
        std::vector<double> commands_port_2(_vel.begin() + this->num_motors_port_1, _vel.end());

        serialInterface1.SendMessage(SerialCommunication::ControlMode::velocity, commands_port_1);
        serialInterface2.SendMessage(SerialCommunication::ControlMode::velocity, commands_port_2);
    }
}

void MotorInterface::SetJointTorques(const std::vector<double> &_torque)
{
    if (this->NUM_MOTORS <= MAX_NUM_MOTORS_PER_PORT)
    {
        this->serialInterface1.SendMessage(SerialCommunication::ControlMode::torque, _torque);
    }
    else
    {
        std::vector<double> commands_port_1(_torque.begin(), _torque.begin() + this->num_motors_port_1);
        std::vector<double> commands_port_2(_torque.begin() + this->num_motors_port_1, _torque.end());

        serialInterface1.SendMessage(SerialCommunication::ControlMode::torque, commands_port_1);
        serialInterface2.SendMessage(SerialCommunication::ControlMode::torque, commands_port_2);
    }
}

void MotorInterface::ProcessSerialMessages()
{
    if (this->NUM_MOTORS <= MAX_NUM_MOTORS_PER_PORT)
    {
        if(serialInterface1.IsNewDataAvailable())
        {
            Eigen::Matrix<Eigen::VectorXd, 3, 1> joint_states = serialInterface1.ReceiveMessage();

            for (int i = 0; i < num_motors_port_1; i++)
            {
                jointStateMsg.position[i] = joint_states(0)(i);
                jointStateMsg.velocity[i] = joint_states(1)(i);
                jointStateMsg.effort[i] = joint_states(2)(i);
            } 

        }
    }
    else
    {
        if(serialInterface1.IsNewDataAvailable())
        {
            Eigen::Matrix<Eigen::VectorXd, 3, 1> joint_states = serialInterface1.ReceiveMessage();

            for (int i = 0; i < num_motors_port_1; i++)
            {
                jointStateMsg.position[i] = joint_states(0)(i);
                jointStateMsg.velocity[i] = joint_states(1)(i);
                jointStateMsg.effort[i] = joint_states(2)(i);
            } 

        }

        if(serialInterface2.IsNewDataAvailable())
        {
            Eigen::Matrix<Eigen::VectorXd, 3, 1> joint_states = serialInterface2.ReceiveMessage();

            for(int i = 0; i < num_motors_port_2; i++)
            {
                jointStateMsg.position[num_motors_port_1 + i] = joint_states(0)(i);
                jointStateMsg.velocity[num_motors_port_1 + i] = joint_states(1)(i);
                jointStateMsg.effort[num_motors_port_1 + i] = joint_states(2)(i);
            }
        }
    }

}

// Callback for ROS Contact State messages
void MotorInterface::OnJointStateCmdMsg(const sensor_msgs::JointStateConstPtr &_msg)
{
    if ((!_msg->position.empty()) && (_msg->position.size() == this->NUM_MOTORS))
    {
        this->SetJointPositions(_msg->position);
    } 

    else if ((!_msg->velocity.empty()) && (_msg->velocity.size() == this->NUM_MOTORS))
    {
        this->SetJointVelocities(_msg->velocity);
    }

    else if ((!_msg->effort.empty()) && (_msg->effort.size() == this->NUM_MOTORS))
    {
        this->SetJointTorques(_msg->effort);
    }
    else
	{
        ROS_ERROR("[MotorInterface::OnJointStateCmdMsg] Message failed to match specifications!");
    }
}

// Setup thread to process messages
void MotorInterface::SerialProcessQueueThread()
{
    ros::Rate loop_rate(10000);

    while (this->rosNode->ok())
    {
        this->ProcessSerialMessages();

        loop_rate.sleep();
    }
}

// Setup thread to process messages
void MotorInterface::RosProcessQueueThread()
{
    static const double timeout = 0.0001;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Setup thread to publish messages
void MotorInterface::RosPublishQueueThread()
{
    static const double timeout = 0.0001;
    while (this->rosNode->ok())
    {
        this->jointStateMsg.header.stamp = ros::Time::now();

        this->jointStatePub.publish(this->jointStateMsg);

        this->rosPublishQueue.callAvailable(ros::WallDuration(timeout));
    }
}

bool MotorInterface::Shutdown(const std_srvs::Empty::Request &_req,
                              std_srvs::Empty::Response &_res)
{
    this->rosNode->shutdown();

    return true;
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

    ros::AdvertiseServiceOptions shutdown_aso =
        ros::AdvertiseServiceOptions::create<std_srvs::Empty>(
            "/my_robot/motor_interface/shutdown",
            boost::bind(&MotorInterface::Shutdown, this, _1, _2),
            ros::VoidPtr(),
            &this->rosProcessQueue
        );
    
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

    this->shutdownService = this->rosNode->advertiseService(shutdown_aso);

    this->jointStateCmdSub = this->rosNode->subscribe(joint_state_cmd_so);

    this->jointStatePub = this->rosNode->advertise(joint_state_ao);

    this->jointStateMsg.position.resize(this->NUM_MOTORS);
    this->jointStateMsg.velocity.resize(this->NUM_MOTORS);
    this->jointStateMsg.effort.resize(this->NUM_MOTORS);
}

// Initialize ROS Publish and Process Queue Threads
void MotorInterface::InitRosQueueThreads()
{
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
