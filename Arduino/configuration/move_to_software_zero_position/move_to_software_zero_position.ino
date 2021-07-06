#include "FlexCAN_T4.h"
#include "teensy_can_ports.h"
#include "motor_driver.h"
#include "motor_constants.h"
#include "Arduino.h"
#include "utilities.h"

// Set the motor parameters
const int MOTOR_ID = 1;
const int INITIAL_INNER_MOTOR_ROTATIONS = 0;
const double POSITION_OFFSET = 0.0;
const uint8_t CAN_PORT = 1;

// Create a MotorControl object
MotorControl* motor_array = new MotorControl[1];

// Create a CAN message which can be used to store messages
CAN_message_t can_message;

void setup() 
{
  // Start serial comminication so that we can communicate with the microcontroller through the USB
  Serial.begin(250000);

  // Give the Serial communication some time to set up
  delay(1000);

  // Initialize a CAN port
  can_port_1.begin();
  can_port_1.setBaudRate(MOTOR_BAUD_RATE);

  // Initiale the motor controller. This must be done after the CAN communication has been started
  motor_array[0] = MotorControl(MOTOR_ID, CAN_PORT, INITIAL_INNER_MOTOR_ROTATIONS, POSITION_OFFSET);

  // Set the PID parameters of the motor
  motor_array[0].writePIDParametersToRAM(10, 3, 50, 5, 50, 5);
}

void loop() 
{
  double desired_actuator_position;
  
  bool zero_position_set = false;

  // Move the output shaft of the motor to the desired kinematic zero position (the position the joint will have when turning on the robot)
  while(zero_position_set == false)
  {
    // Check if any information has been entered in the serial terminal 
    if(Serial.available())
    {
      // Read the incomming message
      String string_confirmation = Serial.readStringUntil('\n');

      if(string_confirmation == "ok")
      {
        zero_position_set = true;
      }
      else
      {
        // Convert the message to a float
        desired_actuator_position = string_confirmation.toFloat();

        // Tell the actuator to move to the commanded position
        motor_array[0].setPositionReference(desired_actuator_position);
    
        // Give the actuator some time to reply
        delay_microseconds(5000);
    
        // Check if there are any incomming messages
        while(can_port_1.read(can_message))
        {
          // Verify that the ID of the incomming message is correct 
          if(can_message.id - MOTOR_ADDRESS_OFFSET == motor_array[0].get_id())
          {
            // Use the data from the message to update the motor state
            motor_array[0].readMotorControlCommandReply(can_message.buf);
          }
        }
      }
    }
    else
    {
      Serial.println("When the actuator is aligned, enter: ok");
    }
  }

  Serial.println("Zero position set, moving the actuator to the desired encoder zero position");

  // Get the current position from the motor
  while(!motor_array[0].readMotorStatus())
  {
    Serial.println("Failed to read motor status");
  }

  // Calculate the desired encoder zero position
  double desired_encoder_zero_position = desired_actuator_position - (30.0*M_PI/180.0);

  // Create a variable keeping track of whether or not the desired zero position has been reached
  bool desired_encoder_zero_position_reached = false;

  // Keep running this loop until the zero position is reached
  while(true)
  {
    // Tell the actuator to move to the desired encoder zero position
    motor_array[0].setPositionReference(desired_encoder_zero_position);

    // Give the actuator some time to reply
    delay_microseconds(5000);

    // Check if there are any incomming messages
    while(can_port_1.read(can_message))
    {
      // Verify that the ID of the incomming message is correct 
      if(can_message.id - MOTOR_ADDRESS_OFFSET == motor_array[0].get_id())
      {
        // Use the data from the message to update the motor state
        motor_array[0].readMotorControlCommandReply(can_message.buf);
      }
    }

    // Check if we have moved close enough to the desired encoder zero position
    if(abs(motor_array[0].getPosition() - desired_encoder_zero_position) < 0.1*M_PI/180)
    {
      desired_encoder_zero_position_reached = true;
      
      Serial.println("The actuator has now been moved to the desired encoder zero position.");
      Serial.println("Please use the RMDX interface to store the current location as the zero position");

      delay_microseconds(100000);
    }
  }

  Serial.println("The actuator has now been moved to the desired encoder zero position.");
  Serial.println("Please use the RMDX interface to store the current location as the zero position");

  while(true);
}
