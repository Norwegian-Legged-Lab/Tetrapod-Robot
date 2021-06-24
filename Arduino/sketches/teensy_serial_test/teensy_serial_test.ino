#include "Arduino.h"

#include "teensy_serial.h"

const int NUMBER_OF_MOTORS = 3;

TeensySerial serial(NUMBER_OF_MOTORS);

double control_command_type;

double control_commands[NUMBER_OF_MOTORS];

double joint_positions[NUMBER_OF_MOTORS];

double joint_velocities[NUMBER_OF_MOTORS];

double joint_torques[NUMBER_OF_MOTORS];

void setup() 
{
  //Serial.begin(9600);
  //while(!Serial);
  //Serial.println("Start");
  //delay(1000);
}

void loop() 
{
  if(serial.areControlCommandsAvailable())
  {
    //Serial.println("New Data");
    serial.receiveControlCommands(control_command_type, control_commands);
    //Serial.println("Printint New Data");
    Serial.print(control_command_type); Serial.print("\t");
    
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
      joint_positions[i] = control_commands[i]*2.0;
      joint_velocities[i] = control_commands[i]*4.0;
      joint_torques[i] = control_commands[i]*6.0;
      Serial.print(control_commands[i]); Serial.print("\t");
    }
    //Serial.println("");

    //serial.sendStates(joint_positions, joint_velocities, joint_torques);
  }
  else
  {
    //Serial.println("No data");
  }
  delay(1000);
}
