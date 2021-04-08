#include "utilities.h"

void delay_microseconds(double microsecond_delay)
{
    double timer = micros();
    while(timer + microsecond_delay > micros());
}

void printCANMessageData(unsigned char* _can_message)
{
    for(int i = 0; i < 8; i++)
    {
        Serial.print("0x");
        Serial.print(_can_message[i]);
        Serial.print("\t");
    }
    Serial.println("");
}

void emptyCanMessage(unsigned char* _can_message)
{
    for(int i = 0; i < 8; i++)
    {
        _can_message[i] = 0;
    }
}