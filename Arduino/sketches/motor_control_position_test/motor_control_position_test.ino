#include "FlexCAN_T4.h"
#include "teensy_can_ports.h"
#include "motor_control.h"
#include "motor_constants.h"
#include "Arduino.h"

MotorControl* motor_array = new MotorControl[1];
double pos = 0.0;
CAN_message_t can_message;
int INITIAL_INNER_MOTOR_ROTATIONS = -2;
uint8_t CAN_PORT = 1;

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
  motor_array[0] = MotorControl(1, CAN_PORT, INITIAL_INNER_MOTOR_ROTATIONS);
  motor_array[0].writePIDParametersToRAM(10, 1, 50, 5, 50, 5);

  while(!motor_array[0].readMultiTurnAngle()){delay_microseconds(1000000.0);};

  pos = motor_array[0].getPosition();
  motor_array[0].printState(); 
  
  while(!motor_array[0].readMotorStatus()){delay_microseconds(1000000.0);}
  motor_array[0].printState();

  motor_array[0].readCompleteEncoderPosition();
  
  for(int i = 5; i > 1; i--)
  {
    Serial.println(i);
    delay_microseconds(1000000);
  }
  Serial.println("START");
}

void loop() {

  if(Serial.available())
  {
    String pos_string = Serial.readStringUntil('\n');
    double pos_test = pos_string.toFloat();
    if(pos_test != 0.5)
    {
      //pos = pos_test*M_PI/180.0;
      pos = pos_test;
    }
    else
    {
      motor_array[0].turnOffMotor();
    }
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
  
  //motor_array[0].readMotorStatus();
  //motor_array[0].readMultiTurnAngle();
  motor_array[0].printState(); 

  //Serial.println("");
  delay_microseconds(1000.0);
}
