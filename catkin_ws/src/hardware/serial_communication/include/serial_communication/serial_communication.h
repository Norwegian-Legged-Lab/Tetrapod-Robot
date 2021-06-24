#ifndef serial_communication_h
#define serial_communication_h

#include "ros/ros.h"

// LibSerial libraries
#include <libserial/SerialPort.h>
#include <libserial/SerialStream.h>

class SerialCommunication
{
    public: SerialCommunication(std::string _port);

    public: ~SerialCommunication();

    private: LibSerial::SerialPort serial_port;

    private: const int TX_BUFFER_SIZE = 0;

    private: const int RX_BUFFER_SIZE = 0;

    private: std::string tx_buffer;

    private: std::string rx_buffer;

    private: int rx_timeout_ms = 2;

    public: void sendMessage();

    public: bool receiveMessage();

    public: bool isNewDataAvailable();
};

#endif