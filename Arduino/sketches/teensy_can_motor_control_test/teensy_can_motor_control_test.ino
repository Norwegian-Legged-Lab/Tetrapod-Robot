#include "FlexCAN_T4.h"
#include "teensy_can_ports.h"
//#include "motor_control.h"
#include "motor_constants.h"

//MotorControl* motor_array = new MotorControl[2];

void setup() {
  Serial.begin(250000);
  delay(1000.0);

  // Initialize CAN ports. 
  // DO NOT ATTEMPT TO SEND DATA OVER THE TEENSY CAN PORTS WITHOUT RUNNING CAN_PORT*.BEGIN()
  can_port1.begin();
  can_port1.setBaudRate(MOTOR_BAUD_RATE);
  can_port2.begin();
  can_port2.setBaudRate(MOTOR_BAUD_RATE);

  // Initialize the two motors
  //motor_array[0] = MotorControl(1, 0);
  //motor_array[1] = MotorControl(2, 0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
