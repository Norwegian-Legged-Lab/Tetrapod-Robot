#include "Arduino.h"

uint16_t sequence_number = 65000;
uint8_t variable_1 = 89;
uint8_t variable_2 = 78;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() 
{ 
  sequence_number++;
  
  uint8_t msg[6]; 
  msg[1] = sequence_number >> 8;
  msg[0] = sequence_number;

  uint16_t received_sequence_number = 0;
  //received_sequence_number += msg[3]*256*256*256;
  //received_sequence_number += msg[2]*256*256;
  received_sequence_number += msg[1]*256;
  received_sequence_number += msg[0];


  Serial.print(sequence_number); 
  Serial.print("\t");
  Serial.print(received_sequence_number); 
  /*
  for(int i = 0; i < 4; i++)
  {
    Serial.print(msg[i]); Serial.print("\t");
  }

  for(int i = 0; i < 4; i++)
  {
    uint32_t a = msg[i]*pow(256, i);
    received_sequence_number += a;
    Serial.print(a); Serial.print("\t");
  }
  */
  if(sequence_number != received_sequence_number)
  {
    Serial.print("DAFUCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCK!");
  }
   

  Serial.println("");

  delay(10);
}
