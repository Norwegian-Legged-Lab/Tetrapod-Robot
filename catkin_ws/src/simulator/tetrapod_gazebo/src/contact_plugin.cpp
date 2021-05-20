/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   contact_plugin.cpp                                   */
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

#include <tetrapod_gazebo/contact_plugin.h>

namespace gazebo
{

// Tell Gazebo about this plugin, so that Gazebo can call Load on this plugin.
GZ_REGISTER_SENSOR_PLUGIN(ContactPlugin)

// Constructor
ContactPlugin::ContactPlugin() : SensorPlugin()
{}

// Destructor
ContactPlugin::~ContactPlugin()
{}

// Load plugin
void ContactPlugin::Load(sensors::SensorPtr _sensor, sdf::ElementPtr /*_sdf*/)
{
    // Get the parent sensor.
    this->parentSensor = std::dynamic_pointer_cast<sensors::ContactSensor>(_sensor);

    // Validate parent sensor.
    if (!this->parentSensor)
    {
        gzerr << "ContactPlugin requires a ContactSensor! \n";
        return;
    }

    // Connect to the sensor update event.
    this->updateConnection = this->parentSensor->ConnectUpdated(std::bind(&ContactPlugin::OnUpdate,
                                                                          this)
                                                               );

    // Ensure parent sensor is active.
    this->parentSensor->SetActive(true);
}

// Callback for sensor updates
void ContactPlugin::OnUpdate()
{
    msgs::Contacts contacts;

    contacts = this->parentSensor->Contacts();

    for(unsigned int i = 0; i < contacts.contact_size(); ++i)
    {
        ROS_INFO_STREAM("Collision between [" << contacts.contact(i).collision1()
                        << "] and [" << contacts.contact(i).collision2() << "] \n");
        
        for (unsigned int j = 0; j < contacts.contact(i).position_size(); ++j)
        {
          ROS_INFO_STREAM(j << "  Position:"
                          << contacts.contact(i).position(j).x() << " "
                          << contacts.contact(i).position(j).y() << " "
                          << contacts.contact(i).position(j).z() << "\n");
          ROS_INFO_STREAM("   Normal:"
                          << contacts.contact(i).normal(j).x() << " "
                          << contacts.contact(i).normal(j).y() << " "
                          << contacts.contact(i).normal(j).z() << "\n");
          ROS_INFO_STREAM("   Depth:" 
                          << contacts.contact(i).depth(j) << "\n");
        }
    }
}

} // namespace gazebo