#include "FlexCAN_T4.h"
#include "teensy_can_ports.h"
#include "motor_driver.h"
#include "motor_constants.h"
#include "Arduino.h"

double STOP_COMMAND = 0.5;
double TURN_OFF_COMMAND = -0.5;

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

bool state = true;
double vel = 0.0;
CAN_message_t can_message;

void loop() {

  if(Serial.available())
  {
    String vel_string = Serial.readStringUntil('\n');
    double vel_test = vel_string.toFloat();
    if(vel_test == STOP_COMMAND)
    {
      Serial.println("Attempting to stop motor");
      if(motor_array[0].stopMotor())
      {
        Serial.println("Motor_stopped");
        while(true);
      }
    }
    else if(vel_test == TURN_OFF_COMMAND)
    {
      Serial.println("Attempting to turn off motor");
      if(motor_array[0].turnOffMotor())
      {
        Serial.println("Motor turned off");
        //while(true);
      }
    }
    else
    {
      vel = vel_test;
    }
  }  
  
  // Send CAN command
  motor_array[0].setSpeedReference(vel);
  //Serial.print("Motor: 1, Vel:\t"); Serial.println(vel);

  // Wait for reply
  delay_microseconds(1000);

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
  delay_microseconds(1000000.0);
}
