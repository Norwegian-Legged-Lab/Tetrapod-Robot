#include "FlexCAN_T4.h"
#include "teensy_can_ports.h"
#include "motor_control.h"
#include "motor_constants.h"

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
  // Send CAN command
  if(state)
  {
    state = false;
    motor_array[0].setSpeedReference(vel);
    Serial.print("Motor: 1, Vel:\t"); Serial.println(vel);
  }
  else
  {
    state = true;
    motor_array[1].setSpeedReference(vel);
    Serial.print("Motor: 2, Vel:\t"); Serial.println(vel);
  }
  vel+=1.0;

  // Wait for reply
  delay_microseconds(1000);

  while(can_port_2.read(can_message))
  {
    Serial.print(can_message.id, HEX); Serial.print("\t");
    for(int i = 0; i < 8; i++)
    {
      Serial.print(can_message.buf[i]); Serial.print("\t");
    }
    Serial.println("");
  }

  // Wait
  Serial.println("");
  delay_microseconds(3000000.0);
}
