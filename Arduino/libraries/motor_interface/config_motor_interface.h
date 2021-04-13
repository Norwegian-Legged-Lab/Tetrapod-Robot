#ifndef motor_interface_config_h
#define motor_interface_config_h


// Hip pitch offset 0.371 rad
 
#define position_offset_motor1 0.5236
#define position_offset_motor2 0.0 
#define position_offset_motor3 0.0

#define initial_motor_rotations_motor1 0
#define initial_motor_rotations_motor2 0
#define initial_motor_rotations_motor3 0

static double POSITION_OFFSET[3] = 
    {
        position_offset_motor1, 
        position_offset_motor2, 
        position_offset_motor3
    };

static int INITIAL_NUMBER_OF_MOTOR_ROTATIONS[3] = 
    {
        initial_motor_rotations_motor1, 
        initial_motor_rotations_motor2,
        initial_motor_rotations_motor3
    };

#endif