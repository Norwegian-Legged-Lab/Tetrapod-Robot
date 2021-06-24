#include "teensy_serial.h"

TeensySerial::TeensySerial(int _number_of_motors)
{
    this->number_of_motors = _number_of_motors;

    this->tx_buffer_size = number_of_motors*3;

    this->rx_buffer = new char[_number_of_motors + 1];

    this->tx_buffer = new unsigned char[tx_buffer_size];
}

TeensySerial::~TeensySerial()
{
    delete rx_buffer;

    delete tx_buffer;
}

bool TeensySerial::areControlCommandsAvailable()
{
    if(Serial.available())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void TeensySerial::receiveControlCommands(double &_control_command_type, double* _control_commands)
{
    while(Serial.available())
    {
        this->rx_buffer = Serial.read();
    }

    double temp_id;

    temp_id = *((double*)this->rx_buffer);

    _control_command_type = temp_id; 

    for(int i = 1; i < this->number_of_motors + 1; i++)
    {
        double val;

        val = *((double*)this->rx_buffer + i);

        _control_commands[i] = val;
    }
}

void TeensySerial::sendStates(double *joint_positions, double *joint_velocities, double *joint_torques)
{
    for(int i = 0; i < this->number_of_motors; i++)
    {
        this->tx_buffer[i] = ((char *) joint_positions)[i];
    }

    int offset = this->number_of_motors;

    for(int i = 0; i < this->number_of_motors; i++)
    {
        this->tx_buffer[i + offset] = ((char *) joint_velocities)[i];
    }

    offset = 2*number_of_motors;

    for(int i = 0; i < this->number_of_motors; i++)
    {
        this->tx_buffer[i + offset] = ((char *) joint_torques)[i];
    }

    Serial.write(tx_buffer, tx_buffer_size);
}