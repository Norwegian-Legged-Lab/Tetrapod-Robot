/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth & Adrian B. Ghansah          */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   serial_communication.h                               */
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

#pragma once

// ROS
#include "ros/ros.h" 

// Eigen
#include <Eigen/Core>

// LibSerial libraries
#include <libserial/SerialPort.h>
#include <libserial/SerialStream.h>

/// \brief A class for serial communication 
class SerialCommunication
{
    /// \brief Control mode enumerator
    public: enum ControlMode { position = 1, velocity = 2, torque = 3 };

    /// \brief Default Constructor
    public: SerialCommunication();

    /// \brief Custom Constructor
    /// \param[in] _port Serial port name for teensy communication.
    /// \param[in] _num_motors Number of motors in use.
    public: SerialCommunication(const std::string &_port, const int &_num_motors);

    /// \brief Destructor
    public: virtual ~SerialCommunication();

    /// \brief Set the port for the Teensy communication after creating the constructor
    /// \param[in] _port Serial port name for the Teensy communication
    public: void SetPort(const std::string &_port);

    /// \brief Set the number of motors for the port after creating the constructor
    /// \param[in] _number_of_motors Number of motors to use
    public: void SetNumberOfMotors(const int &_number_of_motors);

    public: void SendMessage(const ControlMode &_control_mode, const std::vector<double> &_state);

    public: Eigen::Matrix<Eigen::VectorXd, 3, 1> ReceiveMessage();

    public: void InitLibSerial();

    public: bool IsNewDataAvailable();

    private: void PackageBuffer(const ControlMode &_control_mode, const double *_data);

    private: void PackageBufferControlMode(const double *_data);

    private: void PackageBufferControlCommand(const double *_data);

    private: Eigen::Matrix<Eigen::VectorXd, 3, 1> UnpackageBuffer(unsigned char *_data);

    private: void EigenToCArray(const Eigen::VectorXd &_state, double *_data);

    private: LibSerial::SerialPort serial_port;

    private: int TX_BUFFER_SIZE;

    private: int RX_BUFFER_SIZE;

    private: std::vector<unsigned char> tx_buffer;

    private: std::vector<unsigned char> rx_buffer;

    private: int rx_timeout_ms = 2;

    private: std::string port;

    private: int num_motors;
};