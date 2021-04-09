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
    // the middle value, preventing this from happening. 
    previous_encoder_value = (max_encoder_value + 1)/2;

    // This value is somewhat arbitrary. It should be scaled relative to the 
    // encoder resolution and large enough so that no inner motor turns are skipped
    encoder_turn_threshold = (max_encoder_value + 1)/2;

    initial_number_of_inner_motor_rotations = _number_of_inner_motor_rotations;

    number_of_inner_motor_rotations = _number_of_inner_motor_rotations;

    // Set the PID parameters in the motor
    /*
    while(!writePIDParametersToRAM(10, 1, 50, 5, 50, 5))
    {
        delay_microseconds(1000000.0);
    }
    */

    // Get the initial states from the motor
    while(!readMotorStatus())
    {
        //ROS_NODE_HANDLE.logwarn("cannot readMotorStatus()");
        delay_microseconds(1000000.0);
    } 

    // The multi turn angle is necessary to decide whether or not an offset should be added to the position setpoint function
    while(!readMultiTurnAngle())
    {
        delay_microseconds(1000000.0);
    }

    if(abs(multi_turn_angle) < MULTI_TURN_THRESHOLD)
    {
        target_position_offset = 1;
    }
}

bool MotorControl::readPIDParameters()
{
    // Create a CAN message for requesting the motor PID parameters
    make_can_msg::readPIDParameters(can_message.buf);

    // Send CAN message
    sendMessage(can_message);

    // Wait 0.010 seconds for a reply from the motor
    delay_microseconds(10000.0);

    // Check if we received a reply
    if(readMessage(received_can_message))
    {
        if((received_can_message.id == address) && (received_can_message.buf[0] == MOTOR_COMMAND_READ_PID_PARAMETERS))
        {
            // Store the PI parameters in the class
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
            // Report that the reply we received was incorrect
            #if ROS_PRINT
                char id_str[3];
                char port_str[3];
                dtostrf(id, 1, 0, id_str);
                dtostrf(can_port_id, 1, 0, port_str);
                char warning_message[90];
                sprintf(warning_message, "Motor %s - CAN %s: In the function readPIDParameters an incorrect reply was received", id_str, port_str);
                ROS_NODE_HANDLE.logwarn(warning_message);
            #else if SERIAL_PRINT
                errorMessage();
                Serial.println("In the function readPIDParameters an incorrect answer was received");
            #endif
            
            return false; 
        }
    }
    else
    {
        // Report that we failed to read the PID parameters
        #if ROS_PRINT
            char id_str[3];
            char port_str[3];
            dtostrf(id, 1, 0, id_str);
            dtostrf(can_port_id, 1, 0, port_str);
            char warning_message[80];
            sprintf(warning_message, "Motor %s - CAN %s: In the function readPIDParameters no reply was received", id_str, port_str);
            ROS_NODE_HANDLE.logwarn(warning_message);
        #else if SERIAL_PRINT
            errorMessage();
            Serial.println("In the function readPIDParameters no reply was received");
        #endif

        return false;
    }
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
    make_can_msg::writePIDParametersToRAM(can_message.buf, 
        _kp_pos,
        _ki_pos,
        _kp_speed,
        _ki_speed,
        _kp_torque,
        _ki_torque
    );

    //clearCANBuffer();

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
            // Report that the reply we received was incorrect
            #if ROS_PRINT
                char id_str[3];
                char port_str[3];
                dtostrf(id, 1, 0, id_str);
                dtostrf(can_port_id, 1, 0, port_str);
                char warning_message[96];
                sprintf(warning_message, "Motor %s - CAN %s: In the function writePIDParametersToRAM an incorrect reply was received", id_str, port_str);
                ROS_NODE_HANDLE.logwarn(warning_message);
            #else if SERIAL_PRINT
                errorMessage();
                Serial.println("In the function writePIDParametersToRAM an incorrect reply was received");
            #endif

            return false;
        }
    } 
    else
    {
        // Report that we failed to write the PID parameters to RAM
        #if ROS_PRINT
            char id_str[3];
            char port_str[3];
            dtostrf(id, 1, 0, id_str);
            dtostrf(can_port_id, 1, 0, port_str);
            char warning_message[86];
            sprintf(warning_message, "Motor %s - CAN %s: In the function writePIDParametersToRAM no reply was received", id_str, port_str);
            ROS_NODE_HANDLE.logwarn(warning_message);
        #else if SERIAL_PRINT
            errorMessage();
            Serial.println("In the function writePIDParametersToRAM no reply was received");
        #endif

        return false;
    }
}

void MotorControl::setPositionReference(double _angle)
{
    // Convert the desired shaft angle in radians into an inner motor angle in 0.01 degrees 
    double inner_motor_reference_angle = (ROTATION_DISTANCE*0.0 - _angle*180.0/M_PI)*GEAR_REDUCTION*100.0 + (initial_number_of_inner_motor_rotations + target_position_offset)*ROTATION_DISTANCE*GEAR_REDUCTION*100.0;

    // Create a position control can message
    make_can_msg::positionControl1(can_message.buf, inner_motor_reference_angle);

    // Send the CAN message
    sendMessage(can_message);
}

void MotorControl::setSpeedReference(double _speed)
{
    // The motor has defined a CW rotation as the positive rotation direction. We use CCW as the positve rotation direction.
    _speed = -_speed;

    // Convert speed in rad/s to 0.01 deg/sec.
    int32_t speed_001dps = (int)round(GEAR_REDUCTION*_speed*100.0*180.0/M_PI);

    // Create a CAN message for motor speed control
    make_can_msg::speedControl(can_message.buf, speed_001dps);

    // Send CAN message
    sendMessage(can_message);
}

void MotorControl::setTorqueReference(double _torque)
{
    // The motor has defined a CW rotation as the positive rotation direction. We use CCW as the positve rotation direction.
    _torque = -_torque;

    // Saturate desired torque to be within maximum limits
    if (_torque > max_torque)
    {
        _torque = max_torque;
    }
    else if (_torque < -max_torque)
    {
        _torque = -max_torque;
    }

    // Scale the torque (Nm) to torque currents between [-max_torque_current, max_torque_current]
    int16_t current_torque = (int) round(max_torque_current*_torque/max_torque);

    // Create a CAN message for current torque control
    make_can_msg::torqueCurrentControl(can_message.buf, current_torque);

    // Send CAN message
    sendMessage(can_message); 
}

void MotorControl::readMotorControlCommandReply(unsigned char* _can_message)
{
    // Encoder position. 16 bits represents one inner motor rotation
    uint16_t new_encoder_value = _can_message[7]*256 + _can_message[6];

    // Update the number of completed turns for the inner motor 
    number_of_inner_motor_rotations += innerMotorTurnCompleted(previous_encoder_value, new_encoder_value);

    // Update the latest received encoder value as the innerMotorTurnCompleted function has already been executed
    previous_encoder_value = new_encoder_value;

    // Update the shaft position in radians
    position = (number_of_inner_motor_rotations + 1.0 - (double)new_encoder_value/(double)max_encoder_value)*ROTATION_DISTANCE*M_PI/180.0;

    // Get the speed of the inner motor in degrees per second
    int16_t speed_motor_dps = _can_message[5]*256 + _can_message[4];

    // Convert the motor speed to shaft speed in radians per second
    speed = -(double)(speed_motor_dps)*M_PI/(180.0*GEAR_REDUCTION);

    // Get the torque current 
    int16_t torque_current = _can_message[3]*256 + _can_message[2];

    // Convert the torque current into torque through a linear scaling
    torque = -max_torque*torque_current/max_torque_current;
}

bool MotorControl::stopMotor()
{
    // Create a CAN Message instructing the motor to stop
    make_can_msg::motorStop(can_message.buf);

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
            // Report that the reply we received was incorrect
            #if ROS_PRINT
                char id_str[3];
                char port_str[3];
                dtostrf(id, 1, 0, id_str);
                dtostrf(can_port_id, 1, 0, port_str);
                char warning_message[82];
                sprintf(warning_message, "Motor %s - CAN %s: In the function stopMotor an incorrect reply was received", id_str, port_str);
                ROS_NODE_HANDLE.logwarn(warning_message);
            #else if SERIAL_PRINT
                errorMessage();
                Serial.println("In the function stopMotor an incorrect reply was received");
            #endif

            return false;
        }
    } 
    else
    {
        // Report that we failed to stop the motor
        #if ROS_PRINT
            char id_str[3];
            char port_str[3];
            dtostrf(id, 1, 0, id_str);
            dtostrf(can_port_id, 1, 0, port_str);
            char warning_message[75];
            sprintf(warning_message, "Motor %s - CAN %s: In the function stopMotor an no reply was received", id_str, port_str);
            ROS_NODE_HANDLE.logwarn(warning_message);
        #else if SERIAL_PRINT
            errorMessage();
            Serial.println("In the function stopMotor an incorrect reply was received");
        #endif

        return false;
    }
}

bool MotorControl::turnOffMotor()
{
    // Create a CAN message instructing the motor to turn off
    make_can_msg::motorOff(can_message.buf);

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
            // Report that the reply we received was incorrect
            #if ROS_PRINT
                char id_str[3];
                char port_str[3];
                dtostrf(id, 1, 0, id_str);
                dtostrf(can_port_id, 1, 0, port_str);
                char warning_message[85];
                sprintf(warning_message, "Motor %s - CAN %s: In the function turnOffMotor an incorrect reply was received", id_str, port_str);
                ROS_NODE_HANDLE.logwarn(warning_message);
            #else if SERIAL_PRINT
                errorMessage();
                Serial.println("In the function stopMotor an incorrect reply was received");
            #endif

            return false;
        }
    }
    else
    {
        // Report that we failed to turn off the motor
        #if ROS_PRINT
            char id_str[3];
            char port_str[3];
            dtostrf(id, 1, 0, id_str);
            dtostrf(can_port_id, 1, 0, port_str);
            char warning_message[75];
            sprintf(warning_message, "Motor %s - CAN %s: In the function turnOffMotor no reply was received", id_str, port_str);
            ROS_NODE_HANDLE.logwarn(warning_message);
        #else if SERIAL_PRINT
            errorMessage();
            Serial.println("In the function turnOffMotor no reply was received");
        #endif

        return false;
    }
}

bool MotorControl::readMultiTurnAngle()
{
    // Create a CAN message which requests the motor to send back its multi turn angle
    make_can_msg::readMultiTurnAngle(can_message.buf);
    
    // Send the CAN message
    sendMessage(can_message);

    // Wait 0.010 seconds for a reply from the motor
    delay_microseconds(1000.0);

    if(readMessage(received_can_message))
    {
        if((received_can_message.id == address) && (received_can_message.buf[0] == MOTOR_COMMAND_READ_MULTI_TURN_ANGLE))
        {
            int32_t multi_turn_angle_001lsb = 0;
            GOD_ANGLE = 0;
            *(uint8_t *)(& GOD_ANGLE) = received_can_message.buf[1];
            *((uint8_t *)(& GOD_ANGLE)+1) = received_can_message.buf[2];
            *((uint8_t *)(& GOD_ANGLE)+2) = received_can_message.buf[3];
            *((uint8_t *)(& GOD_ANGLE)+3) = received_can_message.buf[4];
            *((uint8_t *)(& GOD_ANGLE)+4) = received_can_message.buf[5];
            *((uint8_t *)(& GOD_ANGLE)+5) = received_can_message.buf[6];
            *((uint8_t *)(& GOD_ANGLE)+6) = received_can_message.buf[7];

            multi_turn_angle_001lsb 
            = received_can_message.buf[1]
            + received_can_message.buf[2]*256
            + received_can_message.buf[3]*655536
            + received_can_message.buf[4]*16777216
            + received_can_message.buf[5]*4294967296;
            //+ received_can_message.buf[6]*1099511627776
            //+ received_can_message.buf[7]*1099511627776*256;

            double multi_turn_angle_dps = multi_turn_angle_001lsb/100;
            multi_turn_angle = multi_turn_angle_dps*M_PI/(180.0*6.0);
            return true;
        }
        else
        {
            // Report that the reply we received was incorrect
            #if ROS_PRINT
                char id_str[3];
                char port_str[3];
                dtostrf(id, 1, 0, id_str);
                dtostrf(can_port_id, 1, 0, port_str);
                char warning_message[91];
                sprintf(warning_message, "Motor %s - CAN %s: In the function readMultiTurnAngle an incorrect reply was received", id_str, port_str);
                ROS_NODE_HANDLE.logwarn(warning_message);
            #else if SERIAL_PRINT
                errorMessage();
                Serial.println("In the function readMultiTurnAngle an incorrect reply was received");
            #endif

            return false;
        }
    }
    else
    {
        // Report that no reply was received
        #if ROS_PRINT
            char id_str[3];
            char port_str[3];
            dtostrf(id, 1, 0, id_str);
            dtostrf(can_port_id, 1, 0, port_str);
            char warning_message[75];
            sprintf(warning_message, "Motor %s - CAN %s: In the function readMultiTurnAngle no reply was received", id_str, port_str);
            ROS_NODE_HANDLE.logwarn(warning_message);
        #else if SERIAL_PRINT
            errorMessage();
            Serial.println("In the function readMultiTurnAngle no reply was received");
        #endif

        return false;    
    }
}

bool MotorControl::readMotorStatus()
{
    make_can_msg::readMotorStatus2(can_message.buf);

    sendMessage(can_message);

    delay_microseconds(10000.0);
    
    if(readMessage(received_can_message))
    {
        if((received_can_message.id == address) && (received_can_message.buf[0] == MOTOR_COMMAND_READ_MOTOR_STATUS_2))
        {
            readMotorControlCommandReply(received_can_message.buf);
            return true;
        }
        else
        {
            // Report that the reply we received was incorrect
            #if ROS_PRINT
                char id_str[3];
                char port_str[3];
                dtostrf(id, 1, 0, id_str);
                dtostrf(can_port_id, 1, 0, port_str);
                char warning_message[88];
                sprintf(warning_message, "Motor %s - CAN %s: In the function readMotorStatus an incorrect reply was received", id_str, port_str);
                ROS_NODE_HANDLE.logwarn(warning_message);
            #else if SERIAL_PRINT
                errorMessage();
                Serial.println("In the function readMotorStatus an incorrect reply was received");
            #endif

            return false;
        }
    }
    else
    {
        // Report that no reply was received
        #if ROS_PRINT
            char id_str[3];
            char port_str[3];
            dtostrf(id, 1, 0, id_str);
            dtostrf(can_port_id, 1, 0, port_str);
            char warning_message[78];
            sprintf(warning_message, "Motor %s - CAN %s: In the function readMotorStatus no reply was received", id_str, port_str);
            ROS_NODE_HANDLE.logwarn(warning_message);
        #else if SERIAL_PRINT
            errorMessage();
            Serial.println("In the function readMotorStatus no reply was received");
        #endif

        return false;
    }
}

void MotorControl::requestMotorStatus()
{
    // Create a CAN message which requests the motor to send back a reply
    make_can_msg::readMotorStatus2(can_message.buf);

    // Send the CAN message
    sendMessage(can_message);
}

bool MotorControl::readCompleteEncoderPosition()
{
    make_can_msg::readEncoderPosition(can_message.buf);

    sendMessage(can_message);

    delay_microseconds(10000.0);

    if(readMessage(received_can_message))
    {
        if((received_can_message.id == address) && (received_can_message.buf[0]) == MOTOR_COMMAND_READ_ENCODER_POSITION)
        {
            double encoder_with_offset = received_can_message.buf[3]*256 + received_can_message.buf[0]; 
            double encoder_raw = received_can_message.buf[5]*256 + received_can_message.buf[4];
            double encoder_offset = received_can_message.buf[7]*256 + received_can_message.buf[6];

            Serial.print("ENC W/O:\t"); Serial.print(encoder_with_offset); Serial.print("\t");
            Serial.print("ENC RAW:\t"); Serial.print(encoder_raw); Serial.print("\t");
            Serial.print("ENC OFF:\t"); Serial.print(encoder_offset); Serial.print("\t");
            Serial.println("");
        }
        else
        {
            #if ROS_PRINT
                char id_str[3];
                char port_str[3];
                dtostrf(id, 1, 0, id_str);
                dtostrf(can_port_id, 1, 0, port_str);
                char warning_message[96];
                sprintf(warning_message, "Motor %s - CAN %s: In function readCompleteEncoderPosition an incorrect reply was received", id_str, port_str);
                ROS_NODE_HANDLE.logwarn(warning_message);
            #else if SERIAL_PRINT
                errorMessage();
                Serial.println("getCompleteEncoderPosition - wrong reply received.");
            #endif

            return false;        
        }
    }
    else
    {
        #if ROS_PRINT
            char id_str[3];
            char port_str[3];
            dtostrf(id, 1, 0, id_str);
            dtostrf(can_port_id, 1, 0, port_str);
            char warning_message[86];
            sprintf(warning_message, "Motor %s - CAN %s: In function readCompleteEncoderPosition no reply was received", id_str, port_str);
            ROS_NODE_HANDLE.logwarn(warning_message);
        #else if SERIAL_PRINT
            errorMessage();
            Serial.println("getCompleteEncoderPosition - no reply received.");
        #endif

        return false;
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
    #if ROS_PRINT
        char id_str[3];
        char port_str[3];
        dtostrf(id, 1, 0, id_str);
        dtostrf(can_port_id, 1, 0, port_str);
        char log_message[40];
        sprintf(log_message, "Motor %s - CAN %s: PID Parameters:", id_str, port_str);
        ROS_NODE_HANDLE.loginfo(log_message);

        sprintf(log_message, "kp pos: %s", kp_pos);
        ROS_NODE_HANDLE.loginfo(log_message);

        sprintf(log_message, "ki pos: %s", ki_pos);
        ROS_NODE_HANDLE.loginfo(log_message);

        sprintf(log_message, "kp vel: %s", kp_speed);
        ROS_NODE_HANDLE.loginfo(log_message);

        sprintf(log_message, "ki vel: %s", ki_speed);
        ROS_NODE_HANDLE.loginfo(log_message);

        sprintf(log_message, "kp tor: %s", kp_torque);
        ROS_NODE_HANDLE.loginfo(log_message);

        sprintf(log_message, "ki tor: %s", ki_torque);
        ROS_NODE_HANDLE.loginfo(log_message);
    #else if SERIAL_PRINT
        Serial.print("Motor "); Serial.print(id); Serial.print(" - CAN "); Serial.print(can_port_id); Serial.println(" ");
        Serial.print("kp_pos:\t"); Serial.println(kp_pos);
        Serial.print("ki_pos:\t"); Serial.println(ki_pos);
        Serial.print("kp_vel:\t"); Serial.println(kp_speed);
        Serial.print("kp_vel:\t"); Serial.println(ki_speed);
        Serial.print("kp_tor:\t"); Serial.println(kp_torque);
        Serial.print("kp_tor:\t"); Serial.println(ki_torque);
    #endif
}

void MotorControl::printState()
{
    #if ROS_PRINT
        char id_str[3];
        char port_str[3];
        char pos_str[6];
        char vel_str[6];
        char tor_str[6];
        char mta_str[12];
        char enc_str[9];
        char imr_str[6];
        char GOD_BUF[30];

        dtostrf(id, 1, 0, id_str);
        dtostrf(can_port_id, 1, 0, port_str);
        dtostrf(position, 1, 3, pos_str);
        dtostrf(speed, 1, 3, vel_str);
        dtostrf(torque, 1, 3, tor_str);
        dtostrf(multi_turn_angle, 1, 6, mta_str);
        dtostrf(previous_encoder_value, 1, 1, enc_str);
        dtostrf(number_of_inner_motor_rotations, 1, 1, imr_str);
        dtostrf(GOD_ANGLE, 20, 5, GOD_BUF);
        char log_message[175];
        sprintf(log_message, "Motor %s, CAN %s - Pos: %s [rad], Vel: %s [rad/s], Tor: %s [Nm], MTA: %s, Enc: %s, IMR: %s, GOD: %s", 
            id_str, port_str, pos_str, vel_str, tor_str, mta_str, enc_str, imr_str, GOD_BUF);
        ROS_NODE_HANDLE.loginfo(log_message);
    #else if SERIAL_PRINT
        Serial.print("Motor "); Serial.print(id); Serial.print(", CAN "); Serial.print(can_port_id); Serial.print(" - ");
        Serial.print("Pos: "); Serial.print(position); Serial.print("[rad]\t");
        Serial.print("Vel: "); Serial.print(speed); Serial.print("[rad/s]\t");
        Serial.print("Tor: "); Serial.print(torque); Serial.print("[Nm]\t");
        Serial.print("MTA: "); Serial.print(multi_turn_angle); Serial.print("\t");
        Serial.print("Enc: "); Serial.print(previous_encoder_value); Serial.print("\t");
        Serial.print("IMR: "); Serial.print(number_of_inner_motor_rotations); Serial.print("\t");
        Serial.println("");
    #endif

}

void MotorControl::setTorqueCurrent(int _torque_current)
{
    _torque_current = -_torque_current;
    
    if(_torque_current > max_torque_current)
    {
        _torque_current = max_torque_current;
    }
    else if(_torque_current < -max_torque_current)
    {
        _torque_current = -max_torque_current;
    }

    //Serial.print(_torque_current); Serial.print("\t");

    make_can_msg::torqueCurrentControl(can_message.buf, _torque_current);

    sendMessage(can_message);
}

double MotorControl::innerMotorTurnCompleted(uint16_t _previous_encoder_value, uint16_t _new_encoder_value)
{
    // If old >> new a CW turn was completed
    if(_previous_encoder_value - _new_encoder_value > encoder_turn_threshold)
    {
        return -1.0;
    }
    // If new >> old a CCW turn was completed
    else if(_new_encoder_value - _previous_encoder_value > encoder_turn_threshold)
    {
        return 1.0;
    }
    // No turn was completed
    else
    {
        return 0.0;
    }
}

void MotorControl::sendMessage(CAN_message_t _can_message)
{
    if(can_port_id == CAN_PORT_1)
    {
        #if ROS_PRINT
            //ROS_NODE_HANDLE.loginfo("Sent message to PORT 1");
            can_port_1.write(_can_message);
        #endif
    }
    else if(can_port_id == CAN_PORT_2)
    {
        #if ROS_PRINT
            //ROS_NODE_HANDLE.loginfo("Sent message to PORT 2");
            can_port_2.write(_can_message);
        #endif
    }
    else
    {
        #if ROS_PRINT
            char id_str[3];
            char port_str[3];
            dtostrf(id, 1, 0, id_str);
            dtostrf(can_port_id, 1, 0, port_str);
            char error_message[86];
            sprintf(error_message, "Motor %s - CAN %s: In the function sendMessage, an invalid CAN port was selected", id_str, port_str);
            ROS_NODE_HANDLE.logerror(error_message);
        #else if SERIAL_PRINT
            errorMessage();
            Serial.println("In the function sendMessage, an invalid CAN port was selected");
        #endif

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
        #if ROS_PRINT
            char id_str[3];
            char port_str[3];
            dtostrf(id, 1, 0, id_str);
            dtostrf(can_port_id, 1, 0, port_str);
            char error_message[86];
            sprintf(error_message, "Motor %s - CAN %s: In the function readMessage, an invalid CAN port was selected", id_str, port_str);
            ROS_NODE_HANDLE.logerror(error_message);
        #else if SERIAL_PRINT
            errorMessage();
            Serial.println("In the function readMessage, an invalid CAN port was selected");
        #endif
    }
}

void MotorControl::errorMessage()
{
    Serial.print("ERROR - Motor "); Serial.print(id); 
    Serial.print(", CAN "); Serial.print(can_port_id); 
    Serial.print("-\t");
}
