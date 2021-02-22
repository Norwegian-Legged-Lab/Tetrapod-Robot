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

unsigned long motor_address = 0x141; // 0x140 + id
unsigned char can_message[8];
unsigned char ack_message[8];
unsigned long id_sender = 0;

int SERIAL_RATE = 115200;

void setup()
{
  Serial.begin(SERIAL_RATE);
  delay(1000);
  can.begin(can_tx, can_rx, SERIAL_RATE);      // tx, rx
  delay(1000);

  can.debugMode();

  can.baudRate(SERIAL_RATE_115200);
    
  can.canRate(CAN_RATE_1000);

  /*
  if(can.baudRate(SERIAL_RATE_115200))
  {
      Serial.println("set baud rate ok");
  }
  else
  {
      Serial.println("set baud rate fail");
  }
  */
  Serial.println("Setup Complete");
}

// send(unsigned long id, byte ext, byte rtrBit, byte len, const byte *buf);
void loop()
{
    can.debugMode();
    
    motor_interface.readPIDParameters(can_message);
    //motor_interface.readEncoderPosition(can_message);
    can.send(0x141, 0, 0, 8, can_message);

    // Print the canbus message that we sent
    Serial.print("Motor command:\t");
    Serial.print("\t");
    for(int i = 0; i < 8; i++)
    {
      Serial.print("0x");
      Serial.print(can_message[i], HEX);
      Serial.print("\t");
    }
    Serial.println("");


    delay(100);
    


    Serial.println("Checking for for ack");
    uint8_t can_status = can.recv(&id_sender, ack_message);
    if(can_status == 1)
    {
      Serial.print("Received data:\t");
      Serial.print(id_sender);
      Serial.print("\t");
      for(int i = 0; i < 8; i++)
      {
        Serial.print("0x");
        Serial.print(ack_message[i]);
        Serial.print("\t");
      }
      Serial.println("");
    }
    Serial.println("");


    delay(1000);
    Serial.println("End of loop cycle");
}
