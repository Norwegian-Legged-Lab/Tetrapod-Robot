#include "FlexCAN_T4.h"
#include "teensy_can_ports.h"
#include "motor_control.h"
#include "motor_constants.h"
#include "Arduino.h"
#include "utilities.h"

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
  motor_array[1] = MotorControl(2, 1, 0);
}

void loop() {
  
  motor_array[1].readPIDParameters();
  motor_array[1].printPIDParameters();
  Serial.println("");
  motor_array[1].writePIDParametersToRAM(4, 3, 4, 50, 6, 70);
  motor_array[1].printPIDParameters();
  Serial.println("");
  motor_array[1].readPIDParameters();
  motor_array[1].printPIDParameters();
  
  while(true);
}
