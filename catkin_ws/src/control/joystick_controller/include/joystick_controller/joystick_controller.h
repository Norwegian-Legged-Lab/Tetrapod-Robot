#ifndef joystick_controller_h
#define joystick_controller_h

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "sensor_msgs/Joy.h"
#include "keyboard/Key.h"
#include <thread>
#include <fcntl.h>
#include <unistd.h>
#include <sys/select.h>

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
    enum ButtonStatus {PRESSED = 0, RELEASED = 1};

    enum KeyboardMapping 
    {
        KEY_UP = 273, // up
        KEY_DOWN = 274, // down
        KEY_LEFT = 276, // left
        KEY_RIGHT = 275, // right
        KEY_COUNTER_CLOCKWISE_ROTATION = 97, // a
        KEY_CLOCKWISE_ROTATION = 100, // d
        KEY_LINEAR_SPEED_INCREASE = 109, // m
        KEY_LINEAR_SPEED_DECREASE = 110, // n
        KEY_ANGULAR_RATE_INCREASE = 120,  // x
        KEY_ANGULAR_RATE_DECREASE = 122, // z
        KEY_PAUSE = 32 // space
    };

    public: JoystickController();

    public: virtual ~JoystickController();

    public: void initROS();

    public: void initThreads();

    public: void listenerThread();

    private: void joystickCallback(const sensor_msgs::JoyConstPtr &_msg);

    private: void keyboardButtonReleasedCallback(const keyboard::KeyConstPtr &_msg);

    private: void keyboardButtonPressedCallback(const keyboard::KeyConstPtr &_msg);

    private: ros::Subscriber keyboard_button_pressed_subscriber;

    private: ros::Subscriber keyboard_button_released_subscriber;

    private: ButtonStatus FORWARD = RELEASED;

    private: ButtonStatus BACKWARD = RELEASED;

    private: ButtonStatus LEFT = RELEASED;

    private: ButtonStatus RIGHT = RELEASED;

    private: ButtonStatus CLOCKWISE_ROTATION = RELEASED;

    private: ButtonStatus COUNTER_CLOCKWISE_ROTATION = RELEASED;

    private: ButtonStatus LINEAR_SPEED_INCREASE = RELEASED;

    private: ButtonStatus LINEAR_SPEED_DECREASE = RELEASED;

    private: ButtonStatus ANGULAR_RATE_INCREASE = RELEASED;

    private: ButtonStatus ANGULAR_RATE_DECREASE = RELEASED;

    private: ButtonStatus PAUSE = RELEASED;

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

    private: bool readyToChangeLinearMultiplier();

    private: bool readyToChangeRotationalMultiplier();

    private: double minimum_seconds_between_limit_change = 0.1;

    private: double time_of_last_linear_limit_change = 0.0;

    private: double time_of_last_rotational_limit_change = 0.0;
};

#endif