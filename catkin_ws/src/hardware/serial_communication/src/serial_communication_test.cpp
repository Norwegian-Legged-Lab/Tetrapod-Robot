#include "ros/ros.h"

#include <libserial/SerialPort.h>
#include <libserial/SerialStream.h>

#include <string>
#include <stdio.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "serial_communication_node");

    ros::NodeHandle node_handle;

    ros::Rate loop_rate(1000000);

    LibSerial::SerialPort serial_port;

    serial_port.Open("/dev/ttyACM0");

    serial_port.SetBaudRate(LibSerial::BaudRate::BAUD_9600);

    serial_port.SetCharacterSize(LibSerial::CharacterSize::CHAR_SIZE_8);

    serial_port.SetFlowControl(LibSerial::FlowControl::FLOW_CONTROL_NONE);

    serial_port.SetStopBits(LibSerial::StopBits::STOP_BITS_1);

    const int NUMBER_OF_STATES = 8;

    const int BYTES_PER_STATE = 8;

    const int BUFFER_SIZE = NUMBER_OF_STATES*BYTES_PER_STATE;

    std::string recv_buffer;

    int timeout_ms = 10;

    /*
    while(ros::ok())
    {
        ros::spinOnce();
        
        loop_rate.sleep();

        if(serial_port.IsDataAvailable())
        {
            serial_port.Read(recv_buffer, BUFFER_SIZE, timeout_ms);
            

            ROS_INFO("%s", recv_buffer.c_str());
        }
        
    }
    */
   
    double send_time = ros::Time::now().toSec();
    serial_port.Write("Hello");
    while(!serial_port.IsDataAvailable())
    {
        loop_rate.sleep();
    }
    double recv_time = ros::Time::now().toSec();
    serial_port.Read(recv_buffer, BUFFER_SIZE, timeout_ms);
    
    ROS_INFO("Message received: %s", recv_buffer.c_str());
    ROS_INFO("Total time: %f", recv_time - send_time);

    serial_port.Close();

    return 0;
}