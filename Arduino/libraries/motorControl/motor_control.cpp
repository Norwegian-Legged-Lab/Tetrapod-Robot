#include "motor_control.h"

MotorControl::MotorControl(uint8_t _id, int _number_of_inner_motor_rotations)
{
    id = _id;

    can_port.begin();
    can_port.setBaudRate(1000000);

    can_message.id = MOTOR_ADDRESS_OFFSET + id;

    max_encoder_value = 65535; // 16 bit encoders are used in the motors 2^16 -> [0, 65536]

    // To check if the inner motor has completed a turn we check for a large jump
    // in the encoder value. To prevent an acceidental jump initially we start at
    // the middle value, minimizing this from happening
    previous_encoder_value = (max_encoder_value + 1)/2;

    // This value is somewhat arbitrary. It should be scaled relative to the 
    // encoder resolution and large enough so that no inner motor turns are skipped
    encoder_turn_threshold = (max_encoder_value + 1)/4;

    // Updates the position measurement
    readCurrentPosition(); 

    // Initialize at zero speed
    speed = 0.0;

    // Might need to do something more here later
    // Initialize at zero torque. 
    torque = 0.0;

    initial_number_of_inner_motor_rotations = _number_of_inner_motor_rotations;
    number_of_inner_motor_rotations = _number_of_inner_motor_rotations;
    // The CAN port should be an input argument and be set here
}

void MotorControl::replyControlCommand(unsigned char* _can_message)
{
    // Encoder position. 16 bits represents one inner motor rotation
    int16_t new_encoder_value = _can_message[7]*256 + _can_message[6];

    // Update the number of completed turns for the inner motor 
    number_of_inner_motor_rotations += innerMotorTurnCompleted(previous_encoder_value, new_encoder_value);

    // Update the shaft position in radians
    position = (number_of_inner_motor_rotations + new_encoder_value/max_encoder_value)*ROTATION_DISTANCE*M_PI/180.0;

    // Get the speed of the inner motor in degrees per second
    int16_t speed_motor_dps = _can_message[5]*256 + _can_message[4];

    // Convert the motor speed to shaft speed in radians per second
    speed = (double)(speed_motor_dps)*M_PI/(180.0*GEAR_REDUCTION);

    // Get the torque current 
    int16_t torque_current = _can_message[3]*256 + _can_message[2];
    
    // Convert the torque current into actual current
    torque = max_torque*torque_current/max_torque_current;
}

void MotorControl::setPositionReference(double _angle)
{
    // Convert the desired shaft angle in radians into an inner motor angle in 0.01 degrees 
    double inner_motor_reference_angle = ((int)(6*_angle*180.0/PI) - initial_number_of_inner_motor_rotations*ROTATION_DISTANCE)*100;

    // Create a position control can message
    motor_message_generator.positionControl1(can_message.buf, inner_motor_reference_angle);

    // Send the CAN message
    can_port.write(can_message);
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

bool MotorControl::writePIDParametersToRAM(Eigen::Matrix<double, 6, 1> _PID_parameters)
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

    // Wait 0.010 seconds for a reply from the motor
    delay_microseconds(10000.0);

    // Check if we received a reply from the motor
    if(can_port.read(received_can_message))
    {
        // Can add test to see if the incomming message is correct

        // Report that PID parameters were successfully written to RAM
        return true;
    } 
    else
    {
        // Report that we failed to write the PID parameters to RAM
        return false;
    }
}

bool MotorControl::writePIDParametersToROM(Eigen::Matrix<double, 6, 1> _PID_parameters)
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

    // Wait 0.010 seconds for a reply from the motor
    delay_microseconds(10000.0);

    // Check if we received a reply from the motor
    if(can_port.read(received_can_message))
    {
        // Can add test to see if the incomming message is correct

        // Report that PID parameters were successfully written to ROM
        return true;
    } 
    else
    {
        // Report that we failed to write the PID parameters to ROM
        return false;
    }
}

bool MotorControl::stopMotor()
{
    // Create a CAN Message instructing the motor to stop
    motor_message_generator.motorStop(can_message.buf);

    // Send CAN message
    can_port.write(can_message);

    // Wait 0.010 seconds for a reply from the motor
    delay_microseconds(10000.0);

    if(can_port.read(received_can_message))
    {
        // Can add test to see if the incomming message is correct

        // Report that the motor was successfully stopped
        return true;
    } 
    else
    {
        // Report that we failed to stop the motor
        return false;
    }
}

bool MotorControl::turnOffMotor()
{
    // Create a CAN message instructing the motor to turn off
    motor_message_generator.motorOff(can_message.buf);

    // Send CAN message
    can_port.write(can_message);

    // Wait 0.010 seconds for a reply from the motor
    delay_microseconds(10000.0);

    if(can_port.read(received_can_message))
    {
        // Can add test to see if the incomming message is correct

        // Report that the motor was successfully turned off
        return true;
    }
    else
    {
        // Report that we failed to turn off the motor
        return false;
    }
}

bool MotorControl::readPIDParameters(Eigen::Matrix<double, 6, 1> &_PID_parameters)
{
    // Create a CAN message for requesting the motor PID parameters
    motor_message_generator.readPIDParameters(can_message.buf);

    // Send CAN message
    can_port.write(can_message);

    // Wait 0.010 seconds for a reply from the motor
    delay_microseconds(10000.0);

    // Check if we received a reply
    if(can_port.read(received_can_message))
    {
        // Store the PID parameters in the class
        PID_parameters(0) = received_can_message.buf[2];
        PID_parameters(1) = received_can_message.buf[3];
        PID_parameters(2) = received_can_message.buf[4];
        PID_parameters(3) = received_can_message.buf[5];
        PID_parameters(4) = received_can_message.buf[6];
        PID_parameters(5) = received_can_message.buf[7];

        // Update the input parameters
        _PID_parameters = PID_parameters;

        // Report that we successfully managed to read the PID parameters
        return true;
    }
    else
    {
        // Report that we failed to read the PID parameters
        return false;
    }
}

double MotorControl::readCurrentPosition()
{
    // Create a CAN message requesting the current encoder position
    motor_message_generator.readEncoderPosition(can_message.buf);

    // Send the CAN message
    can_port.write(can_message);

    // Wait 0.010 seconds for reply from motor
    delay_microseconds(10000.0);

    // Receive the reply from the motor and store it in a CAN message
    can_port.read(received_can_message);

    // encoder position = true encoder measurement - the encoder offset
    double new_encoder_value = received_can_message.buf[3]*256 + received_can_message.buf[2];

    // Update the number of completed turns for the inner motor 
    number_of_inner_motor_rotations += innerMotorTurnCompleted(previous_encoder_value, new_encoder_value);

    // Update the shaft position in radians
    position = (number_of_inner_motor_rotations + new_encoder_value/max_encoder_value)*ROTATION_DISTANCE*M_PI/180.0;
}

int MotorControl::innerMotorTurnCompleted(uint16_t _previous_encoder_value, uint16_t _new_encoder_value)
{
    // If old >> new a CC turn was completed
    if(_previous_encoder_value - _new_encoder_value > encoder_turn_threshold)
    {
        return 1;
    }
    // If new >> old a CW turn was completed
    else if(_new_encoder_value - _previous_encoder_value > encoder_turn_threshold)
    {
        return -1;
    }
    // No turn was completed
    else
    {
        return 0;
    }
    
}

void delay_microseconds(double microsecond_delay)
{
    double timer = micros();
    while(timer + microsecond_delay > micros());
}