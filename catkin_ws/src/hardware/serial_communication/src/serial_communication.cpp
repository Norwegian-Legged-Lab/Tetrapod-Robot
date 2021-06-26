#include "serial_communication/serial_communication.h"

SerialCommunication::SerialCommunication() : 
    port { "/dev/ttyACM0" },
    num_motors { 6 }
{
    //this->InitLibSerial();
}

SerialCommunication::SerialCommunication(const std::string &_port, const int &_num_motors) :
    port { _port },
    num_motors { _num_motors }
{
    //this->InitLibSerial();
}

SerialCommunication::~SerialCommunication()
{
    serial_port.Close();
}

void SerialCommunication::SetPort(const std::string &_port)
{
    this->port = _port;
}

void SerialCommunication::SetNumberOfMotors(const int &_number_of_motors)
{
    this->num_motors = _number_of_motors;
}

void SerialCommunication::SendMessage(const ControlMode &_control_mode, const std::vector<double> &_state)
{
    // TODO: USE A CLEANER & NEATER SOLUTION

    // Convert the standard vector to an eigen vector
    std::vector<double> v = _state;
    double* ptr = &v[0];
    Eigen::Map<Eigen::VectorXd> state(ptr, v.size());

    if (state.rows() != this->num_motors)
    {
        std::abort();
    }

    this->PackageBuffer(_control_mode, state.data());

    this->serial_port.Write(tx_buffer);
}

Eigen::Matrix<Eigen::VectorXd, 3, 1> SerialCommunication::ReceiveMessage()
{
    while (!this->IsNewDataAvailable())
    {
        sleep(0.00001);
    }

    this->serial_port.Read(this->rx_buffer, this->RX_BUFFER_SIZE, 10000);

    return this->UnpackageBuffer(this->rx_buffer.data());
}

void SerialCommunication::InitLibSerial()
{
    this->serial_port.Open(this->port);

    this->serial_port.SetBaudRate(LibSerial::BaudRate::BAUD_9600);

    this->serial_port.SetCharacterSize(LibSerial::CharacterSize::CHAR_SIZE_8);

    this->serial_port.SetFlowControl(LibSerial::FlowControl::FLOW_CONTROL_NONE);

    this->serial_port.SetStopBits(LibSerial::StopBits::STOP_BITS_1);

    this->TX_BUFFER_SIZE  = (1 + num_motors) * 8;
    this->RX_BUFFER_SIZE  = num_motors * 8 * 3;

    this->tx_buffer.resize(TX_BUFFER_SIZE);
    this->rx_buffer.resize(RX_BUFFER_SIZE);
}

void SerialCommunication::PackageBuffer(const ControlMode &_control_mode, const double *_data)
{
    double control_mode_data[1] = { ((double)_control_mode) };

    this->PackageBufferControlMode(control_mode_data);

    this->PackageBufferControlCommand(_data);
}

void SerialCommunication::PackageBufferControlMode(const double *_data)
{
    for (int i = 0; i < 8; i++)
    {
        tx_buffer[i] = ((char *)_data)[i];
    }
}

void SerialCommunication::PackageBufferControlCommand(const double *_data)
{
    for (int i = 8; i < this->TX_BUFFER_SIZE; i++)
    {
        tx_buffer[i] = ((char *)_data)[i - 8];
    }
}

Eigen::Matrix<Eigen::VectorXd, 3, 1> SerialCommunication::UnpackageBuffer(unsigned char *_data)
{
    Eigen::Matrix<Eigen::VectorXd, 3, 1> state;

    // Set state size
    state(0).resize(this->num_motors, 1);
    state(1).resize(this->num_motors, 1);
    state(2).resize(this->num_motors, 1);

    // Fill data
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < this->num_motors; j++)
        {
            double double_data = *((double*)_data + i*this->num_motors + j);

            state(i)(j) = double_data;
        }
    }

    return state;
}

void SerialCommunication::EigenToCArray(const Eigen::VectorXd &_state, double *_data)
{
    int size = _state.size();

    for (int i = 0; i < size; i++)
    {
        _data[i] = *(_state.data() + i);
    }
}

bool SerialCommunication::IsNewDataAvailable()
{
    if(serial_port.IsDataAvailable() == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}