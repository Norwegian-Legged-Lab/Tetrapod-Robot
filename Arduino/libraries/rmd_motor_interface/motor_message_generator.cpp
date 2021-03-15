#include "motor_message_generator.h"

void print_can_message(unsigned long _id_sender, unsigned char* _can_message)
{
    Serial.print("Message ID:\t");
    Serial.print(_id_sender, HEX);
    Serial.print("\t");
    for(int i = 0; i < 8; i++)
    {
        Serial.print("0x");
        Serial.print(_can_message[i]);
        Serial.print("\t");
    }
    Serial.println("");
}

void MotorMessageGenerator::emptyCanMessage(unsigned char* _can_message)
{
    for(int i = 0; i < MESSAGE_SIZE; i++)
    {
        _can_message[i] = 0;
    }
}

void MotorMessageGenerator::readPIDParameters(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_READ_PID_PARAMETERS;
}

void MotorMessageGenerator::writePIDParametersToRAM(unsigned char* _can_message, 
    unsigned char _k_p_position, 
    unsigned char _k_i_position, 
    unsigned char _k_p_speed, 
    unsigned char _k_i_speed,
    unsigned char _k_p_torque,
    unsigned char _k_i_torque)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_WRITE_PID_PARAMETERS_TO_RAM;
    _can_message[2] = _k_p_position;
    _can_message[3] = _k_i_position;
    _can_message[4] = _k_p_speed;
    _can_message[5] = _k_i_speed;
    _can_message[6] = _k_p_torque;
    _can_message[7] = _k_i_torque;
}

void MotorMessageGenerator::writePIDParametersToROM(unsigned char* _can_message, 
    unsigned char _k_p_position, 
    unsigned char _k_i_position, 
    unsigned char _k_p_speed, 
    unsigned char _k_i_speed,
    unsigned char _k_p_torque,
    unsigned char _k_i_torque)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_WRITE_PID_PARAMETERS_TO_ROM;
    _can_message[2] = _k_p_position;
    _can_message[3] = _k_i_position;
    _can_message[4] = _k_p_speed;
    _can_message[5] = _k_i_speed;
    _can_message[6] = _k_p_torque;
    _can_message[7] = _k_i_torque;
}

void MotorMessageGenerator::readAcceleration(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_READ_ACCELERATION;
}

void MotorMessageGenerator::writeAccelerationToRAM(unsigned char* _can_message, int32_t _acceleration)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_WRITE_ACCELERATION_TO_RAM;
    _can_message[4] = *(uint8_t *)(&_acceleration);
    _can_message[5] = *((uint8_t *)(&_acceleration) + 1);
    _can_message[6] = *((uint8_t *)(&_acceleration) + 2);
    _can_message[7] = *((uint8_t *)(&_acceleration) + 3);
}

void MotorMessageGenerator::readEncoderPosition(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_READ_ENCODER_POSITION;
}

void MotorMessageGenerator::writeEncoderPositionOffset(unsigned char* _can_message, uint16_t _encoder_offset)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_WRITE_ENCODER_POSITION_OFFSET;
    _can_message[6] = *(uint8_t *)(&_encoder_offset);
    _can_message[7] = *((uint8_t *)(&_encoder_offset) + 1);
}

void MotorMessageGenerator::writeCurrentPositionToROM(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_WRITE_CURRENT_POSITION_TO_ROM;
}

void MotorMessageGenerator::readMultiTurnAngle(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_READ_MULTI_TURN_ANGLE;
}

void MotorMessageGenerator::readCircleTurnAngle(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_READ_SINGLE_CIRCLE_COMMAND;
}

void MotorMessageGenerator::motorOff(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_MOTOR_OFF;
}

void MotorMessageGenerator::motorStop(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_MOTOR_STOP;
}
void MotorMessageGenerator::motorRunning(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_MOTOR_RUNNING;
}

void MotorMessageGenerator::readMotorStatus1AndErrorFlag(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_READ_MOTOR_STATUS_1_AND_ERROR_FLAG;
}

void MotorMessageGenerator::clearMotorErrorFlag(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_CLEAR_MOTOR_ERROR_FLAG;
}

void MotorMessageGenerator::readMotorStatus2(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_READ_MOTOR_STATUS_2;
}

void MotorMessageGenerator::readMotorStatus3(unsigned char* _can_message)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_READ_MOTOR_STATUS_3;
}

void MotorMessageGenerator::torqueCurrentControl(unsigned char* _can_message, int16_t _torque_current)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_TORQUE_CLOSED_LOOP;
    _can_message[4] = *(uint8_t *)(&_torque_current);
    _can_message[5] = *((uint8_t *)(&_torque_current) + 1);
}

void MotorMessageGenerator::speedControl(unsigned char* _can_message, int32_t _speed)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_SPEED_CLOSED_LOOP;
    _can_message[4] = *(uint8_t *)(&_speed);
    _can_message[5] = *((uint8_t *)(&_speed) + 1);
    _can_message[6] = *((uint8_t *)(&_speed) + 2);
    _can_message[7] = *((uint8_t *)(&_speed) + 3);
}

void MotorMessageGenerator::positionControl1(unsigned char* _can_message, int32_t _multiturn_angle)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_POSITION_CLOSED_LOOP_1;
    _can_message[4] = *(uint8_t *)(&_multiturn_angle);
    _can_message[5] = *((uint8_t *)(&_multiturn_angle) + 1);
    _can_message[6] = *((uint8_t *)(&_multiturn_angle) + 2);
    _can_message[7] = *((uint8_t *)(&_multiturn_angle) + 3);
}

void MotorMessageGenerator::positionControl2(unsigned char* _can_message, int32_t _multiturn_angle, uint16_t _max_speed)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_POSITION_CLOSED_LOOP_2;
    _can_message[2] = *(uint8_t *)(&_max_speed);
    _can_message[3] = *((uint8_t *)(&_max_speed) + 1);
    _can_message[4] = *(uint8_t *)(&_multiturn_angle);
    _can_message[5] = *((uint8_t *)(&_multiturn_angle) + 1); 
    _can_message[6] = *((uint8_t *)(&_multiturn_angle) + 2); 
    _can_message[7] = *((uint8_t *)(&_multiturn_angle) + 3);   
}

void MotorMessageGenerator::positionControl3(unsigned char* _can_message, uint16_t _singleturn_angle, uint8_t _spin_direction)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_POSITION_CLOSED_LOOP_3;
    _can_message[1] = _spin_direction;
    _can_message[4] = *(uint8_t *)(&_singleturn_angle);
    _can_message[5] = *((uint8_t *)(&_singleturn_angle) + 1);
}

void MotorMessageGenerator::positionControl4(unsigned char* _can_message, uint16_t _single_turn_angle, uint8_t _spin_direction, uint16_t _max_speed)
{
    emptyCanMessage(_can_message);
    _can_message[0] = MOTOR_COMMAND_POSITION_CLOSED_LOOP_4;
    _can_message[1] = _spin_direction;
    _can_message[2] = *(uint8_t *)(&_max_speed);
    _can_message[3] = *((uint8_t *)(&_max_speed) + 1);
    _can_message[4] = *(uint8_t *)(&_single_turn_angle);
    _can_message[5] = *((uint8_t *)(&_single_turn_angle) + 1);
}