#include "ros/ros.h"
#include <ros/console.h>

#include "single_motor_controller/single_motor_controller.h"

#include <math_utils/angle_utils.h>

int main(int argc, char **argv)
{
    enum ControlType {position, velocity, torque};

    // Configuration Start

    // Set Gains
    double K_P_POS = 10.0;
    double K_I_POS = 10.0;

    double K_P_VEL = 50.0;
    double K_I_VEL = 50.0;

    double K_P_TOR = 100.0;
    double K_I_TOR = 100.0;

    // Choose test mode
    ControlType TEST_MODE = ControlType::position;
    //ControlType TEST_MODE = ControlType::velocity;
    //ControlType TEST_MODE = ControlType::torque;

    // Only used if the control type is position control
    double SETPOINT_POSITION = math_utils::degToRad(180); // [rad]

    // Only used if the control type is velocity control
    double SETPOINT_VELOCITY = math_utils::degToRad(360); // [rad/s]

    // Only used if the control type is torque control
    double SETPOINT_TORQUE = 10; // [Nm]

    // Rate of which control messages are being sent
    double PUBLISH_FREQUENCY = 200.0; // [1/s]

    // Time of the step reference signal
    double STEP_START_TIME = 0.2; // [s]

    // Duration the step reference signal is high
    double STEP_DURATION = 1.0; // [s]


    // Configuration End

    // Create single motor controller instance
    SingleMotorController controller(PUBLISH_FREQUENCY);

    // Setup the ROS communication
    controller.initROS();

    // Set the PID Parameters of the motors
    controller.initializeMotor(K_P_POS, K_I_POS, K_P_VEL, K_I_VEL, K_P_TOR, K_I_TOR);

    // Set the rate for which we check for incomming messages
    ros::Rate check_for_messages_rate(1);

    // Set the command rate
    ros::Rate send_command_rate(PUBLISH_FREQUENCY);
    
    // Make sure we have received initial states from the motor
    while(!controller.initialStateReceived())
    {
        controller.checkForNewMessages();
        ROS_INFO("Waiting for state");
        controller.printAll();
        check_for_messages_rate.sleep();
    }
    
    // Wait for the start signal
    while(!controller.readyToProceed())
    {
        controller.checkForNewMessages();
        ROS_INFO("Waiting for ready to proceed");
        controller.printAll();
        check_for_messages_rate.sleep();
    }

    // If we are using position control we want the position to start at zero
    while(abs(controller.getPosition()) > math_utils::degToRad(0.5))
    {
        controller.checkForNewMessages();
        ROS_INFO("Trying to move position to zero");
        controller.setPositionDirectly(0.0);
        controller.printAll();
        send_command_rate.sleep();
    }

    // Let some time pass before making the step response
    for(int i = 0; i < STEP_START_TIME*PUBLISH_FREQUENCY; i++)
    {
        controller.checkForNewMessages();
        controller.writeToLog();
        controller.printAll();
        send_command_rate.sleep();
    }
    
    // Apply the desired step torque for a fixed duration and log the states
    for(int i = 0; i < STEP_DURATION*PUBLISH_FREQUENCY; i++)
    {
        controller.checkForNewMessages();

        switch (TEST_MODE)
        {
            case ControlType::position:
            {
                controller.setPositionDirectly(SETPOINT_POSITION);
                break;
            }    
            case ControlType::velocity:
            {
                controller.setVelocityDirectly(SETPOINT_VELOCITY);
                break;
            }
            case ControlType::torque:
            {
                controller.setTorqueDirectly(SETPOINT_TORQUE);
                break;
            }
            default:
            {
                break;
            }
        }

        controller.writeToLog();
        controller.printAll();
        send_command_rate.sleep();
    }
    
    // Apply zero torque until the program shuts down
    /*
    for (int i = 0; i < 100; i++)
    {
        controller.checkForNewMessages();
        controller.setVelocityDirectly(0.0);
        controller.printAll();
        send_command_rate.sleep();
    }
    */

    return 0;
}

