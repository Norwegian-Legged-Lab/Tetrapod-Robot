/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   contact_sensor.cpp                                   */
/*    DATE:   May 19, 2021                                         */
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

#include <tetrapod_gazebo/contact_sensor.h>

// Constructor
ContactSensor::ContactSensor() 
{
    this->InitGazebo();

    this->InitRos();
    this->InitRosQueueThreads();

    this->footContacts[0] = 1;
    this->footContacts[1] = 1;
    this->footContacts[2] = 1;
    this->footContacts[3] = 1;
}

// Destructor
ContactSensor::~ContactSensor()
{
    gazebo::client::shutdown();

    this->rosNode->shutdown();

    this->rosPublishQueue.clear();
    this->rosPublishQueue.disable();
    this->rosPublishQueueThread.join();
}

// Front left contact sensor callback
void ContactSensor::OnFlContactCallback(const ConstContactsPtr &_msg)
{
    if (_msg->contact_size() > 0)
    {
        this->footContacts[0] = 1;
    }
    else 
    {
        this->footContacts[0] = 0;
    }
}

// Front right contact sensor callback
void ContactSensor::OnFrContactCallback(const ConstContactsPtr &_msg)
{
    if (_msg->contact_size() > 0)
    {
        this->footContacts[1] = 1;
    }
    else 
    {
        this->footContacts[1] = 0;
    }
}

// Rear left contact sensor callback
void ContactSensor::OnRlContactCallback(const ConstContactsPtr &_msg)
{
    if (_msg->contact_size() > 0)
    {
        this->footContacts[2] = 1;
    }
    else 
    {
        this->footContacts[2] = 0;
    }
}

// Rear rear contact sensor callback
void ContactSensor::OnRrContactCallback(const ConstContactsPtr &_msg)
{
    if (_msg->contact_size() > 0)
    {
        this->footContacts[3] = 1;
    }
    else 
    {
        this->footContacts[3] = 0;
    }
}

// Setup thread to publish messages
void ContactSensor::PublishQueueThread()
{
    ros::Rate publish_rate(200);
    while (this->rosNode->ok())
    {
        std_msgs::Int8MultiArray contacts_msg; 

        contacts_msg.data.resize(4);

        for (size_t i = 0; i < 4; i++)
        {
            contacts_msg.data[i] = this->footContacts[i];
        }

        this->contactStatePub.publish(contacts_msg);

        publish_rate.sleep();
    }
}

// Initialize ROS
void ContactSensor::InitGazebo()
{
    gazebo::client::setup();
    
    this->gazeboNode.reset(new gazebo::transport::Node());

    this->gazeboNode->Init();

    this->flContactSensorSub = this->gazeboNode->Subscribe("~/my_robot/tetrapod/front_left_foot/front_left_contact_sensor/contacts",
                                                           &ContactSensor::OnFlContactCallback,
                                                           this);

    this->frContactSensorSub = this->gazeboNode->Subscribe("~/my_robot/tetrapod/front_right_foot/front_right_contact_sensor/contacts",
                                                           &ContactSensor::OnFrContactCallback,
                                                           this);

    this->rlContactSensorSub = this->gazeboNode->Subscribe("~/my_robot/tetrapod/rear_left_foot/rear_left_contact_sensor/contacts",
                                                           &ContactSensor::OnRlContactCallback,
                                                           this);

    this->rrContactSensorSub = this->gazeboNode->Subscribe("~/my_robot/tetrapod/rear_right_foot/rear_right_contact_sensor/contacts",
                                                           &ContactSensor::OnRrContactCallback,
                                                           this);
}

// Initialize ROS
void ContactSensor::InitRos()
{
    if (!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init(
            argc,
            argv,
            "contact_sensor_node",
            ros::init_options::NoSigintHandler
        );
    }

    this->rosNode.reset(new ros::NodeHandle("contact_sensor_node"));

    ros::AdvertiseOptions contact_state_ao =
        ros::AdvertiseOptions::create<std_msgs::Int8MultiArray>(
            "/my_robot/contact_state",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    this->contactStatePub = this->rosNode->advertise(contact_state_ao);
}

// Initialize ROS Publish and Process Queue Threads
void ContactSensor::InitRosQueueThreads()
{
    this->rosPublishQueueThread = std::thread(
        std::bind(&ContactSensor::PublishQueueThread, this)
    );
}

// Main
int main(int _argc, char **_argv)
{
    ContactSensor cs;

    ros::spin();

    return 0;
}