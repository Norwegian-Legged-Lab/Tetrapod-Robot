#ifndef make_can_msg_h
#define make_can_msg_h

#include "Arduino.h"
#include "motor_constants.h"
#include "utilities.h"
 
/// \brief The functions within this namespace converts the incomming 8-byte arrays to 
/// CAN data messages for the RMDX motors. 
/// Please see the attached pdf, RMD_servo_motor_control_protocol for details
namespace make_can_msg
{
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
}

#endif