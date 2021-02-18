// SEND EXAMPLE OF SERIAL CAN MODULE
// unsigned char send(unsigned long id, uchar ext, uchar rtrBit, uchar len, const uchar *buf);
// SUPPORT: joney.sui@longan-labs.cc
#include "motor_interface.h"

#include <Serial_CAN_Module.h>
//#include <SoftwareSerial.h>
MotorInterface motor_interface;
Serial_CAN can;

#define can_tx  0           // tx of serial can module connect to D2
#define can_rx  1           // rx of serial can module connect to D3

const int motor_address = 0x141; // 0x140 + id

void setup()
{
    Serial.begin(9600);
    delay(1000);
    can.begin(can_tx, can_rx, 9600);      // tx, rx
    Serial.println("begin");
}

unsigned char dta[8] = {1, 2, 3, 4, 5, 6, 7, 8};
unsigned char m[8] = {0, 0, 0, 0, 0, 0, 0, 0};
unsigned char can_message[8];
unsigned char ack_message[8];
unsigned char id_sender;

// send(unsigned long id, byte ext, byte rtrBit, byte len, const byte *buf);
void loop()
{
    double timer = micros();
    motor_interface.readPIDParameters(can_message);
    can.send(motor_adress, 0, 0, 8, can_message);   // SEND TO ID:0X55
    double timer2 = micros();

    bool ack = false;
    while(!ack)
    {
      if(can.recv(&id_sender, ack_message)
      {
        Serial.print("Received data:\t");
        Serial.print(id_sender);
        Serial.print("\t");
        for(int i = 0; i < 8; i++)
        {
          Serial.print("0x0
        }
      }
    }
    delay(1000);
}

// END FILE
