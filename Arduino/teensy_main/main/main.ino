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
#include "utilities.h"
#include "ros_node_handle.h"

/// TEMP_START
#include "teensy_blinker.h"
TEENSY_LED led;
/// TEMP_END

// Number of motors 
const int NUMBER_OF_MOTORS = 2;
int NUMBER_OF_MOTORS_PER_PORT = 1;

// Arrays needed to publish jointState messages back
char *joint_names[1] = {"placeHolder"};
float position_array[NUMBER_OF_MOTORS]; 
float velocity_array[NUMBER_OF_MOTORS];
float torque_array[NUMBER_OF_MOTORS];

// Create a vector of MotorControl elements, one for each motor
MotorControl* motors = new MotorControl[NUMBER_OF_MOTORS];

// Set the name of the Teensy board
char teensy_frame[] = "/teensy_front_legs";

CAN_message_t can_message;

// Create a jointState message for sending motor states back to the mother computer
sensor_msgs::JointState joint_state_reply;

// Must be declared before callbacks where it is being used
ros::Publisher motor_state_publisher("motor_states", &joint_state_reply);

void controlCommandCallback(const sensor_msgs::JointState& joint_state_msg)
{
  // TODO get size from incoming message
  uint8_t number_of_control_commands = NUMBER_OF_MOTORS;
  
  for(int i = 0; i < number_of_control_commands; i++)
  {
    if(joint_state_msg.position[i] != 1000)
    {
      // Tell motor i to move to the desired position
      motors[i].setPositionReference(joint_state_msg.position[i]);
      
    }
    else if(joint_state_msg.velocity[i] != 1000)
    {
      // Tell motor i to move a the desired velocity
      motors[i].setSpeedReference(joint_state_msg.velocity[i]);
    }
    else if(joint_state_msg.effort[i] != 1000)
    {
      // Tell motor i to output a certain torque 
      motors[i].setTorqueReference(joint_state_msg.effort[i]);
    }
    else
    {
      // Report error. No valid control command for joint i
      //Serial.println("ERROR: Invalid joint state message. Index: "); Serial.println(i);
      ROS_NODE_HANDLE.loginfo("ERROR: Invalid joint state message. Index: ");

    }
  } 
}

ros::Subscriber<sensor_msgs::JointState> subscriber_control_commands("motor_control_commands", &controlCommandCallback);

void setup() 
{
  // Set the baud rate for the serial communication
  Serial.begin(57600);
  delay_microseconds(100000.0);

  // Initialize CAN ports. 
  // DO NOT ATTEMPT TO SEND DATA OVER THE TEENSY CAN PORTS WITHOUT RUNNING CAN_PORT*.BEGIN()
  
  can_port_1.begin();
  can_port_1.setBaudRate(MOTOR_BAUD_RATE);
  can_port_2.begin();
  can_port_2.setBaudRate(MOTOR_BAUD_RATE);

  joint_state_reply.name_length = 1;
  joint_state_reply.position_length = NUMBER_OF_MOTORS;
  joint_state_reply.velocity_length = NUMBER_OF_MOTORS;
  joint_state_reply.effort_length = NUMBER_OF_MOTORS;
  
  // Initialize the ROS node
  ROS_NODE_HANDLE.initNode();

  // Setup subcriber for initializing the motors and wait for initial number of rotations
  
  // Initialize the motor controllers
  for (int i = 0; i < NUMBER_OF_MOTORS; i++)
  {
    // CAN port 1 should be used
    if(i < NUMBER_OF_MOTORS_PER_PORT)
    {
      motors[i] = MotorControl(i + 1, CAN_PORT_1, 0);
    }
    // CAN port 2 should be used
    else
    {
      motors[i] = MotorControl(i + 1, CAN_PORT_2, 0);
    }
  }
  
  ROS_NODE_HANDLE.advertise(motor_state_publisher);
  ROS_NODE_HANDLE.subscribe(subscriber_control_commands);
}

void loop() 
{
  ROS_NODE_HANDLE.spinOnce();
  
  // Empty the CAN buffers
  while(can_port_1.read(can_message));
  while(can_port_2.read(can_message));

  // Send messages to the motors to update their positions
  for(int i = 0; i < NUMBER_OF_MOTORS; i++)
  {
    motors[i].requestMotorStatus();
  }
  
  delay_microseconds(3000);
  
  // Go through all the replies and update the motor states
  while(can_port_1.read(can_message) || can_port_2.read(can_message))
  {
    // The motor IDs are [1 - 32]. The lower numbers are used first
    uint8_t id = can_message.id - MOTOR_ADDRESS_OFFSET;
    
    // Check if the incomming message belongs to any of the motors
    if((id <= NUMBER_OF_MOTORS) && (id >= 1))
    {
      // Update states of motor with id
      motors[id - 1].readMotorControlCommandReply(can_message.buf);
    }
    else
    {
      // Report error. No motor with the corresponding ID
      //Serial.println("ERROR: No motor ID corresponds to the incomming message");
      ROS_NODE_HANDLE.loginfo("ERROR: No motor ID corresponds to the incomming message");
    }
  }
 
  // Update the joint state reply message
  
  for(int i = 0; i < NUMBER_OF_MOTORS; i++)
  {
    position_array[i] = motors[i].getPosition();
    velocity_array[i] = motors[i].getVelocity();
    torque_array[i] = motors[i].getTorque();
  }

  motors[0].readMultiTurnAngle();
  motors[0].printState();
  
  joint_state_reply.name = joint_names;
  joint_state_reply.position = position_array;
  joint_state_reply.velocity = velocity_array;
  joint_state_reply.effort = torque_array;

  // Add message header
  joint_state_reply.header.frame_id = teensy_frame;
  
  // Add time stamp to the message
  joint_state_reply.header.stamp = ROS_NODE_HANDLE.now();
  
  motor_state_publisher.publish(&joint_state_reply);
}
