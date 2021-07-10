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
    /// \brief Read buffer timeout
    private: static constexpr double rx_timeout = 0.00001;

    /// \brief Control mode enumerator
    public: enum ControlMode { position = 1, velocity = 2, torque = 3};

    /// \brief Default Constructor
    public: SerialCommunication();

    /// \brief Custom Constructor, defaults number of motors to 6.
    /// \param[in] _port Serial port name for teensy communication.
    public: SerialCommunication(const std::string &_port);

    /// \brief Custom Constructor
    /// \param[in] _port Serial port name for teensy communication.
    /// \param[in] _num_motors Number of motors in use.
    public: SerialCommunication(const std::string &_port, const int &_num_motors);

    /// \brief Destructor
    public: virtual ~SerialCommunication();

    /// \brief The ReceiveMessage function listens for serial messages
    /// of incoming joint state data from the motors and 
    /// assign corresponding values to a joint state vector 
    /// of vectors. 
    /// \return Returns joint positions, velocities, and torques
    /// in the form of a vector containing the 3 respective vectors.
    public: Eigen::Matrix<Eigen::VectorXd, 3, 1> ReceiveMessage();

    /// \brief The SendMessage function handles the sending
    /// of joint state command messages to the motors.
    /// \param[in] _control_mode Desired motor control mode.
    /// \param[in] _state Desired motor commands. 
    public: void SendMessage(const ControlMode &_control_mode, const std::vector<double> &_state);

    /// \brief The UnpackageBuffer function unpacks the 
    /// read buffer data into joint state data vectors.
    /// \param[in] _data Read buffer data. 
    /// \return Returns joint positions, velocities, and torques
    /// in the form of a vector containing the 3 respective vectors.
    private: Eigen::Matrix<Eigen::VectorXd, 3, 1> UnpackageBuffer(unsigned char *_data);

    /// \brief The PackageBuffer function fills the 
    /// transmit buffer with control mode and control command
    /// data to be transmitted on the serial port.
    /// \param[in] _control_mode Motor control mode.
    /// \param[in] _data Motor command data.
    private: void PackageBuffer(const ControlMode &_control_mode, const double *_data);

    /// \brief The PackageBufferControlMode function fills the 
    /// transmit buffer with control mode data.
    /// \param[in] _data Control mode data.
    private: void PackageBufferControlMode(const double *_data);

    /// \brief The PackageBufferControlCommand function fills the 
    /// transmit buffer with control command data.
    /// \param[in] _data Control command data.
    private: void PackageBufferControlCommand(const double *_data);

    /// \brief The IsNewDataAvailable function checks if there
    /// is available data on the serial port.
    /// \return Returns true if data is available, false if not. 
    public: bool IsNewDataAvailable();

    /// \brief Set the port for the Teensy communication after creating the constructor
    /// \param[in] _port Serial port name for the Teensy communication
    public: void SetPort(const std::string &_port);

    /// \brief Set the number of motors for the port after creating the constructor
    /// \param[in] _number_of_motors Number of motors to use
    public: void SetNumberOfMotors(const int &_number_of_motors);

    public: void InitLibSerial();

    /// \brief Number of motors
    private: int num_motors;

    /// \brief Serial Port
    private: std::string port;

    /// \brief LibSerial object instance
    private: LibSerial::SerialPort serial_port;

    /// \brief Serial transmit buffer size
    private: int TX_BUFFER_SIZE;

    /// \brief Serial read buffer size
    private: int RX_BUFFER_SIZE;

    /// \brief Serial transmit buffer
    private: std::vector<unsigned char> tx_buffer;

    /// \brief Serial read buffer
    private: std::vector<unsigned char> rx_buffer;

};