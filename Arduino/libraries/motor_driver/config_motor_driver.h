#ifndef motor_driver_config_h
#define motor_driver_config_h

#include "Arduino.h"

#define SERIAL_PRINT false

#define FRONT_LEGS true
#define REAR_LEGS false

const double k_p_pos = 20.0;
const double k_i_pos = 20.0;
const double k_p_vel = 30.0;
const double k_i_vel = 30.0;
const double k_p_tor = 50.0;
const double k_i_tor = 50.0;

// Set the PID gains for the motors
static int K_P_POS[6] = {k_p_pos, k_p_pos, k_p_pos, k_p_pos, k_p_pos, k_p_pos};
static int K_I_POS[6] = {k_i_pos, k_i_pos, k_i_pos, k_i_pos, k_i_pos, k_i_pos};
static int K_P_VEL[6] = {k_p_vel, k_p_vel, k_p_vel, k_p_vel, k_p_vel, k_p_vel};
static int K_I_VEL[6] = {k_i_vel, k_i_vel, k_i_vel, k_i_vel, k_i_vel, k_i_vel};
static int K_P_TOR[6] = {k_p_tor, k_p_tor, k_p_tor, k_p_tor, k_p_tor, k_p_tor};
static int K_I_TOR[6] = {k_i_tor, k_i_tor, k_i_tor, k_i_tor, k_i_tor, k_i_tor};


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