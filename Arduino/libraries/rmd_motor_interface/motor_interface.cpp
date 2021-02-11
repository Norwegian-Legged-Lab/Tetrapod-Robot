#include "motor_interface.h"

void MotorInterface::emptyCanMessage(unsigned char* can_message)
{
    for(int i = 0; i < MESSAGE_SIZE; i++)
    {
        can_message[i] = 0;
    }
}

void MotorInterface::readPIDParameters(unsigned char* can_message)
{
    float start = micros();
    emptyCanMessage(can_message);
    Serial.println(micros() - start);
    can_message[0] = MOTOR_COMMAND_READ_PID;
}