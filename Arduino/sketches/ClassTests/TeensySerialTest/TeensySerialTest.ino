#include "teensy_serial.h"

const int NUMBER_OF_MOTORS = 3;

const double POSITION = 1.0;
const double VELOCITY = 2.0;
const double TORQUE = 3.0;

TeensySerial serial_interface(NUMBER_OF_MOTORS);

double control_command_type = 0.0;
double control_commands[NUMBER_OF_MOTORS];

// Arrays for motor states
double joint_positions[NUMBER_OF_MOTORS]; 
double joint_velocities[NUMBER_OF_MOTORS];
double joint_torques[NUMBER_OF_MOTORS];

void setup() 
{
  for(int i = 0; i < NUMBER_OF_MOTORS; i++)
  {
    control_commands[i] = 0.0;
    
    joint_positions[i] = 0.0;
    joint_velocities[i] = 0.0;
    joint_torques[i] = 0.0;
  }
}

void loop() 
{
  if(serial_interface.areControlCommandsAvailable())
  {
    serial_interface.receiveControlCommands(control_command_type, control_commands);

    if(control_command_type == POSITION)
    {
      for(int i = 0; i < NUMBER_OF_MOTORS; i++)
      {
        joint_positions[i] = control_commands[i];
        joint_velocities[i] = -control_commands[i];
        joint_torques[i] = -control_commands[i];
      } 
    }
    else if(control_command_type == VELOCITY)
    {
      for(int i = 0; i < NUMBER_OF_MOTORS; i++)
      {
        joint_positions[i] = -control_commands[i];
        joint_velocities[i] = control_commands[i];
        joint_torques[i] = -control_commands[i];
      } 
    }
    else if(control_command_type == TORQUE)
    {
      for(int i = 0; i < NUMBER_OF_MOTORS; i++)
      {
        joint_positions[i] = -control_commands[i];
        joint_velocities[i] = -control_commands[i];
        joint_torques[i] = control_commands[i];
      }  
    }
    else
    {
      for(int i = 0; i < NUMBER_OF_MOTORS; i++)
      {
        joint_positions[i] = -control_commands[i];
        joint_velocities[i] = -control_commands[i];
        joint_torques[i] = -control_commands[i];
      }        
    }
  }
  else
  {
    /*
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
      joint_positions[i] = control_commands[i];
      joint_velocities[i] = control_commands[i];
      joint_torques[i] = control_commands[i];
    }
    */   
  }
    
  serial_interface.sendStates(joint_positions, joint_velocities, joint_torques);

  delay(1000);

}
