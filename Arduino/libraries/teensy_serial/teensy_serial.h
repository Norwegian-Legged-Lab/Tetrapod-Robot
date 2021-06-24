#ifndef teensy_serial_h
#define teensy_serial_h

#include "Arduino.h"

class TeensySerial
{
    // Constructor
    public: TeensySerial(int _number_of_motors);

    public: ~TeensySerial();

    public: bool areControlCommandsAvailable();

    public: void receiveControlCommands(double &_control_command_type, double* _control_commands);

    public: void sendStates(double *_joint_positions, double *_joint_velocities, double *_joint_torques);

    // The number of motors
    private: int number_of_motors;

    private: int tx_buffer_size;

    // Create a receive buffer
    private: char* rx_buffer;

    // Create a transmitt buffer
    private: unsigned char* tx_buffer;
};

#endif