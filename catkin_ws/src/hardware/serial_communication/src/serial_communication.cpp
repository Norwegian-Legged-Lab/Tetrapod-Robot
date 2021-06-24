#include "serial_communication/serial_communication.h"

SerialCommunication::SerialCommunication(std::string _port)
{
    this->serial_port.Open(_port);

    this->serial_port.SetBaudRate(LibSerial::BaudRate::BAUD_1000000);

    this->serial_port.SetCharacterSize(LibSerial::CharacterSize::CHAR_SIZE_8);

    this->serial_port.SetFlowControl(LibSerial::FlowControl::FLOW_CONTROL_NONE);

    this->serial_port.SetStopBits(LibSerial::StopBits::STOP_BITS_1);

    int tx_data_elements = 8;

    int rx_data_elements = 18;


}

SerialCommunication::~SerialCommunication()
{
    serial_port.Close();
}

bool SerialCommunication::isNewDataAvailable()
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