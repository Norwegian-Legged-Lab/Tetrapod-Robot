#ifndef motor_message_generator_h
#define motor_message_generator_h

#include "Arduino.h"

// A list of the different motor commands
#define MOTOR_COMMAND_READ_PID_PARAMETERS 0x30
#define MOTOR_COMMAND_WRITE_PID_PARAMETERS_TO_RAM 0x31
#define MOTOR_COMMAND_WRITE_PID_PARAMETERS_TO_ROM 0x32
#define MOTOR_COMMAND_READ_ACCELERATION 0x33
#define MOTOR_COMMAND_WRITE_ACCELERATION_TO_RAM 0x34
#define MOTOR_COMMAND_READ_ENCODER_POSITION 0x90
#define MOTOR_COMMAND_WRITE_ENCODER_POSITION_OFFSET 0x91
#define MOTOR_COMMAND_WRITE_CURRENT_POSITION_TO_ROM 0x19
#define MOTOR_COMMAND_READ_MULTI_TURN_ANGLE 0x92
#define MOTOR_COMMAND_READ_SINGLE_CIRCLE_COMMAND 0x94
#define MOTOR_COMMAND_READ_MOTOR_STATUS_1_AND_ERROR_FLAG 0x9A
#define MOTOR_COMMAND_CLEAR_MOTOR_ERROR_FLAG 0x9B
#define MOTOR_COMMAND_READ_MOTOR_STATUS_2 0x9C
#define MOTOR_COMMAND_READ_MOTOR_STATUS_3 0x9D
#define MOTOR_COMMAND_MOTOR_OFF 0x80
#define MOTOR_COMMAND_MOTOR_STOP 0x81
#define MOTOR_COMMAND_MOTOR_RUNNING 0x88
#define MOTOR_COMMAND_TORQUE_CLOSED_LOOP 0xA1
#define MOTOR_COMMAND_SPEED_CLOSED_LOOP 0xA2
#define MOTOR_COMMAND_POSITION_CLOSED_LOOP_1 0xA3
#define MOTOR_COMMAND_POSITION_CLOSED_LOOP_2 0xA4
#define MOTOR_COMMAND_POSITION_CLOSED_LOOP_3 0xA5
#define MOTOR_COMMAND_POSITION_CLOSED_LOOP_4 0xA6

#define MESSAGE_SIZE 8

class MotorMessageGenerator
{
public:
    MotorMessageGenerator(){}

    void readPIDParameters(unsigned char* _can_message);

    void writePIDParametersToRAM(unsigned char* _can_message, 
        unsigned char _k_p_position, 
        unsigned char _k_i_position, 
        unsigned char _k_p_speed, 
        unsigned char _k_i_speed,
        unsigned char _k_p_torque,
        unsigned char _k_i_torque);

    void writePIDParametersToROM(unsigned char* _can_message, 
        unsigned char _k_p_position, 
        unsigned char _k_i_position, 
        unsigned char _k_p_speed, 
        unsigned char _k_i_speed,
        unsigned char _k_p_torque,
        unsigned char _k_i_torque);

    void readAcceleration(unsigned char* _can_message);

    void writeAccelerationToRAM(unsigned char* _can_message, int32_t _acceleration);

    void readEncoderPosition(unsigned char* _can_message);

    void writeEncoderPositionOffset(unsigned char* _can_message, uint16_t _encoder_offset);

    void writeCurrentPositionToROM(unsigned char* _can_message);

    void readMultiTurnAngle(unsigned char* _can_message);

    void readCircleTurnAngle(unsigned char* _can_message);

    void motorOff(unsigned char* _can_message);

    void motorStop(unsigned char* _can_message);

    void motorRunning(unsigned char* _can_message);

    void readMotorStatus1AndErrorFlag(unsigned char* _can_message);

    void clearMotorErrorFlag(unsigned char* _can_message);

    void readMotorStatus2(unsigned char* _can_message);

    void readMotorStatus3(unsigned char* _can_message);

    void torqueCurrentControl(unsigned char* _can_message, int16_t _torque_current);

    void speedControl(unsigned char* _can_message, int32_t speed);

    void positionControl1(unsigned char* _can_message, int32_t _multiturn_angle);

    void positionControl2(unsigned char* _can_message, int32_t _multiturn_angle, uint16_t _max_speed);

    void positionControl3(unsigned char* _can_message, uint16_t _singleturn_angle, uint8_t _spin_direction);

    void positionControl4(unsigned char* _can_message, uint16_t _single_turn_angle, uint8_t _spin_direction, uint16_t max_speed);
private:
    void emptyCanMessage(unsigned char* _can_message);
};

void print_can_message(unsigned long _id_sender, unsigned char* _can_message);

#endif