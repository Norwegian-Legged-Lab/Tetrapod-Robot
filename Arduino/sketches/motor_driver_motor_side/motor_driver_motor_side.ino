// SEND EXAMPLE OF SERIAL CAN MODULE
// unsigned char send(unsigned long id, uchar ext, uchar rtrBit, uchar len, const uchar *buf);
// SUPPORT: joney.sui@longan-labs.cc
#include "motor_driver.h"

#include <Serial_CAN_Module.h>

MotorDriver motor_driver;
Serial_CAN can;

#define can_tx  0           // tx of serial can module connect to D2
#define can_rx  1           // rx of serial can module connect to D3

unsigned long my_id = 0x55; // 0x140 + id
unsigned char my_message[8];

unsigned long id_sender_message_received = 0x55;
unsigned char message_received[8];

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

    // Check for incomming message
    uint8_t can_status = can.recv(&id_sender_message_received, message_received);
    
    if(can_status == 1)
    {
      // Print the incomming message
      print_can_message(id_sender_message_received, message_received);

      // Reply to the incomming message
      can.send(my_id, 0, 0, 8, my_message);

      // Print the sent message
      print_can_message(my_id, my_message);
    }
    Serial.println("");


    delay(1000);
    //Serial.println("End of loop cycle");
}
