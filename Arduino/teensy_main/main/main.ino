// Include ROS specific libraries
#include <ros.h>
#include <std_msgs/Empty.h>
#include <sensor_msgs/JointState.h>
#include <std_msgs/String.h>

// Inlucde other libraries
#include "motor_control.h"
#include "FlexCAN_T4.h"

// Create a ROS node handle
ros::NodeHandle nh;

// Set the name of the Teensy board
char teensy_frame[] = "/teensy_front_legs";

FlexCAN_T4<CAN1, RX_SIZE_256, TX_SIZE_16> can_port1;
FlexCAN_T4<CAN2, RX_SIZE_256, TX_SIZE_16> can_port2;

sensor_msgs::JointState joint_state_reply;

CAN_message_t can_message;

void controlCommandCallback(const sensor_msgs::JointState& joint_state_msg)
{
  // Determine the number of control commands being sent
  uint8_t number_of_control_commands = sizeof(joint_state_msg.position)/sizeof(joint_state_msg.position[0]);

  for(int i = 0; i < number_of_control_commands; i++)
  {
    if(joint_state_msg.position[i] != NULL)
    {
      // Tell motor i to move to the desired position
    }
    else if(joint_state_msg.velocity[i] != NULL)
    {
      // Tell motor i to move a the desired velocity
    }
    else if(joint_state_msg.effort[i] != NULL)
    {
      // Tell motor i to output a certain torque 
    }
    else
    {
      // Report error. No valid control command for joint i
    }
  }

  // Add a small delay to allow so that the motors have time to send back replies
  delay_microseconds(2000.0);

  // Go through all the replies and update the motor states
  while(can_port1.read(can_message) || can_port2.read(can_message))
  {
    // The motor IDs are [1 - 32]. The lower numbers are used first
    uint8_t id = can_message.id - MOTOR_ADDRESS_OFFSET;

    //
    if(id <= number_of_control_commands)
    {
      // Update states of motor with id
    }
    else
    {
      // Report error. No motor with the corresponding ID
    }
  }

  // Update the joint state reply message
  for(int i = 0; i < number_of_control_commands; i++)
  {
    /*
    joint_state_reply.position[i] = motors[i].get_position();
    joint_state_reply.velocity[i] = motors[i].get_velocity();
    joint_state_reply.velocity[i] = motors[i].get_torque();
    */
  }

  // Add message header
  joint_state_reply.header.frame_id = teensy_frame;

  joint_state_reply.header.stamp = nh.now();
  
}

ros::Subscriber<sensor_msgs::JointState> subscriber_control_commands("motor_control_commands", &controlCommandCallback);

void setup() {
  // Set the baud rate for the serial communication
  Serial.begin(250000);
  delay_microseconds(100000.0);

  // Initialize the ROS node
  nh.initNode();
  nh.subscribe(subscriber_control_commands);
}

void loop() {
  motor1.setSpeedReference(2*M_PI);
  Serial.println("Speed set");

  delay_microseconds(10*1000000.0);
  while(true);
}
