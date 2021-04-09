#ifndef make_can_msg_h
#define make_can_msg_h

#include "Arduino.h"
#include "motor_constants.h"
#include "utilities.h"
 
/// \brief The functions within this namespace converts the incomming 8-byte arrays to 
/// CAN data messages for RMDX motors.
/// Please see the attached pdf, RMD_servo_motor_control_protocol for full details.
/// NB! All messages are related to the inner motor, not the output shaft
namespace make_can_msg
{
    /// \brief The function creates a CAN data message that can be used to request the motor to 
    /// send back a CAN message containing the motor's PI parameters.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message
    void readPIDParameters(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to set the PI parameters of
    /// the motor in RAM. The parameters are deleted when the motor is turned off.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    /// \param [in] _k_p_position
    /// \param [in] _k_i_position
    /// \param [in] _k_p_velocity
    /// \param [in] _k_i_velocity
    /// \param [in] _k_p_torque
    /// \param [in] _k_i_torque
    void writePIDParametersToRAM(unsigned char* _can_message, 
        unsigned char _k_p_position, 
        unsigned char _k_i_position, 
        unsigned char _k_p_speed, 
        unsigned char _k_i_speed,
        unsigned char _k_p_torque,
        unsigned char _k_i_torque);

    /// \brief The function creates a CAN data message that can be used to set the PI parameters of
    /// the motor. The parameters are stored even when the motor is turned off. 
    /// NB! This should be avoided as the ROM memory will quickly wear out from writing to it. 
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message
    /// \param [in] _k_p_position
    /// \param [in] _k_i_position
    /// \param [in] _k_p_velocity
    /// \param [in] _k_i_velocity
    /// \param [in] _k_p_torque
    /// \param [in] _k_i_torque
    void writePIDParametersToROM(unsigned char* _can_message, 
        unsigned char _k_p_position, 
        unsigned char _k_i_position, 
        unsigned char _k_p_speed, 
        unsigned char _k_i_speed,
        unsigned char _k_p_torque,
        unsigned char _k_i_torque);

    /// \brief The function creates a CAN data message that can be used to request the motor to 
    /// send back a CAN message containing the motor's acceleration.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void readAcceleration(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to 
    /// set the acceleration of the motor. 
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void writeAccelerationToRAM(unsigned char* _can_message, int32_t _acceleration);

    /// \brief The function creates a CAN data message that can be used to request the motor to 
    /// send back a CAN message containing the motor's enocder data, raw encoder data, and encoder offset
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void readEncoderPosition(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to request the motor to 
    /// set the encoder position offset.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    /// \param [in] _encoder_offset The desired encoder offset
    void writeEncoderPositionOffset(unsigned char* _can_message, uint16_t _encoder_offset);

    /// \brief The function creates a CAN data message that can be used to request the motor to 
    /// set the current position as the zero position.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void writeCurrentPositionToROM(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to request the motor to 
    /// send back a CAN message containing the position of the motor even through multiple rotations.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void readMultiTurnAngle(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to request the motor to 
    /// send back a CAN message containing the position of the motor for a single rotation.
    /// The position is reset after each revolution of the motor.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void readCircleTurnAngle(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to request the motor to
    /// turn off its controller, clear its operating status and clear previously received control commands. 
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void motorOff(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to request the motor to
    /// stop its controller and clear previously received control commands. 
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void motorStop(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to request the motor to
    /// resume its control object from before it was stopped.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void motorRunning(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to request the motor to
    /// send back a CAN message containing its error status, voltage, and temperature.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void readMotorStatus1AndErrorFlag(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to request the motor to
    /// clear its error status.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void clearMotorErrorFlag(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to request the motor to
    /// send back a CAN message containing its temperature, torque current, speed, and encoder position.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void readMotorStatus2(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to request the motor to
    /// send back a CAN message cointaining its three phase currents.
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void readMotorStatus3(unsigned char* _can_message);

    /// \brief The function creates a CAN data message that can be used to 
    /// set the motor's torque current. After receiving the command the motor will reply with 
    /// a CAN message containing temperature, torque current, speed and encoder position. 
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void torqueCurrentControl(unsigned char* _can_message, int16_t _torque_current);

    /// \brief The function creates a CAN data message that can be used to 
    /// set the motor's speed. After receiving the command the motor will reply with 
    /// a CAN message containing temperature, torque current, speed and encoder position. 
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    void speedControl(unsigned char* _can_message, int32_t speed);

    /// \brief The function creates a CAN data message that can be used to 
    /// set the motor's multi turn position. After receiving the command the motor will reply with 
    /// a CAN message containing temperature, torque current, speed and encoder position. 
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    /// \param [in] _multiturn_angle The multi turn angle of the motor.
    void positionControl1(unsigned char* _can_message, int32_t _multiturn_angle);

    /// \brief The function creates a CAN data message that can be used to 
    /// set the motor's multi turn position with a maximum speed. 
    /// After receiving the command the motor will reply with 
    /// a CAN message containing temperature, torque current, speed and encoder position. 
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    /// \param [in] _multiturn_angle The multi turn angle of the motor.
    /// \param [in] _max_speed The maximum allowable speed of the motor.
    void positionControl2(unsigned char* _can_message, int32_t _multiturn_angle, uint16_t _max_speed);

    /// \brief The function creates a CAN data message that can be used to 
    /// set the motor's single turn position with a specified rotation direction. 
    /// After receiving the command the motor will reply with 
    /// a CAN message containing temperature, torque current, speed and encoder position. 
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    /// \param [in] _singleturn_angle The single turn angle of the motor.
    /// \param [in] _spin_direction The desired rotation direction of the motor. 0 = CW, 1 = CCW
    void positionControl3(unsigned char* _can_message, uint16_t _singleturn_angle, uint8_t _spin_direction);

    /// \brief The function creates a CAN data message that can be used to 
    /// set the motor's single turn position with a specified rotation direction and maximum speed. 
    /// After receiving the command the motor will reply with 
    /// a CAN message containing temperature, torque current, speed and encoder position. 
    /// \param [in] _can_message A CAN data array which is turned into the appropriate message.
    /// \param [in] _singleturn_angle The single turn angle of the motor.
    /// \param [in] _spin_direction The desired rotation direction of the motor. 0 = CW, 1 = CCW
    /// \param [in] _max_speed The maximum allowable speed of the  motor.
    void positionControl4(unsigned char* _can_message, uint16_t _single_turn_angle, uint8_t _spin_direction, uint16_t max_speed);
}

#endif