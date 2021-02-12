#ifndef motor_interface_h
#define motor_interface_h

#include "Arduino.h"

#define MOTOR_COMMAND_READ_PID_PARAMETERS 0x30
#define MOTOR_COMMAND_WRITE_PID_PARAMETERS_TO_RAM 0x31
#define MOTOR_COMMAND_WRITE_PID_PARAMETERS_TO_ROM 0x32
#define MOTOR_COMMAND_READ_ACCELERATION 0x33
#define MOTOR_COMMAND_WRITE_ACCELERATION 0x34
#define MOTOR_COMMAND_READ_ENCODER 0x90
#define MOTOR_COMMAND_WRITE_ENCODER 0x91
#define MOTOR_COMMAND_WRITE_CURRENT_POSITION_TO_ROM 0x19
#define MOTOR_COMMAND_READ_MULTI_TURN_ANGLE 0x92
#define MOTOR_COMMAND_READ_SINGLE_CIRCLE_COMMAND 0x94
#define MOTOR_COMMAND_READ_MOTOR_STATUS_1_AND_ERROR_FLAG 0x9A
#define MOTOR_COMMAND_CLEAR_MOTOR_ERROR_FLAG 0x9B
#define MOTOR_COMMAND_READ_MOTOR_STATUS_2 0x9C
#define MOTOR_COMMAND_READ_MOTOR_STATUS_3 0x9D
#define MOTOR_COMMAND_OFF 0x80
#define MOTOR_COMMAND_STOP 0x81
#define MOTOR_COMMAND_RUNNING 0x88
#define MOTOR_COMMAND_TORQUE_CLOSED_LOOP 0xA1
#define MOTOR_COMMAND_SPEED_CLOSED_LOOP 0xA2
#define MOTOR_COMMAND_POSITION_CLOSED_LOOP_1 0xA3
#define MOTOR_COMMAND_POSITION_CLOSED_LOOP_2 0xA4
#define MOTOR_COMMAND_POSITION_CLOSED_LOOP_3 0xA5
#define MOTOR_COMMAND_POSITION_CLOSED_LOOP_4 0xA6

#define MESSAGE_SIZE 8

class MotorInterface
{
public:
    MotorInterface(){}
    void readPIDParameters(unsigned char* can_message);
    void writePIDParametersToRAM(unsigned char* can_message, 
        unsigned char k_p_position, 
        unsigned char k_i_position, 
        unsigned char k_p_speed, 
        unsigned char k_i_speed,
        unsigned char k_p_torque,
        unsigned char k_i_torque);
    void writePIDParametersToROM(unsigned char* can_message, 
        unsigned char k_p_position, 
        unsigned char k_i_position, 
        unsigned char k_p_speed, 
        unsigned char k_i_speed,
        unsigned char k_p_torque,
        unsigned char k_i_torque);
    void readAcceleration(unsigned char* can_message);
    //void writeAccelerationToRAM(unsigned* char can_message...)
    void readEncoder(unsigned char* can_message);
private:
    //unsigned char can_message[MESSAGE_SIZE];
    void emptyCanMessage(unsigned char* can_message);
};

#endif