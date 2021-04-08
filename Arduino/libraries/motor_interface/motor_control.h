#ifndef motor_control_h
#define motor_control_h

#include "motor_constants.h"
#include "teensy_can_ports.h"
#include "make_can_msg.h"
#include "FlexCAN_T4.h"
#include <math.h>
#include "utilities.h"

class MotorControl
{
public:
    /// \brief Default constructor needed for initializing array
    MotorControl(){}

    /// \brief Constructor for a MotorControl object.
    /// Motor ID and CAN port are set
    /// \param[in] _id ID of the motor [1 - 32]
    MotorControl(uint8_t _id, uint8_t _can_port_id, int _number_of_inner_motor_rotations);

    /// \brief Read the motor PI parameters and update the private PI values.
    /// \return If the PI parameters were successfully read, return true.
    /// Otherwise return false.
    bool readPIDParameters();

    /// \brief Set the motor PI parameters and store them temporary in RAM
    /// \param[in] _kp_pos Desired proportional position gain
    /// \param[in] _ki_pos Desired integral position gain
    /// \param[in] _kp_speed Desired proportional speed gain
    /// \param[in] _ki_speed Desired integral speed gain
    /// \param[in] _kp_torque Desired proportional torque gain
    /// \param[in] _ki_torque Desired integral torque gain  
    /// \return If the PI parameters were successfully set true is returned.
    /// Otherwise false is returned. 
    bool writePIDParametersToRAM
    (
        double _kp_pos,
        double _ki_pos,
        double _kp_speed,
        double _ki_speed,
        double _kp_torque,
        double _ki_torque
    ); 

    /// \brief Set the desired multi turn motor angle.
    /// \param[in] _angle Setpoint motor angle in radians
    void setPositionReference(double _angle);

    /// \brief Set the desired motor speed.
    /// \param[in] _speed Setpoint motor speed in radians/second
    void setSpeedReference(double _speed);

    /// \brief Set the desired motor torque.
    /// \param[in] _torque Setpoint motor torque in Nm
    void setTorqueReference(double _torque);

    /// \brief Set the desired motor torque current. Scales linearly with torque.
    /// \param[in] _torque_current Setpoint torque current
    void setTorqueCurrent(int _torque_current);

    /// \brief The state variables position, velocity, and torque are updated based on
    /// the latest information from the motor.
    /// \param[in] _can_message An 8 dimensional array containing the data of a CAN message
    void readMotorControlCommandReply(unsigned char* _can_message);

    /// \brief The motor stops exerting a control output.
    /// The motor will remain idle until a new control command or motor resume command is received.
    /// \return If the motor is successfully stopped true is returned, otherwise false.
    bool stopMotor();

    /// \brief The motor stops exerting a control output.
    /// The motor's operating state and previously received control commands are cleared.
    /// If a new control command is received the motor will start moving again.
    /// \return If the motor is successfully turned off true is returned, otherwise false.
    bool turnOffMotor();

    /// \brief All the encoder data from the motor is read and printed.
    /// This includes the encoder value, raw encoder value, and encoder offset.
    /// This is mainly for debugging.
    /// \return If the encoder data was successfully read true is returned, otherwise false.
    bool readCompleteEncoderPosition();

    /// \brief The multi turn angle of the motor updated.
    /// \return If the multi turn angle was successfully updated return true, otherwise false.
    bool readMultiTurnAngle();

    /// \brief A request is sent to the motor asking it to send back its state. The private state varibles
    /// position, velocity, and torque are then updated.
    /// \return If the private state variables were successfully updated return true, otherwise return false.
    bool readMotorStatus();

    /// \brief A request is sent to the motor asking it to send back its state, position, velocity, and torque.
    void requestMotorStatus();

    /// \brief Read the current motor position and update the position state variable.
    /// \return True if the position was successfully read
    bool readCurrentPosition();

    // TODO change to camelcase - also in related functions
    /// \brief Return the ID of the MotorClass object.
    /// \return The ID of the MotorClass object.
    uint8_t get_id(){return id;}

    /// \brief Return the position of the MotorClass object.
    /// \return The position of the MotorClass object.
    double getPosition(){return position;}

    /// \brief Return the velocity of the MotorClass object.
    /// \return The velocity of the MotorClass object.
    double getVelocity(){return speed;}

    /// \brief Return the torque of the MotorClass object.
    /// \return The torque of the MotorClass object.
    double getTorque(){return torque;}

    /// \brief Return the latest received encoder value from the motor
    /// \return The latest received encoder value from the motor
    double get_encoder_value(){return previous_encoder_value;}

    /// \brief Return the latest received multi turn angle from the motor
    /// \return The latest received received multi turn angle from the motor
    double get_multi_turn_angle(){return multi_turn_angle;}

    /// \brief The input parameters are updated to match the PI parameters of the motor
    /// \param[in] _kp_pos Proportional position gain
    /// \param[in] _ki_pos Integral position gain
    /// \param[in] _kp_speed Proportional speed gain
    /// \param[in] _ki_speed Integral speed gain
    /// \param[in] _kp_torque Proportional torque gain
    /// \param[in] _ki_torque Integral torque gain  
    void getPIDParameters(
        double &_kp_pos,
        double &_ki_pos,
        double &_kp_speed,
        double &_ki_speed,
        double &_kp_torque,
        double &_ki_torque);  

    /// \brief The function prints the PI parameters of the motor
    void printPIDParameters();

    /// \brief The ID, encoder value, multi turn angle, position, speed and torque 
    /// of the motor are printed
    void printState();
private:
    /// \brief Motor ID set through the Serial configurator [1 - 32]
    uint8_t id;
    
    /// \brief Motor address = ID + 0x140. Declared for convenience
    uint16_t address;

    /// \brief Used to decide which CAN port to use. Possible values {1, 2}
    uint8_t can_port_id;

    /// \brief Motor PID Parameters
    double kp_pos;
    double ki_pos;
    double kp_speed;
    double ki_speed;
    double kp_torque;
    double ki_torque;

    /// \brief Number of rotations of the inner motor during startup
    /// This is needed to create position commands
    double initial_number_of_inner_motor_rotations;

    /// \brief Number of rotations of the built-in motor, 
    /// not the output-shaft
    double number_of_inner_motor_rotations;

    /// \brief Keep track of previous encoder position.
    /// This way you can detect turns. See innerMotorTurnCompleted().
    uint16_t previous_encoder_value;

    /// \brief This parameter is used to decide the setpoint position offset.
    double multi_turn_angle;

    /// \brief If the motor is initialized in certain positions the 
    /// setPosition function will have zero offset of 60 degrees. 
    // This parameters keeps track of whether or not this is the case.
    uint8_t target_position_offset;

    /// \brief Latest measured position of the shaft in radians
    double position;

    /// \brief Latest measured speed of the shaft in radians/second
    double speed;

    /// \brief Latest measured shaft torque in Nm
    double torque;

    /// \brief Latest measured temperature of the motor in degree Celsius
    double temperature;
    
    /// \brief CAN message for this motor.
    /// Only buf field is set for every message sent
    CAN_message_t can_message;

    /// \brief CAN message object used to receive incomming CAN messages
    CAN_message_t received_can_message;

    // Motor specific parameters

    /// \brief The torque in Newton meter has to lie in the interval
    /// [-max_torque, max_torque]
    double max_torque;

    /// \brief All torque values are scaled to the interval 
    /// [-max_torque_current, max_torque_current]
    int max_torque_current;

    /// \brief The 16 bit encoder measures the position 
    /// of the inner DC motor, not the shaft
    uint16_t max_encoder_value;

    /// \brief If the change in encoder value is larger than this
    /// it is safe to assume that the inner motor completed a turn
    uint16_t encoder_turn_threshold;

    /// \brief This function checks if the inner motor completed a turn.
    /// Depending on the difference between the new and previous encoder value
    /// we can determine if the motor completed a turn a direction or not
    /// \param[in] _previous_encoder_value The previously measured encoder value
    /// \param[in] _new_encoder_value The newly measured encoder value
    /// \return If new << old return 1, if old << new return -1, else return 0
    double innerMotorTurnCompleted(uint16_t _previous_encoder_value, uint16_t _new_encoder_value);

    /// \brief This function ensures that the message is sent to the correct CAN port
    void sendMessage(CAN_message_t _can_message);

    /// \brief This function ensures that the message on the correct CAN port is read
    int readMessage(CAN_message_t &_can_message);

    // TODO Remove
    void errorMessage();
};

#endif