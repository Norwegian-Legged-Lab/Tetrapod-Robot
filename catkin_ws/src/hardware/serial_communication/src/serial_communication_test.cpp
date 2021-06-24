#include "ros/ros.h"

#include <libserial/SerialPort.h>
#include <libserial/SerialStream.h>

#include <string>
#include <stdio.h>
#include <iomanip>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "serial_communication_node");

    ros::NodeHandle node_handle;

    ros::Rate loop_rate(1000);
    
    LibSerial::SerialPort serial_port;

    serial_port.Open("/dev/ttyACM0");

    serial_port.SetBaudRate(LibSerial::BaudRate::BAUD_9600);

    serial_port.SetCharacterSize(LibSerial::CharacterSize::CHAR_SIZE_8);

    serial_port.SetFlowControl(LibSerial::FlowControl::FLOW_CONTROL_NONE);

    serial_port.SetStopBits(LibSerial::StopBits::STOP_BITS_1);

    const int NUMBER_OF_STATES = 8;

    const int BYTES_PER_STATE = 8;

    const int BUFFER_SIZE = NUMBER_OF_STATES*BYTES_PER_STATE;

    int timeout_ms = 1000;
    

    std::string recv_buffer = "";

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

    /*
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
    */

    /*
    double arr[3] = {0.421, 23.09991, 3.0};

    std::ostringstream stream_object;

    stream_object << std::fixed;

    stream_object << std::width

    stream_object << std::setprecision(4);

    recv_buffer += "toString(8.0);";
    recv_buffer += " ";
    recv_buffer += "toString(7.0);";


    std::cout << recv_buffer << "\n";
    */

    /*
    int data_elements = 3;

    int data_size = 8;

    char tx_buffer[data_elements*data_size];

    double data[data_elements] = {2.045, 105.632, 3.103993};

    for(int i = 0; i < data_elements; i++)
    {
        for(int j = 0; j < data_size; j++)
        {
            tx_buffer[i*data_size + j] = ((char *)data)[j];
        }
    }
    */

    int n_motors = 3;

    int msg_size = 32;

    char send_frame[msg_size];

    double my_new_fucking_data[n_motors + 1] = {-100.66, 12.338954, -0.3442234, 3.9291};

    for (int i = 0; i < msg_size; i++)
    {
        send_frame[i] = ((char *) my_new_fucking_data)[i];
    }

    double buffer[n_motors];

    for(int i = 0; i < n_motors; i++)
    {
        double val;

        val = *((double*)send_frame + i + 1);

        buffer[i] = val;
    }
    /*
    ROS_INFO("%f", buffer[0]);
    ROS_INFO("%f", buffer[1]);
    ROS_INFO("%f", buffer[2]);
    */
    //std::string buffer(1, tx_buffer);

    serial_port.Write(send_frame);
    /*
    ROS_INFO("Write complete");

    while(!serial_port.IsDataAvailable())
    {
        loop_rate.sleep();
    }

    ROS_INFO("Reply received");

    
    std::string rx_buffer = "";

    serial_port.Read(rx_buffer, 72, 10000);

    ROS_INFO("Read complete");

    char rx_str[72];
    
    std::strcpy(rx_str, rx_buffer.c_str());

    for(int k = 0; k < 3*3; k++)
    {
        double val;

        val = *((double*)rx_str + k);

        ROS_INFO("%f\n", val);
    }
    */
    serial_port.Close();

    return 0;
}
