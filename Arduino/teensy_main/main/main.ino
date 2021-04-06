// Include ROS specific libraries
#include <ros.h>
#include <std_msgs/Empty.h>
#include <sensor_msgs/JointState.h>
#include <std_msgs/String.h>

// Inlucde other libraries
#include "motor_control.h"
#include "motor_constants.h"
#include "teensy_can_ports.h"
#include "FlexCAN_T4.h"

// Number of motors 
const int NUMBER_OF_MOTORS = 4;
int NUMBER_OF_MOTORS_PER_PORT = 2;

// Create a vector of MotorControl elements, one for each motor
MotorControl* motors = new MotorControl[NUMBER_OF_MOTORS];

// Create a ROS node handle
ros::NodeHandle nh;

// Set the name of the Teensy board
char teensy_frame[] = "/teensy_front_legs";

CAN_message_t can_message;

// Create a jointState message for sending motor states back to the mother computer
sensor_msgs::JointState joint_state_reply;

// Must be declared before callbacks where it is being used
ros::Publisher motor_state_publisher("motor_states", &joint_state_reply);

void controlCommandCallback(const sensor_msgs::JointState& joint_state_msg)
{
  // Determine the number of control commands being sent
  uint8_t number_of_control_commands = sizeof(joint_state_msg.position)/sizeof(joint_state_msg.position[0]);

  for(int i = 0; i < number_of_control_commands; i++)
  {
    if(joint_state_msg.position[i] != NULL)
    {
      // Tell motor i to move to the desired position
      motors[i].setPositionReference(joint_state_msg.position[i]);
    }
    else if(joint_state_msg.velocity[i] != NULL)
    {
      // Tell motor i to move a the desired velocity
      motors[i].setSpeedReference(joint_state_msg.velocity[i]);
    }
    else if(joint_state_msg.effort[i] != NULL)
    {
      // Tell motor i to output a certain torque 
      motors[i].setTorqueReference(joint_state_msg.effort[i]);
    }
    else
    {
      // Report error. No valid control command for joint i
      Serial.println("ERROR: Invalid joint state message. Index: "); Serial.println(i);
    }
  }

  // Add a small delay to allow so that the motors have time to send back replies
  delay_microseconds(2000.0);

  // Go through all the replies and update the motor states
  while(can_port1.read(can_message) || can_port2.read(can_message))
  {
    // The motor IDs are [1 - 32]. The lower numbers are used first
    uint8_t id = can_message.id - MOTOR_ADDRESS_OFFSET;

    // Check if the incomming message belongs to any of the motors
    if((id <= number_of_control_commands) && (id >= 1))
    {
      // Update states of motor with id
      motors[id - 1].readMotorControlCommandReply(can_message.buf);
    }
    else
    {
      // Report error. No motor with the corresponding ID
      Serial.println("ERROR: No motor ID corresponds to the incomming message");
    }
  }

  // Update the joint state reply message
  for(int i = 0; i < number_of_control_commands; i++)
  {
    joint_state_reply.position[i] = motors[i].get_position();
    joint_state_reply.velocity[i] = motors[i].get_velocity();
    joint_state_reply.effort[i] = motors[i].get_torque();
  }

  // Add message header
  joint_state_reply.header.frame_id = teensy_frame;

  // Add time stamp to the message
  joint_state_reply.header.stamp = nh.now();

  motor_state_publisher.publish(&joint_state_reply);
}

ros::Subscriber<sensor_msgs::JointState> subscriber_control_commands("motor_control_commands", &controlCommandCallback);

void setup() 
{
  // Set the baud rate for the serial communication
  Serial.begin(250000);
  delay_microseconds(100000.0);

  // Initialize CAN ports. 
  // DO NOT ATTEMPT TO SEND DATA OVER THE TEENSY CAN PORTS WITHOUT RUNNING CAN_PORT*.BEGIN()
  can_port1.begin();
  can_port1.setBaudRate(MOTOR_BAUD_RATE);
  can_port2.begin();
  can_port2.setBaudRate(MOTOR_BAUD_RATE);

  // Initialize the ROS node
  nh.initNode();

  // Setup subcriber for initializing the motors and wait for initial number of rotations

  // Initialize the motor controllers
  for (int i = 0; i < NUMBER_OF_MOTORS; i++)
  {
    // CAN port 1 should be used
    if(i < NUMBER_OF_MOTORS_PORT)
    {
      motors[i] = MotorControl(i + 1, CAN_PORT_1, 0);
    }
    // CAN port 2 should be used
    else
    {
      motors[i] = MotorControl(i + 1, CAN_PORT_2, 0);
    }
  }
  
  nh.advertise(motor_state_publisher);
  nh.subscribe(subscriber_control_commands);
}

void loop() 
{
  
}
