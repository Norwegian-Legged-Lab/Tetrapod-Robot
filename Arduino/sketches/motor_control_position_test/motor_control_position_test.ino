#include "FlexCAN_T4.h"
#include "teensy_can_ports.h"
#include "motor_control.h"
#include "motor_constants.h"
#include "Arduino.h"

MotorControl* motor_array = new MotorControl[2];

void setup() {
  Serial.begin(250000);
  delay(1000.0);

  // Initialize CAN ports. 
  // DO NOT ATTEMPT TO SEND DATA OVER THE TEENSY CAN PORTS WITHOUT RUNNING CAN_PORT*.BEGIN()
  can_port_1.begin();
  can_port_1.setBaudRate(MOTOR_BAUD_RATE);
  can_port_2.begin();
  can_port_2.setBaudRate(MOTOR_BAUD_RATE);

  // Initialize the two motors
  motor_array[0] = MotorControl(1, 1, 0);
  motor_array[0].writePIDParametersToRAM(10, 1, 50, 5, 50, 5);
}

bool state = true;
double pos = 0.01;
CAN_message_t can_message;

void loop() {

  if(Serial.available())
  {
    String pos_string = Serial.readStringUntil('\n');
    pos = pos_string.toFloat();
  }  
  
  // Send CAN command
  motor_array[0].setPositionReference(pos);
  //Serial.print("Motor: 1, Pos:\t"); Serial.println(pos);

  // Wait for reply
  delay_microseconds(5000);

  while(can_port_1.read(can_message))
  {
    if(can_message.id - MOTOR_ADDRESS_OFFSET == motor_array[0].get_id())
    {
      motor_array[0].readMotorControlCommandReply(can_message.buf);
    }
    else
    {
      Serial.print("No motor with ID = "); Serial.println(can_message.id); 
    }
  }
  
  motor_array[0].printState();

  //Serial.println("");
  delay_microseconds(1000.0);
}
