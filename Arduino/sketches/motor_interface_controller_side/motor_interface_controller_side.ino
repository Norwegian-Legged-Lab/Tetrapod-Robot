// SEND EXAMPLE OF SERIAL CAN MODULE
// unsigned char send(unsigned long id, uchar ext, uchar rtrBit, uchar len, const uchar *buf);
// SUPPORT: joney.sui@longan-labs.cc
#include "motor_interface.h"

#include <Serial_CAN_Module.h>

MotorInterface motor_interface;
Serial_CAN can;

#define can_tx  0           // tx of serial can module connect to D2
#define can_rx  1           // rx of serial can module connect to D3

unsigned long id = 0x55; // 0x140 + id
unsigned char can_message[8];
unsigned char ack_message[8];
unsigned long ack_id = 0;

int SERIAL_RATE = 9600;

void setup()
{
  Serial.begin(SERIAL_RATE);
  delay(1000);
  can.begin(can_tx, can_rx, SERIAL_RATE);      // tx, rx
  delay(1000);
  
  Serial.println("Setup Complete");
}

// send(unsigned long id, byte ext, byte rtrBit, byte len, const byte *buf);
void loop()
{
  // Send message
  motor_interface.readPIDParameters(can_message);
  can.send(id, 0, 0, 8, can_message);
  print_can_message(id, can_message);
  delay(100);
  
  // Check for ack
  uint8_t can_status = can.recv(&ack_id, ack_message);
  if(can_status == 1)
  {
    print_can_message(ack_id, ack_message);
  }

  Serial.println("");
  delay(1000);
}
