#include "ros/ros.h"

#include "actuators/motor_interface.h"

int main(int argc, char **argv)
{
    MotorInterface motor_interface(3);

    //ros::spin();

    // Temporary solution
    // START
    ros::Rate loop_rate(10000);

    while(ros::ok())
    {
        // Check for Serial replies
        motor_interface.ProcessSerialMessages();

        // Check for incomming command messages
        ros::spinOnce();

        // Sleep for a short duration
        loop_rate.sleep();
    }
    // END
    

    return 0;
}