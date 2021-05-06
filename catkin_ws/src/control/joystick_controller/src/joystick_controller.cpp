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

    twist_command_publisher = nodeHandle->advertise<geometry_msgs::Twist>("/twist_command", 10);
}

void JoystickController::joystickCallback(const sensor_msgs::JoyConstPtr &_msg)
{
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
        changeLinearMultiplier(true);
    }
    else if((_msg->buttons[TRIANGLE] == 0) && (_msg->buttons[CROSS] == 1))
    {
        changeLinearMultiplier(false);
    }

    if((_msg->buttons[SQUARE] == 1) && (_msg->buttons[CIRCLE] == 0))
    {
        changeRotationalMultiplier(true);
    }
    else if((_msg->buttons[SQUARE] == 0) && (_msg->buttons[CIRCLE] == 1))
    {
        changeRotationalMultiplier(false);
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