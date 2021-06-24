#ifndef serial_communication_h
#define serial_communication_h

#include "ros/ros.h"

// Eigen
#include <Eigen/Core>

// LibSerial libraries
#include <libserial/SerialPort.h>
#include <libserial/SerialStream.h>

class SerialCommunication
{
    public: SerialCommunication();

    public: SerialCommunication(const std::string &_port, const int &_num_motors);

    public: ~SerialCommunication();

    public: void SendMessage(const Eigen::VectorXd &_state);

    private: void InitLibSerial();

    private: void PackageBuffer(const double *data);

    private: Eigen::Matrix<Eigen::VectorXd, 3, 1> UnpackageBuffer(char *data);

    private: void EigenToCArray(const Eigen::VectorXd &_state, double *_data);

    private: LibSerial::SerialPort serial_port;

    private: int TX_BUFFER_SIZE;

    private: int RX_BUFFER_SIZE;

    private: char *tx_buffer;

    private: char *rx_buffer;

    private: int rx_timeout_ms = 2;

    public: bool receiveMessage();

    public: bool IsNewDataAvailable();

    private: const std::string port;

    private: const int num_motors;
};

#endif