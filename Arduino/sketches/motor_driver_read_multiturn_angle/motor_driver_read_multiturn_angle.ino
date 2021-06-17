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

bool use_position_control = false;

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

  // Set the PID parameters of the motor
  motor_array[0].writePIDParametersToRAM(30, 10, 50, 5, 50, 5);
}

void loop() 
{
  if(Serial.available())
  {
    String pos_string = Serial.readStringUntil('\n');
    double pos_test = pos_string.toFloat();
    if(pos_test != 0.5)
    {
      pos = pos_test;
      use_position_control = true;
    }
    else
    {
      motor_array[0].turnOffMotor();
      use_position_control = false;
    }
  }

  if(use_position_control)
  {
    motor_array[0].setPositionReference(pos);
    
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
  }
  else
  {
    // Try to update the motor status
    if(!motor_array[0].readMotorStatus())
    {
      Serial.print("Failed to read motor status\t");
    }   
  }

  // Try to update the multi-turn angle
  if(!motor_array[0].readMultiTurnAngle())
  {
    Serial.print("Failed to read multiturn angle\t");
  }

  //int32_t multi_turn_angle_32_bit = motor_array[0].getMultiTurnAngle();
  int64_t multi_turn_angle_32_bit = motor_array[0].getMultiTurnAngleRaw();
  int32_t val;
  if(multi_turn_angle_32_bit >= 0)
  {
    val = multi_turn_angle_32_bit;
  }
  else
  {
    multi_turn_angle_32_bit = - multi_turn_angle_32_bit;
    val = multi_turn_angle_32_bit;
    val = - val;
  }

  Serial.print("Multiturn angle raw: "); Serial.print(val); Serial.print("\t");
  Serial.print("Multiturn angle deg: "); Serial.print(val/(100.0*6.0), 10); Serial.print("\t");
  Serial.print("Encoder value: "); Serial.print(motor_array[0].getEncoderValue()); Serial.print("\t");
  Serial.print("Position [rad]: "); Serial.print(motor_array[0].getPosition(), 6); Serial.print("\t");
  Serial.print("Position [deg]: "); Serial.print(motor_array[0].getPosition()*180.0/M_PI); Serial.print("\t");

  Serial.println("");
  
  delay_microseconds(10000.0);
}
