#ifndef joystick_controller_h
#define joystick_controller_h

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "sensor_msgs/Joy.h"

#define BUTTON_ERROR 0.01

enum JoyAxisIndices 
{
    RIGHT_STICK_UD = 4, // Up is positive (1)
    RIGHT_STICK_LR = 3, // Left is positive (1)
    LEFT_STICK_UD = 1, // Up is positive (1)
    LEFT_STICK_LR = 0, // Left is positive (1)
    R2 = 5, // No effort is positive (1)
    L2 = 2, // No effort is positive (1)
};

enum JoyButtonIndices
{
    R1 = 5,
    R2_BUTTON = 7,
    R3 = 12,
    L1 = 4,
    L2_BUTTON = 6,
    L3 = 11,
    DPAD_RIGHT = 16,
    DPAD_LEFT = 15,
    DPAD_UP = 13,
    DPAD_DOWN = 14,
    START = 9,
    SELECT = 8,
    TRIANGLE = 2,
    CIRCLE = 1,
    CROSS = 0,
    SQUARE = 3
};

class JoystickController
{
    public: JoystickController();

    public: virtual ~JoystickController(){};

    public: void initROS();

    private: void joystickCallback(const sensor_msgs::JoyConstPtr &_msg);

    private: void changeLinearMultiplier(bool _increase);

    private: void changeRotationalMultiplier(bool _increase);

    private: std::unique_ptr<ros::NodeHandle> nodeHandle;

    private: ros::Subscriber joystick_subscriber;

    private: ros::Publisher twist_command_publisher;

    private: double linear_rate_multiplier = 0.2;

    private: double linear_rate_multiplier_step = 0.1;

    private: double linear_rate_multiplier_min = 0.2;

    private: double linear_rate_multiplier_max  = 1.0;

    private: double rotational_rate_multiplier = 0.2;

    private: double rotational_rate_multiplier_step = 0.1;

    private: double rotational_rate_multiplier_max = 1.0;

    private: double rotational_rate_multiplier_min = 0.2;

    private: geometry_msgs::Twist twist_command_message;

    private: double pause = false;

    public: bool isControllerPaused(){return pause;}

    public: void publishTwistCommand();
};

#endif