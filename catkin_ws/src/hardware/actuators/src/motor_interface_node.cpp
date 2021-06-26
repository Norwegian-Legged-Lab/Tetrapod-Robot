#include "ros/ros.h"

#include "actuators/motor_interface.h"

int main(int argc, char **argv)
{
    MotorInterface motor_interface(3);

    ros::spin();

    return 0;
}