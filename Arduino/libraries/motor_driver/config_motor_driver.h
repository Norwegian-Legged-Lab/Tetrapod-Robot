#ifndef motor_driver_config_h
#define motor_driver_config_h

#include "Arduino.h"

#define ROS_PRINT false
#define SERIAL_PRINT true

#define FRONT_LEGS true
#define REAR_LEGS false

// Calculate offsets based on legs

// An offset of -30 degrees is added to each actuator to compensate for the encoder zero position 

#if (FRONT_LEGS)
    #define position_offset_motor_1 M_PI/2.0 // 45 degrees
    #define position_offset_motor_2 0.0
    #define position_offset_motor_3 0.0
    #define position_offset_motor_4 -M_PI/4.0 // -45 degrees
    #define position_offset_motor_5 0.0
    #define position_offset_motor_6 0.0
#elif(REAR_LEGS)
    #define position_offset_motor_1 0.0
    #define position_offset_motor_2 0.0
    #define position_offset_motor_3 0.0
    #define position_offset_motor_4 0.0
    #define position_offset_motor_5 0.0
    #define position_offset_motor_6 0.0
#else
    #define position_offset_motor_1 0.0
    #define position_offset_motor_2 0.0
    #define position_offset_motor_3 0.0
    #define position_offset_motor_4 0.0
    #define position_offset_motor_5 0.0
    #define position_offset_motor_6 0.0
#endif

static double POSITION_OFFSET[6] = 
{
    position_offset_motor_1, 
    position_offset_motor_2, 
    position_offset_motor_3,
    position_offset_motor_4,
    position_offset_motor_5,
    position_offset_motor_6 
};

static int INITIAL_NUMBER_OF_MOTOR_ROTATIONS[6] = {0, 0, 0, 0, 0, 0};

#endif