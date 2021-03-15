#include "motor_control.h"

MotorControl::MotorControl(uint8_t _id)
{
    id = _id;

    can_port.begin();
    can_port.setBaudRate(1000000);

    can_message.id = MOTOR_ADDRESS_OFFSET + id;

    // The CAN port should be an input argument and be set here
}

void MotorControl::setPositionReference(double _angle)
{

}

void MotorControl::setSpeedReference(double _speed)
{
    // Convert speed in rad/s to 0.01 deg/sec
    int32_t speed_001dps = (int)round(GEAR_REDUCTION*_speed*100.0*180.0/M_PI);

    // Create a CAN message for motor speed control
    motor_message_generator.speedControl(can_message.buf, speed_001dps);

    // Send CAN message
    can_port.write(can_message);
}

void MotorControl::replyControlCommand(unsigned char* _can_message)
{
    // Encoder position. 16 bits represents one inner motor rotation
    int16_t encoder_position = _can_message[7]*256 + _can_message[6];
    position = (number_inner_motor_rotations + encoder_position/max_encoder_value)*ROTATION_DISTANCE

    int16_t speed_motor_dps = _can_message[5]*256 + _can_message[4];
    speed = (double)(speed_motor_dps)*M_PI/(180.0*GEAR_REDUCTION);

    int16_t torque_current = _can_message[3]*256 + _can_message[2];
    torque = max_torque*torque_current/max_torque_current;
}

void MotorControl::setTorqueReference(double _torque)
{
    // Saturate desired torque to be within maximum limits
    if (_torque > max_torque)
    {
        _torque = max_torque;
    }
    else if (_torque < -max_torque)
    {
        _torque = -max_torque;
    }

    // Scale the torque (Nm) to torque currents between -2000 and 2000
    int16_t current_torque = (int) round(max_torque_current*_torque/max_torque);

    // Create a CAN message for current torque control
    motor_message_generator.torqueCurrentControl(can_message.buf, current_torque);

    // Send CAN message
    can_port.write(can_message); 
}

void MotorControl::writePIDParametersToRAM(Eigen::Matrix<double, 6, 1> _PID_parameters)
{
    // Create a CAN message for writing PID parameters to RAM
    motor_message_generator.writePIDParametersToRAM(can_message.buf, 
        _PID_parameters(0),
        _PID_parameters(1),
        _PID_parameters(2),
        _PID_parameters(3),
        _PID_parameters(4),
        _PID_parameters(5)
    );

    // Send CAN message
    can_port.write(can_message);
}

void MotorControl::writePIDParametersToROM(Eigen::Matrix<double, 6, 1> _PID_parameters)
{
    // Create a CAN message for writing PID parameters to ROM
    motor_message_generator.writePIDParametersToROM(can_message.buf, 
        _PID_parameters(0),
        _PID_parameters(1),
        _PID_parameters(2),
        _PID_parameters(3),
        _PID_parameters(4),
        _PID_parameters(5)
    );

    // Send CAN message
    can_port.write(can_message);
}

void MotorControl::stopMotor()
{
    // Create a CAN Message instructing the motor to stop
    motor_message_generator.motorStop(can_message.buf);

    // Send CAN message
    can_port.write(can_message);
}

void MotorControl::turnOffMotor()
{
    // Create a CAN message instructing the motor to turn off
    motor_message_generator.motorOff(can_message.buf);

    // Send CAN message
    can_port.write(can_message);
}

/*
void readPIDParameters()
{
    // Create a CAN message for requesting the motor PID parameters
    motor_message_generator.readPIDParameters(can_message.buf);

    // Send CAN message
    can_port.write();

    // Use a non-blocking delay function to wait for replies
    double microsecond_delay = 10000.0;
    double timer_start = micros();
    while(microseconds_delay + timer_start > micros());

    // Chec
    can_port
}
*/

void delay_microseconds(double microsecond_delay)
{
    double timer = micros();
    while(timer + microsecond_delay > micros());
}