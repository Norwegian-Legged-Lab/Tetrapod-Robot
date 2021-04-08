#ifndef motor_control_h
#define motor_control_h

#include <Eigen30.h>
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

    /// \brief Class constructor for a MotorControl class.
    /// Motor ID and CAN port are set
    /// \param[in] _id ID of the motor [1 - 32]
    MotorControl(uint8_t _id, uint8_t _can_port_id, int _number_of_inner_motor_rotations);

    /// \brief Set the desired multiturn motor angle.
    /// \param[in] _angle Setpoint motor angle in radians
    void setPositionReference(double _angle);

    //void setPositionReferenceReply();
    bool readCompleteEncoderPosition();

    bool readMultiTurnAngle();

    /// \brief Set the desired motor speed.
    /// \param[in] _speed Setpoint motor speed in radians/second
    void setSpeedReference(double _speed);

    /// \brief Set the desired motor torque.
    /// \param[in] _torque Setpoint motor torque in Nm
    void setTorqueReference(double _torque);

    void setTorqueCurrent(int _torque_current);

    /// \brief Setting position, speed and torque all results in
    /// the same reply being sent from the motor.
    /// The states are stored in the private variables
    void readMotorControlCommandReply(unsigned char* _can_message);

    bool readMotorStatus();

    void requestMotorStatus();

    /// \brief Set the motor PID parameters and store them temporary in RAM
    /// \param[in] _PIDParameters Motor PID parameters 
    /// (kp_pos, ki_pos, kp_speed, ki_speed, kp_torque, ki_torque)   
    bool writePIDParametersToRAM
    (
        double _kp_pos,
        double _ki_pos,
        double _kp_speed,
        double _ki_speed,
        double _kp_torque,
        double _ki_torque
    ); 

    /// \brief Stop the motor
    /// The motor operating state and previously received control commands are not cleared
    /// If a new control command is received the motor will start moving again.
    bool stopMotor();

    /// \brief Stop the motor
    /// The motor operating state and previously received control commands are cleared
    /// If a new control command is received the motor will start moving again.
    bool turnOffMotor();

    /// \brief Read the motor PID parameters
    /// The private PID parameters are updated
    /// \return PID parameters as 6 dimensional vector
    /// (kp_pos, ki_pos, kp_speed, ki_speed, kp_torque, ki_torque)
    bool readPIDParameters();

    /// \brief Read the current motor position and update position
    /// \return True if the position was successfully read
    bool readCurrentPosition();

    // TODO change to camelcase - also in related functions
    uint8_t get_id(){return id;}

    double getPosition(){return position;}

    double getVelocity(){return speed;}

    double getTorque(){return torque;}

    double get_encoder_value(){return previous_encoder_value;}

    double get_multi_turn_angle(){return multi_turn_angle;}

    void getPIDParameters(
        double &_kp_pos,
        double &_ki_pos,
        double &_kp_speed,
        double &_ki_speed,
        double &_kp_torque,
        double &_ki_torque);  

    void printPIDParameters();

    void printState();
private:
    /// \brief Motor ID set through Serial configurator [1 - 32]
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
    /// This way you can detect turns
    uint16_t previous_encoder_value;

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