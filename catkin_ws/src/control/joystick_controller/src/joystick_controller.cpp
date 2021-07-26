#include "joystick_controller/joystick_controller.h"

JoystickController::JoystickController()
{
    twist_command_message.linear.x = 0.0;
    twist_command_message.linear.y = 0.0;
    twist_command_message.linear.z = 0.0;

    twist_command_message.angular.x = 0.0;
    twist_command_message.angular.y = 0.0;
    twist_command_message.angular.z = 0.0;
}

JoystickController::~JoystickController()
{
    nodeHandle->shutdown();

    //this->listenerThread.clear();
    //this->listenerThread.disable();
    //nodeHandle->keyboardListenerThread.join();
}

void JoystickController::initROS()
{
    if(!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init
        (
            argc, 
            argv,
            "joystick_controller_node",
            ros::init_options::NoSigintHandler
        );
    }

    nodeHandle.reset(new ros::NodeHandle("joystick_controller_node"));

    joystick_subscriber = nodeHandle->subscribe
    (
        "/joy",
        10,
        &JoystickController::joystickCallback,
        this
    );

    keyboard_button_pressed_subscriber = nodeHandle->subscribe
    (
        "/keyboard/keydown",
        10,
        &JoystickController::keyboardButtonPressedCallback,
        this
    );

    keyboard_button_released_subscriber = nodeHandle->subscribe
    (
        "/keyboard/keyup",
        10,
        &JoystickController::keyboardButtonReleasedCallback,
        this
    );

    twist_command_publisher = nodeHandle->advertise<geometry_msgs::Twist>("/twist_command", 1);
}


bool JoystickController::readyToChangeLinearMultiplier()
{
    if(minimum_seconds_between_limit_change + time_of_last_linear_limit_change < ros::Time::now().toSec())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool JoystickController::readyToChangeRotationalMultiplier()
{
    if(minimum_seconds_between_limit_change + time_of_last_rotational_limit_change < ros::Time::now().toSec())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void JoystickController::joystickCallback(const sensor_msgs::JoyConstPtr &_msg)
{
    double t = ros::Time::now().toSec();

    if(_msg->buttons[START] == 1)
    {
        if(pause == false)
        {
            pause = true;
        }
        else
        {
            pause = false;
        }
    }

    if((_msg->buttons[TRIANGLE] == 1) && (_msg->buttons[CROSS] == 0))
    {
        if(readyToChangeLinearMultiplier())
        {
            time_of_last_linear_limit_change = ros::Time::now().toSec();
            changeLinearMultiplier(true);
        }
    }
    else if((_msg->buttons[TRIANGLE] == 0) && (_msg->buttons[CROSS] == 1))
    {
        if(readyToChangeLinearMultiplier())
        {
            time_of_last_linear_limit_change = ros::Time::now().toSec();
            changeLinearMultiplier(false);
        }
    }

    if((_msg->buttons[SQUARE] == 1) && (_msg->buttons[CIRCLE] == 0))
    {
        if(readyToChangeRotationalMultiplier())
        {
            time_of_last_rotational_limit_change = ros::Time::now().toSec();
            changeRotationalMultiplier(true);
        }
    }
    else if((_msg->buttons[SQUARE] == 0) && (_msg->buttons[CIRCLE] == 1))
    {
        if(readyToChangeRotationalMultiplier())
        {
            time_of_last_rotational_limit_change = ros::Time::now().toSec();
            changeRotationalMultiplier(false);
        }
    }

    twist_command_message.linear.x = _msg->axes[LEFT_STICK_UD]*linear_rate_multiplier;
    twist_command_message.linear.y = _msg->axes[RIGHT_STICK_LR]*linear_rate_multiplier;
    
    if((_msg->buttons[L1] == 1) && (_msg->buttons[R1] == 0))
    {
        twist_command_message.angular.z = rotational_rate_multiplier;
    }
    else if((_msg->buttons[R1] == 1) && (_msg->buttons[L1] == 0))
    {
        twist_command_message.angular.z = -rotational_rate_multiplier;
    }
    else
    {
        twist_command_message.angular.z = 0.0;
    }

    if(_msg->buttons[SELECT] == 1)
    {
        std_srvs::Empty shutdownMotorInterfaceSrv;
        //ros::service::call("/my_robot/motor_interface/shutdown", shutdownMotorInterfaceSrv);
        ros::service::call("/my_robot/reset_simulation", shutdownMotorInterfaceSrv);
    }
}

void JoystickController::keyboardButtonPressedCallback(const keyboard::KeyConstPtr &_msg)
{
    switch (_msg->code)
    {
    case KEY_UP:
        FORWARD = PRESSED;
        twist_command_message.linear.x = linear_rate_multiplier;
        break;
    case KEY_DOWN:
        BACKWARD = PRESSED;
        twist_command_message.linear.x =-linear_rate_multiplier;
        break;
    case KEY_RIGHT:
        RIGHT = PRESSED;
        twist_command_message.linear.y =-linear_rate_multiplier;
        break;
    case KEY_LEFT:
        LEFT = PRESSED;
        twist_command_message.linear.y = linear_rate_multiplier;
        break;
    case KEY_CLOCKWISE_ROTATION:
        CLOCKWISE_ROTATION = PRESSED;
        twist_command_message.angular.z =-rotational_rate_multiplier;
        break;
    case KEY_COUNTER_CLOCKWISE_ROTATION:
        COUNTER_CLOCKWISE_ROTATION = PRESSED;
        twist_command_message.angular.z = rotational_rate_multiplier;
        break;
    case KEY_LINEAR_SPEED_INCREASE:
        LINEAR_SPEED_INCREASE = PRESSED;
        changeLinearMultiplier(true);
        if(FORWARD == PRESSED)
        {
            twist_command_message.linear.x = linear_rate_multiplier;
        }
        else if(BACKWARD == PRESSED)
        {
            twist_command_message.linear.x =-linear_rate_multiplier;
        }

        if(LEFT == PRESSED)
        {
            twist_command_message.linear.y = linear_rate_multiplier;
        }
        else if(RIGHT == PRESSED)
        {
            twist_command_message.linear.y =-linear_rate_multiplier;
        }
        break;
    case KEY_LINEAR_SPEED_DECREASE:
        LINEAR_SPEED_DECREASE = PRESSED;
        changeLinearMultiplier(false);
        if(FORWARD == PRESSED)
        {
            twist_command_message.linear.x = linear_rate_multiplier;
        }
        else if(BACKWARD == PRESSED)
        {
            twist_command_message.linear.x =-linear_rate_multiplier;
        }

        if(LEFT == PRESSED)
        {
            twist_command_message.linear.y = linear_rate_multiplier;
        }
        else if(RIGHT == PRESSED)
        {
            twist_command_message.linear.y =-linear_rate_multiplier;
        }
        break;
    case KEY_ANGULAR_RATE_INCREASE:
        ANGULAR_RATE_INCREASE = PRESSED;
        changeRotationalMultiplier(true);
        if(COUNTER_CLOCKWISE_ROTATION)
        {
            twist_command_message.angular.z = rotational_rate_multiplier;
        }
        else if(CLOCKWISE_ROTATION)
        {
            twist_command_message.angular.z =-rotational_rate_multiplier;
        } 
        break;
    case KEY_ANGULAR_RATE_DECREASE:
        ANGULAR_RATE_DECREASE = PRESSED;
        changeRotationalMultiplier(false);
        if(COUNTER_CLOCKWISE_ROTATION)
        {
            twist_command_message.angular.z = rotational_rate_multiplier;
        }
        else if(CLOCKWISE_ROTATION)
        {
            twist_command_message.angular.z =-rotational_rate_multiplier;
        } 
        break;
    case KEY_PAUSE:
        PAUSE = RELEASED;
        if(pause == false)
        {
            pause = true;
        }
        else
        {
            pause = false;
        }
        break;
    default:
        break;
    }
}

void JoystickController::keyboardButtonReleasedCallback(const keyboard::KeyConstPtr &_msg)
{
    switch (_msg->code)
    {
    case KEY_UP:
        FORWARD = RELEASED;
        twist_command_message.linear.x = 0.0;
        break;
    case KEY_DOWN:
        BACKWARD = RELEASED;
        twist_command_message.linear.x = 0.0;
        break;
    case KEY_RIGHT:
        RIGHT = RELEASED;
        twist_command_message.linear.y = 0.0;
        break;
    case KEY_LEFT:
        LEFT = RELEASED;
        twist_command_message.linear.y = 0.0;
        break;
    case KEY_CLOCKWISE_ROTATION:
        CLOCKWISE_ROTATION = RELEASED;
        twist_command_message.angular.z = 0.0;
        break;
    case KEY_COUNTER_CLOCKWISE_ROTATION:
        COUNTER_CLOCKWISE_ROTATION = RELEASED;
        twist_command_message.angular.z = 0.0;
        break;
    default:
        break;
    }
}

void JoystickController::changeLinearMultiplier(bool _increase)
{
    if(_increase && (linear_rate_multiplier < linear_rate_multiplier_max - BUTTON_ERROR))
    {
        linear_rate_multiplier += linear_rate_multiplier_step;
    }
    else if(!_increase && (linear_rate_multiplier > linear_rate_multiplier_min + BUTTON_ERROR))
    {
        linear_rate_multiplier -= linear_rate_multiplier_step;
    }
}

void JoystickController::changeRotationalMultiplier(bool _increase)
{
    if(_increase && (rotational_rate_multiplier < rotational_rate_multiplier_max - BUTTON_ERROR))
    {
        rotational_rate_multiplier += rotational_rate_multiplier_step;
    }
    else if(!_increase && (rotational_rate_multiplier > rotational_rate_multiplier_min + BUTTON_ERROR))
    {
        rotational_rate_multiplier -= rotational_rate_multiplier_step;
    }
}

void JoystickController::publishTwistCommand()
{
    twist_command_publisher.publish(twist_command_message);
}