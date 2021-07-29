/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   contact_plugin.h                                     */
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

#pragma once

// Gazebo
#include <gazebo/gazebo.hh>
#include <gazebo/sensors/sensors.hh>

// ROS
#include "ros/ros.h"

namespace gazebo
{
    /// \brief A plugin for the contact sensors
    class ContactPlugin : public SensorPlugin
    {
        /// \brief Constructor
        public: ContactPlugin();

        /// \brief Destructor
        public: virtual ~ContactPlugin();

        /// \brief Load the sensor plugin.
        /// \param[in] _sensor Pointer to the sensor that loaded this plugin.
        /// \param[in] _sdf SDF element that describes the plugin.
        public: virtual void Load(sensors::SensorPtr _sensor, sdf::ElementPtr _sdf);

        /// \brief Callback that receives the contact sensor's update signal.
        private: virtual void OnUpdate();

        /// \brief Pointer to the contact sensor
        private: sensors::ContactSensorPtr parentSensor;

        /// \brief Connection that maintains a link between the contact sensor's
        /// updated signal and the OnUpdate callback.
        private: event::ConnectionPtr updateConnection;

    };
} // namespace gazebo