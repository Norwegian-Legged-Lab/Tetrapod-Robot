/*******************************************************************/
/*    AUTHOR: Adrian B. Ghansah                                    */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   motor_control.h                                      */
/*    DATE:   Mar 24, 2021                                         */
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

#ifndef motor_control_h
#define motor_control_h

// Eigen
#include <Eigen30.h>

// FlexCAN_T4 library
#include "FlexCAN_T4.h"

// Message generator
#include "motor_can_message_generator.h"

// Motor parameters and constants
#include "motor_constants.h"

class MotorControl
{
public:

    /// \brief Default constructor needed for initializing array
    MotorControl() {}

    /// \brief Class constructor for a MotorControl class.
    /// Motor ID and CAN port are set
    /// \param[in] _id ID of the motor [1 - 32]
    template <typename T>
    MotorControl(uint8_t _id, int _number_of_inner_motor_rotations, T &_can_port);

    /// \brief Set the desired multiturn motor angle.
    /// \param[in] _angle Setpoint motor angle in radians
    template <typename T>
    void setPositionReference(double _angle, T &_can_port);

    /// \brief Set the desired motor speed.
    /// \param[in] _speed Setpoint motor speed in radians/second
    /// \param[in] _can_port CAN port used for this motor.
    /// Port can be CAN1 or CAN2
    template <typename T>
    void setSpeedReference(double _speed, T &_can_port);

    /// \brief Set the desired motor torque.
    /// \param[in] _torque Setpoint motor torque in Nm
    /// \param[in] _can_port CAN port used for this motor.
    /// Port can be CAN1 or CAN2
    template <typename T>
    void setTorqueReference(double _torque, T &_can_port);

    /// \brief Setting position, speed and torque all results in
    /// the same reply being sent from the motor.
    /// The states are stored in the private variables
    // TODO: find a better suting name for this function
    void readMotorControlCommandReply(unsigned char* _can_message);

    /// \brief Set the motor PID parameters and store them temporary in RAM
    /// \param[in] _PIDParameters Motor PID parameters 
    /// (kp_pos, ki_pos, kp_speed, ki_speed, kp_torque, ki_torque)   
    /// \param[in] _can_port CAN port used for this motor.
    /// Port can be CAN1 or CAN2
    template <typename T>
    bool writePIDParametersToRAM(Eigen::Matrix<double, 6, 1> _PID_parameters, T &_can_port);

    /// \brief Set the motor PID parameters and store the values in memory 
    /// \param[in] _PIDParameters Motor PID parameters 
    /// (kp_pos, ki_pos, kp_speed, ki_speed, kp_torque, ki_torque)   
    /// \param[in] _can_port CAN port used for this motor.
    /// Port can be CAN1 or CAN2
    template <typename T>
    bool writePIDParametersToROM(Eigen::Matrix<double, 6, 1> _PID_parameters, T &_can_port);

    /// \brief Stop the motor without turning it off
    /// \param[in] _can_port CAN port used for this motor.
    /// Port can be CAN1 or CAN2
    /// \return Returns true if the motor was successfully stopped, false if not.
    template <typename T>
    bool stopMotor(T &_can_port);

    /// \brief Turn off the motor
    /// \param[in] _can_port CAN port used for this motor.
    /// Port can be CAN1 or CAN2
    /// \return Returns true if the motor was succesfully turned off, false if not.
    template <typename T>
    bool turnOffMotor(T &_can_port);

    /// \brief Read the motor PID parameters
    /// The private PID parameters are updated
    /// \param[in] _can_port CAN port used for this motor.
    /// Port can be CAN1 or CAN2
    /// \param[out] _PID_parameters PID parameters as 6 dimensional vector
    /// (kp_pos, ki_pos, kp_speed, ki_speed, kp_torque, ki_torque)
    /// \return Returns true if parameters was successfully read, false if not.
    template <typename T>
    bool readPIDParameters(Eigen::Matrix<double, 6, 1> &_PID_parameters, T &_can_port);

    /// \brief Read the current motor position
    /// \param[in] _can_port CAN port used for this motor.
    /// Port can be CAN1 or CAN2
    /// \return Motor position in radians
    template <typename T>
    double readCurrentPosition(T &_can_port);

    double get_position(){return position;}

    double get_velocity(){return speed;}

    double get_torque(){return torque;}
private:
    /// \brief Motor ID set through Serial configurator [1 - 32]
    uint8_t id;

    /// \brief Motor PID Parameters
    /// (kp_pos, ki_pos, kp_speed, ki_speed, kp_torque, ki_torque)
    Eigen::Matrix<double, 6, 1> PID_parameters;

    /// \brief Number of rotations of the inner motor during startup
    /// This is needed to create position commands
    int initial_number_of_inner_motor_rotations;

    /// \brief Number of rotations of the built-in motor, 
    /// not the output-shaft
    double number_of_inner_motor_rotations;

    /// \brief Keep track of previous encoder position.
    /// This way you can detect turns
    uint16_t previous_encoder_value;

    /// \brief Latest measured position of the shaft in radians
    double position;

    /// \brief Latest measured speed of the shaft in radians/second
    double speed;

    /// \brief Latest measured shaft torque in Nm
    double torque;

    /// \brief Latest measured temperature of the motor in degree Celsius
    double temperature;
    
    /// \brief CAN message for this motor.
    /// Only buf field is set for every message sent
    CAN_message_t can_message;

    /// \brief CAN message object used to receive incomming CAN messages
    CAN_message_t received_can_message;

    /// \brief The torque in Newton meter has to lie in the interval
    /// [-max_torque, max_torque]
    double max_torque = 30.0;

    /// \brief All torque values are scaled to the interval 
    /// [-max_torque_current, max_torque_current]
    int max_torque_current = 2000;

    /// \brief The 16 bit encoder measures the position 
    /// of the inner DC motor, not the shaft
    uint16_t max_encoder_value;

    /// \brief If the change in encoder value is larger than this
    /// it is safe to assume that the inner motor completed a turn
    uint16_t encoder_turn_threshold;

    /// \brief This function checks if the inner motor completed a turn.
    /// Depending on the difference between the new and previous encoder value
    /// we can determine if the motor completed a turn a direction or not
    /// \param[in] _previous_encoder_value The previously measured encoder value
    /// \param[in] _new_encoder_value The newly measured encoder value
    /// \return If new << old return 1, if old << new return -1, else return 0
    int innerMotorTurnCompleted(uint16_t _previous_encoder_value, uint16_t _new_encoder_value);
};

void delay_microseconds(double microsecond_delay);

#endif