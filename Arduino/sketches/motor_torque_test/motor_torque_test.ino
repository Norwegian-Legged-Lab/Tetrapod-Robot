#include "FlexCAN_T4.h"
#include "teensy_can_ports.h"
#include "motor_driver.h"
#include "motor_constants.h"
#include "Arduino.h"
#include "utilities.h"

const int MOTOR_ID = 6;
const int CAN_PORT = 1;

MotorControl* motor = new MotorControl[1];

void setup()
{
  Serial.begin(115200);

  delay_microseconds(1000000.0);
  can_port_1.begin();
  can_port_1.setBaudRate(MOTOR_BAUD_RATE);
  delay_microseconds(1000000.0);
  
  Serial.println("Trying to initialize motor");
  motor[0] = MotorControl(MOTOR_ID, CAN_PORT, 0, 0);
  Serial.println("Motor initialized");

  motor[0].printPIDParameters();
}

double torque_current = 0.0;

CAN_message_t can_msg;

double timer = 0.0;

double command_timeout = 2500000.0;

void loop()
{
  if(Serial.available())
  {
    String torque_current_setpoint_string = Serial.readStringUntil('\n');

    torque_current = torque_current_setpoint_string.toFloat();

    timer = micros();
  }

  if(micros() > timer + command_timeout)
  {
    torque_current = 0.0;
  }
  
  motor[0].setTorqueCurrent(torque_current);

  delay_microseconds(1000);

  while(can_port_1.read(can_msg))
  {
    if(can_msg.id - MOTOR_ADDRESS_OFFSET == motor[0].get_id())
    {
      motor[0].readMotorControlCommandReply(can_msg.buf);
    }
    else
    {
      Serial.print("No motor with ID "); Serial.println(can_msg.id);
    }
  }
  
  Serial.print("Torque Current: "); Serial.print(torque_current); Serial.print("\t"); 
  motor[0].printState();
  Serial.println("");

  delay_microseconds(50000);
}
