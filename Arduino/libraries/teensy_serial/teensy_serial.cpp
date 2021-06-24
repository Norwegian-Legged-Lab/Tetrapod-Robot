#include "teensy_serial.h"

TeensySerial::TeensySerial(int _number_of_motors)
{
    this->number_of_motors = _number_of_motors;

    // Initialize the size of the transmitt buffer
    // 3 values per motor (joint position, joint velocity, joint torque)
    this->tx_buffer_size = number_of_motors*3;

    // Allocate memory for the receive buffer
    this->rx_buffer = new char[_number_of_motors + 1];

    // Allocate memory for the transmitt buffer
    this->tx_buffer = new unsigned char[tx_buffer_size];
}

TeensySerial::~TeensySerial()
{
    // Free the memory of the receive buffer
    delete rx_buffer;

    // Free the memory of the transmitt buffer
    delete tx_buffer;
}

bool TeensySerial::areControlCommandsAvailable()
{
    // Check if any data is available on the serial line
    if(Serial.available())
    {
        // Return true if there is any data available
        return true;
    }
    else
    {
        // Return false if there is no data available
        return false;
    }
}

void TeensySerial::receiveControlCommands(double &_control_command_type, double* _control_commands)
{
    int i = 0;

    // Read data from the serial line as long as there is data available.
    // Up to 64 bytes can be read at a time
    while(Serial.available())
    {
        // Store the data in the receive buffer
        this->rx_buffer[i] = Serial.read();
        i++;
    }

    // Create a temporary variable to store the control id of the incomming control message
    double temp_id;

    // Fetch the control ID from the incomming message
    temp_id = *((double*)this->rx_buffer);

    // Store the control command type 
    _control_command_type = temp_id; 
    
    // Go through the control commands for the different motors
    for(int i = 1; i < this->number_of_motors + 1; i++)
    {
        // Temporary variable for storage
        double val;

        // Assign the control value to the temporary variable
        val = *((double*)this->rx_buffer + i);

        // Store the control value for motor i
        _control_commands[i - 1] = val;
    }
    
}

void TeensySerial::sendStates(double *joint_positions, double *joint_velocities, double *joint_torques)
{
    // Put the joint position values in the transmitt buffer
    for(int i = 0; i < this->number_of_motors*8; i++)
    {
        this->tx_buffer[i] = ((char *) joint_positions)[i];
    }

    int offset = 8*number_of_motors;

    // Put the joint velocities in the transmitt buffer
    for(int i = 0; i < this->number_of_motors*8; i++)
    {
        this->tx_buffer[i + offset] = ((char *) joint_velocities)[i];
    }

    offset = 8*2*number_of_motors;

    // Put the joint torques in the transmitt buffer
    for(int i = 0; i < this->number_of_motors*8; i++)
    {
        this->tx_buffer[i + offset] = ((char *) joint_torques)[i];
    }

    // Send the state data
    Serial.write(tx_buffer, tx_buffer_size);
}

void TeensySerial::printTxBuffer()
{
    for(int i = 0; i < this->number_of_motors*3; i++)
    {
        double val;

        val = *((double*)this->tx_buffer + i);

        Serial.println(val);
    }
}