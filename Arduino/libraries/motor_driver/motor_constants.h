#ifndef motor_constants_h
#define motor_constants_h

#define ROS_PRINT true
#define SERIAL_PRINT false

// Gear ratio between the inner DC motor and output shaft
const double GEAR_REDUCTION = 6.0;

// Angle in degrees traveled by the output shaft per revolution of the inner DC motor
const double ROTATION_DISTANCE = 60.0;

// Baudrate used by the motors
const int MOTOR_BAUD_RATE = 1000000;

// Number of encoder values for one revolution of the inner motor
const int MAX_ENCODER_VALUE = 65535; // 16 bit encoders are used in the motors 2^16 -> [0, 65536]

// Maximum possible torque current
const int MAX_TORQUE_CURRENT = 1200;

// Torque corresponding to maximum torque current
const double MAX_TORQUE = 26.88;

// The address of a motor with ID = n is given by: address of motor n = MOTOR_ADDRESS_OFFSET + n
#define MOTOR_ADDRESS_OFFSET 0x140

// The initial multi turn angle is either in the interval [0, 60] or >> 60
const double MULTI_TURN_THRESHOLD = 60.0; // 

// A list of the different motor command ids defined in the motor
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

#endif