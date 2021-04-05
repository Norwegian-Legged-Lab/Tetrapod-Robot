#include "motor_control.h"

MotorControl::MotorControl(uint8_t _id, uint8_t _can_port_id, int _number_of_inner_motor_rotations)
{
    id = _id;

    address = id + MOTOR_ADDRESS_OFFSET;

    can_message.id = address;

    can_port_id = _can_port_id;

    max_encoder_value = MAX_ENCODER_VALUE;

    max_torque = MAX_TORQUE;

    max_torque_current = MAX_TORQUE_CURRENT;

    // To check if the inner motor has completed a turn we check for a large jump
    // in the encoder value. To prevent an acceidental jump initially we start at
    // the middle value, minimizing this from happening
    previous_encoder_value = (max_encoder_value + 1)/2;

    // This value is somewhat arbitrary. It should be scaled relative to the 
    // encoder resolution and large enough so that no inner motor turns are skipped
    encoder_turn_threshold = (max_encoder_value + 1)/2;

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

void MotorControl::readMotorControlCommandReply(unsigned char* _can_message)
{
    // Encoder position. 16 bits represents one inner motor rotation
    uint16_t new_encoder_value = _can_message[7]*256 + _can_message[6];
    Serial.print("Encoder new:\t"); Serial.print(new_encoder_value); Serial.print("\t");
    Serial.print("Encoder prev:\t"); Serial.print(previous_encoder_value); Serial.print("\t");
    // Update the number of completed turns for the inner motor 
    number_of_inner_motor_rotations += innerMotorTurnCompleted(previous_encoder_value, new_encoder_value);
    Serial.print("Inner rot:\t"); Serial.print(number_of_inner_motor_rotations); Serial.print("\t");

    //Serial.print("Encoder new:\t"); Serial.print(new_encoder_value); Serial.print("\t");
    //Serial.print("Encoder prev:\t"); Serial.print(previous_encoder_value); Serial.print("\t");
    previous_encoder_value = new_encoder_value;

    // Update the shaft position in radians
    position = (number_of_inner_motor_rotations + (double)new_encoder_value/(double)max_encoder_value)*ROTATION_DISTANCE*M_PI/180.0;

    // Get the speed of the inner motor in degrees per second
    int16_t speed_motor_dps = _can_message[5]*256 + _can_message[4];

    // Convert the motor speed to shaft speed in radians per second
    speed = (double)(speed_motor_dps)*M_PI/(180.0*GEAR_REDUCTION);

    // Get the torque current 
    int16_t torque_current = _can_message[3]*256 + _can_message[2];
    
    //Serial.print(torque_current); Serial.print("\t");

    // Convert the torque current into actual current
    torque = max_torque*torque_current/max_torque_current;
}

double MotorControl::readCurrentPosition()
{
    // Create a CAN message requesting the current encoder position
    MOTOR_CAN_MESSAGE_GENERATOR::readEncoderPosition(can_message.buf);

    // Send the CAN message
    sendMessage(can_message);

    // Wait 0.010 seconds for reply from motor
    delay_microseconds(10000.0);

    // Receive the reply from the motor and store it in a CAN message
    readMessage(received_can_message);

    // encoder position = true encoder measurement - the encoder offset
    double new_encoder_value = received_can_message.buf[3]*256 + received_can_message.buf[2];

    // Update the number of completed turns for the inner motor 
    number_of_inner_motor_rotations += innerMotorTurnCompleted(previous_encoder_value, new_encoder_value);

    previous_encoder_value = new_encoder_value;

    // Update the shaft position in radians
    position = (number_of_inner_motor_rotations + new_encoder_value/max_encoder_value)*ROTATION_DISTANCE*M_PI/180.0;
}

int MotorControl::innerMotorTurnCompleted(uint16_t _previous_encoder_value, uint16_t _new_encoder_value)
{
    // If old >> new a CC turn was completed
    if(_previous_encoder_value - _new_encoder_value > encoder_turn_threshold)
    {
        Serial.print("Turn 1\t");
        return -1;
    }
    // If new >> old a CW turn was completed
    else if(_new_encoder_value - _previous_encoder_value > encoder_turn_threshold)
    {
        Serial.print("Turn-1\t");
        return 1;
    }
    // No turn was completed
    else
    {
        Serial.print("Turn 0\t");
        return 0;
    }
}

void MotorControl::setPositionReference(double _angle)
{
    // Convert the desired shaft angle in radians into an inner motor angle in 0.01 degrees 
    double inner_motor_reference_angle = ((int)(6*_angle*180.0/PI) - initial_number_of_inner_motor_rotations*ROTATION_DISTANCE)*100;

    // Create a position control can message
    MOTOR_CAN_MESSAGE_GENERATOR::positionControl1(can_message.buf, inner_motor_reference_angle);

    // Send the CAN message
    sendMessage(can_message);
}

void MotorControl::setSpeedReference(double _speed)
{
    // Convert speed in rad/s to 0.01 deg/sec
    int32_t speed_001dps = (int)round(GEAR_REDUCTION*_speed*100.0*180.0/M_PI);

    // Create a CAN message for motor speed control
    MOTOR_CAN_MESSAGE_GENERATOR::speedControl(can_message.buf, speed_001dps);

    // Send CAN message
    sendMessage(can_message);
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
    MOTOR_CAN_MESSAGE_GENERATOR::torqueCurrentControl(can_message.buf, current_torque);

    // Send CAN message
    sendMessage(can_message); 
}

void MotorControl::setTorqueCurrent(int _torque_current)
{
    if(_torque_current > max_torque_current)
    {
        _torque_current = max_torque_current;
    }
    else if(_torque_current < -max_torque_current)
    {
        _torque_current = -max_torque_current;
    }

    Serial.print(_torque_current); Serial.print("\t");

    MOTOR_CAN_MESSAGE_GENERATOR::torqueCurrentControl(can_message.buf, _torque_current);

    sendMessage(can_message);
}

bool MotorControl::writePIDParametersToRAM
(
    double _kp_pos,
    double _ki_pos,
    double _kp_speed,
    double _ki_speed,
    double _kp_torque,
    double _ki_torque
)
{
    // Create a CAN message for writing PID parameters to RAM
    MOTOR_CAN_MESSAGE_GENERATOR::writePIDParametersToRAM(can_message.buf, 
        _kp_pos,
        _ki_pos,
        _kp_speed,
        _ki_speed,
        _kp_torque,
        _ki_torque
    );

    // Send CAN message
    sendMessage(can_message);

    // Wait 0.10 seconds for a reply from the motor
    delay_microseconds(100000.0);

    // Check if we received a reply from the motor
    if(readMessage(received_can_message))
    {
        // Check that the incomming message is the one we anticipated
        if((received_can_message.id == address) && (received_can_message.buf[0] == MOTOR_COMMAND_WRITE_PID_PARAMETERS_TO_RAM))
        {
            // Update the PID parameters to the new ones from the motor
            kp_pos = received_can_message.buf[2];
            ki_pos = received_can_message.buf[3];
            kp_speed = received_can_message.buf[4];
            ki_speed = received_can_message.buf[5];
            kp_torque = received_can_message.buf[6];
            ki_torque = received_can_message.buf[7];
            return true;
        }
        else
        {
            errorMessage();
            Serial.println("Failed to write PID parameters to RAM. Wrong reply received.");
            return false;
        }
    } 
    else
    {
        // Report that we failed to write the PID parameters to RAM
        errorMessage();
        Serial.println("Failed to write PID parameters to RAM. No reply received.");
        return false;
    }
}

bool MotorControl::stopMotor()
{
    // Create a CAN Message instructing the motor to stop
    MOTOR_CAN_MESSAGE_GENERATOR::motorStop(can_message.buf);

    // Send CAN message
    sendMessage(can_message);

    // Wait 0.010 seconds for a reply from the motor
    delay_microseconds(10000.0);

    if(readMessage(received_can_message))
    {
        if((received_can_message.id == address) && (received_can_message.buf[0] == MOTOR_COMMAND_MOTOR_STOP))
        {
            return true;
        }
        else
        {
            errorMessage();
            Serial.println("Failed to stop the motor. Incorrect reply received.");
            return false;
        }
    } 
    else
    {
        // Report that we failed to stop the motor
        errorMessage();
        Serial.println("Failed to stop the motor. No reply received.");
        return false;
    }
}


bool MotorControl::turnOffMotor()
{
    // Create a CAN message instructing the motor to turn off
    MOTOR_CAN_MESSAGE_GENERATOR::motorOff(can_message.buf);

    // Send CAN message
    sendMessage(can_message);

    // Wait 0.010 seconds for a reply from the motor
    delay_microseconds(10000.0);

    if(readMessage(received_can_message))
    {
        if((received_can_message.id == address) && (received_can_message.buf[0] == MOTOR_COMMAND_MOTOR_OFF))
        {
            return true;
        }
        else
        {
            errorMessage();
            Serial.println("Failed to turn off the motor. Incorrect reply received.");
            return false;
        }
    }
    else
    {
        // Report that we failed to turn off the motor
        errorMessage();
        Serial.println("ERROR: Failed to turn off the motor. No reply received.");
        return false;
    }
}

bool MotorControl::readPIDParameters()
{
    // Create a CAN message for requesting the motor PID parameters
    MOTOR_CAN_MESSAGE_GENERATOR::readPIDParameters(can_message.buf);

    // Send CAN message
    sendMessage(can_message);

    // Wait 0.10 seconds for a reply from the motor
    delay_microseconds(100000.0);

    // Check if we received a reply
    if(readMessage(received_can_message))
    {
        if((received_can_message.id == address) && (received_can_message.buf[0] == MOTOR_COMMAND_READ_PID_PARAMETERS))
        {
            // Store the PID parameters in the class
            kp_pos = received_can_message.buf[2];
            ki_pos = received_can_message.buf[3];
            kp_speed = received_can_message.buf[4];
            ki_speed = received_can_message.buf[5];
            kp_torque = received_can_message.buf[6];
            ki_torque = received_can_message.buf[7];

            // Report that we successfully managed to read the PID parameters
            return true;
        }
        else
        {
            errorMessage();
            Serial.println("Failed to read PID parameters. Wrong reply received.");
            return false; 
        }
    }
    else
    {
        // Report that we failed to read the PID parameters
        errorMessage();
        Serial.println("Failed to read PID parameters. No reply received.");
        return false;
    }
}

void MotorControl::sendMessage(CAN_message_t _can_message)
{
    if(can_port_id == 1)
    {
        can_port_1.write(_can_message);
    }
    else if(can_port_id == 2)
    {
        can_port_2.write(_can_message);
    }
    else
    {
        // TODO - Add proper error handling
        Serial.println("ERROR: WRITE FAILED. CAN PORT DOES NOT EXIST");
        while(true);
    }
}

int MotorControl::readMessage(CAN_message_t &_can_message)
{
    if(can_port_id == 1)
    {
        return can_port_1.read(_can_message);
    }
    else if(can_port_id == 2)
    {
        return can_port_2.read(_can_message);
    }
    else
    {
        // TODO - Add proper error handling
        errorMessage();
        Serial.println("READ FAILED. CAN PORT DOES NOT EXIST");
        while(true);
    }
}

void MotorControl::getPIDParameters(
    double &_kp_pos,
    double &_ki_pos,
    double &_kp_speed,
    double &_ki_speed,
    double &_kp_torque,
    double &_ki_torque)
{
    _kp_pos = kp_pos;
    _ki_pos = ki_pos;
    _kp_speed = kp_speed;
    _ki_speed = ki_speed;
    _kp_torque = kp_torque;
    _ki_torque = ki_torque;
}

void MotorControl::printPIDParameters()
{
    Serial.print("kp_pos:\t"); Serial.println(kp_pos);
    Serial.print("ki_pos:\t"); Serial.println(ki_pos);
    Serial.print("kp_vel:\t"); Serial.println(kp_speed);
    Serial.print("kp_vel:\t"); Serial.println(ki_speed);
    Serial.print("kp_tor:\t"); Serial.println(kp_torque);
    Serial.print("kp_tor:\t"); Serial.println(ki_torque);
}

void MotorControl::errorMessage()
{
    Serial.print("ERROR - Motor ");
    Serial.print(id);
    Serial.print("\t");
}

void MotorControl::printState()
{
    Serial.print("ID: "); Serial.print(id); Serial.print("\t");
    Serial.print("Pos: "); Serial.print(position*180.0/M_PI); Serial.print("\t");
    Serial.print("Vel: "); Serial.print(speed); Serial.print("\t");
    Serial.print("Tor: "); Serial.print(torque); Serial.print("\t");
    Serial.println("");
}

void delay_microseconds(double microsecond_delay)
{
    double timer = micros();
    while(timer + microsecond_delay > micros());
}