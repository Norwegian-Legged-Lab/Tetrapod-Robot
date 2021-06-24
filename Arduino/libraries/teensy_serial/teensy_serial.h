#ifndef teensy_serial_h
#define teensy_serial_h

#include "Arduino.h"

class TeensySerial
{
    // Constructor
    public: TeensySerial(int _number_of_motors);

    // Destructor
    public: ~TeensySerial();

    /// \brief Checks if there is any available data on the serial port
    /// \return If there is data available on the serial line true is returned, otherwise false
    public: bool areControlCommandsAvailable();

    /// \brief Reads control command data available on the serial command and stores it
    /// \param[out] _control_command_type A variable indicating whether 
    /// position, velocity, or torque control should be used
    /// \param[out] _control_commands An array of control command values
    public: void receiveControlCommands(double &_control_command_type, double* _control_commands);

    /// \brief Sends the joint states to the serial line
    /// \param[out] _joint_positions An array of measured joint positions from the motor
    /// \param[out] _joint_velocities An array of measured joint velocities from the motor
    /// \param[out] _joint_torques An array of measured joint torques from the motor
    public: void sendStates(double *_joint_positions, double *_joint_velocities, double *_joint_torques);

    public: void printTxBuffer();

    // The number of motors
    private: int number_of_motors;

    // The size of the transmitt buffer
    private: int tx_buffer_size;

    // A receive buffer
    private: char* rx_buffer;

    // A transmitt buffer
    private: unsigned char* tx_buffer;
};

#endif