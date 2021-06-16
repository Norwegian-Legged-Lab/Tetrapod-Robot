#include "FlexCAN_T4.h"
#include "teensy_can_ports.h"
#include "motor_driver.h"
#include "motor_constants.h"
#include "Arduino.h"
#include "utilities.h"

int MOTOR_ID = 1;
MotorControl* motor_array = new MotorControl[1];
double pos = 0.0;
CAN_message_t can_message;
int INITIAL_INNER_MOTOR_ROTATIONS = 0;
double POSITION_OFFSET = 0.0;
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
  motor_array[0] = MotorControl(MOTOR_ID, CAN_PORT, INITIAL_INNER_MOTOR_ROTATIONS, POSITION_OFFSET);
}

void loop() 
{
  // Try to update the multi-turn angle
  if(!motor_array[0].readMultiTurnAngle())
  {
    Serial.print("Failed to read multiturn angle\t");
  }

  // Try to update the motor status
  if(!motor_array[0].readMotorStatus())
  {
    Serial.print("Failed to read motor status\t");
  }

  int32_t multi_turn_angle_32 = motor_array[0].GOD_ANGLE;

  Serial.print("Multiturn angle raw: "); Serial.print(multi_turn_angle_32); Serial.print("\t");
  Serial.print("Multiturn angle deg: "); Serial.print(multi_turn_angle_32/(100*6)); Serial.print("\t");
  Serial.print("Encoder value: "); Serial.print(motor_array[0].getEncoderValue()); Serial.print("\t");
  Serial.print("Position [rad]: "); Serial.print(motor_array[0].getPosition()); Serial.print("\t");
  Serial.print("Position [deg]: "); Serial.print(motor_array[0].getPosition()*M_PI/180.0); Serial.print("\t");

  Serial.println("");
  
  delay_microseconds(10000.0);
}
