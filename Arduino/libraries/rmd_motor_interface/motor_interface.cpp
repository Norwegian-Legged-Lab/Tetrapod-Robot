#include "motor_interface.h"

void MotorInterface::emptyCanMessage(unsigned char* can_message)
{
    for(int i = 0; i < MESSAGE_SIZE; i++)
    {
        can_message[i] = 0;
    }
}

void MotorInterface::readPIDParameters(unsigned char* can_message)
{
    emptyCanMessage(can_message);
    can_message[0] = MOTOR_COMMAND_READ_PID_PARAMETERS;
}

void MotorInterface::writePIDParametersToRAM(unsigned char* can_message, 
unsigned char k_p_position, 
unsigned char k_i_position, 
unsigned char k_p_speed, 
unsigned char k_i_speed,
unsigned char k_p_torque,
unsigned char k_i_torque)
{
    emptyCanMessage(can_message);
    can_message[0] = MOTOR_COMMAND_WRITE_PID_PARAMETERS_TO_RAM;
    can_message[2] = k_p_position;
    can_message[3] = k_i_position;
    can_message[4] = k_p_speed;
    can_message[5] = k_i_speed;
    can_message[6] = k_p_torque;
    can_message[7] = k_i_torque;
}

void MotorInterface::writePIDParametersToROM(unsigned char* can_message, 
unsigned char k_p_position, 
unsigned char k_i_position, 
unsigned char k_p_speed, 
unsigned char k_i_speed,
unsigned char k_p_torque,
unsigned char k_i_torque)
{
    emptyCanMessage(can_message);
    can_message[0] = MOTOR_COMMAND_WRITE_PID_PARAMETERS_TO_ROM;
    can_message[2] = k_p_position;
    can_message[3] = k_i_position;
    can_message[4] = k_p_speed;
    can_message[5] = k_i_speed;
    can_message[6] = k_p_torque;
    can_message[7] = k_i_torque;
}

void MotorInterface::readAcceleration(unsigned char* can_message)
{
    emptyCanMessage(can_message);
    can_message[0] = MOTOR_COMMAND_READ_ACCELERATION;
}

void Mtor