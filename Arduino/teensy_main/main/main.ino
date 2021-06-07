// Include ROS specific libraries
#include <ros.h>
#include <std_msgs/Empty.h>
#include <sensor_msgs/JointState.h>
#include <std_msgs/String.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Float64MultiArray.h>

// Inlucde other libraries
#include "motor_driver.h"
#include "motor_constants.h"
#include "teensy_can_ports.h"
#include "FlexCAN_T4.h"
#include "utilities.h"
#include "ros_node_handle.h"
#include "config_motor_driver.h"

/// TEMP_START
#include "teensy_blinker.h"
TEENSY_LED led;
/// TEMP_END

// Number of motors 
const int NUMBER_OF_MOTORS = 1;
int NUMBER_OF_MOTORS_PER_PORT = 1;

const double IDLE_COMMAND = 1000.0;

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

// Create a bool message for confirming that the motor gains have been set
std_msgs::Bool motor_set_gains_confirmation_msg;

// Must be declared before callbacks where it is being used
ros::Publisher motor_state_publisher("/motor/states", &joint_state_reply);

// Publisher used to send confirmation messages that the motor
ros::Publisher motor_gains_set_confirmation_publisher("/motor/confirmation", &motor_set_gains_confirmation_msg);

// Variable to decide whether or not the motor gains have been set
bool motor_gains_set = false;

enum ControlType {none = 0, position = 1, velocity = 2, torque = 3};

double motorControlValues[NUMBER_OF_MOTORS];

ControlType motorControlTypes[NUMBER_OF_MOTORS];

int loops_without_control_command = 0;

int max_loops_without_control_command = 20.0;

void controlCommandCallback(const sensor_msgs::JointState& joint_state_msg)
{
  // TODO get size from incoming message
  uint8_t number_of_control_commands = NUMBER_OF_MOTORS;

  for(int i = 0; i < number_of_control_commands; i++)
  {
    if(joint_state_msg.position[i] != IDLE_COMMAND)
    {
      motorControlTypes[i] = ControlType::position;
      motorControlValues[i] = joint_state_msg.position[i];
    }
    else if(joint_state_msg.velocity[i] != IDLE_COMMAND)
    {
      motorControlTypes[i] = ControlType::velocity;
      motorControlValues[i] = joint_state_msg.velocity[i];
    }
    else if(joint_state_msg.effort[i] != IDLE_COMMAND)
    {
      motorControlTypes[i] = ControlType::torque;
      motorControlValues[i] = joint_state_msg.effort[i];
    }
    else
    {
      motorControlTypes[i] = ControlType::none;
      motorControlValues[i] = 0.0;
      ROS_NODE_HANDLE.loginfo("ERROR: Invalid joint state message. Index: ");
    }
  } 

  loops_without_control_command = 0;
}

void setMotorGainsCallback(const std_msgs::Float64MultiArray &motor_set_gains_msg)
{
  bool setting_gains_has_not_failed = true;
  
  uint8_t number_of_gains = 6;

  for(int i = 0; i < NUMBER_OF_MOTORS; i++)
  {
    double k_p_pos = motor_set_gains_msg.data[i*number_of_gains];
    double k_i_pos = motor_set_gains_msg.data[i*number_of_gains + 1];
    double k_p_vel = motor_set_gains_msg.data[i*number_of_gains + 2];
    double k_i_vel = motor_set_gains_msg.data[i*number_of_gains + 3];
    double k_p_torque = motor_set_gains_msg.data[i*number_of_gains + 4];
    double k_i_torque = motor_set_gains_msg.data[i*number_of_gains + 5];

    if(!motors[i].writePIDParametersToRAM(k_p_pos, k_i_pos, k_p_vel, k_i_vel, k_p_torque, k_i_torque))
    {
      ROS_NODE_HANDLE.loginfo("Failed to read from pid gains. Waiting for reply...");
      
      setting_gains_has_not_failed = false;
    }

    motorControlValues[i] = 0.0;

    motorControlTypes[i] = ControlType::none;
    
    delay_microseconds(1000000);
  }

  if(setting_gains_has_not_failed)
  {
    motor_set_gains_confirmation_msg.data = true;
    
    motor_gains_set_confirmation_publisher.publish(&motor_set_gains_confirmation_msg);
    
    motor_gains_set = true;    
  }
}

ros::Subscriber<sensor_msgs::JointState> subscriber_control_commands("/motor/commands", &controlCommandCallback);

ros::Subscriber<std_msgs::Float64MultiArray> set_motor_gains_subscriber("/motor/gains", &setMotorGainsCallback);

void setup() 
{
  // Set the baud rate for the serial communication
  Serial.begin(57600);
  delay_microseconds(10000.0);

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
      motors[i] = MotorControl(i + 1, CAN_PORT_1, INITIAL_NUMBER_OF_MOTOR_ROTATIONS[i], POSITION_OFFSET[i]);
    }
    // CAN port 2 should be used
    else
    {
      motors[i] = MotorControl(i + 1, CAN_PORT_2, INITIAL_NUMBER_OF_MOTOR_ROTATIONS[i], POSITION_OFFSET[i]);
    }
  }
  
  ROS_NODE_HANDLE.advertise(motor_state_publisher);

  ROS_NODE_HANDLE.advertise(motor_gains_set_confirmation_publisher);

  ROS_NODE_HANDLE.subscribe(subscriber_control_commands);

  ROS_NODE_HANDLE.subscribe(set_motor_gains_subscriber);

  while(motor_gains_set != true)
  {
    ROS_NODE_HANDLE.loginfo("Waiting for set gains message");

    delay_microseconds(500000);
    
    ROS_NODE_HANDLE.spinOnce();
  }

  ROS_NODE_HANDLE.loginfo("Setup Complete");
}

void loop() 
{ 
  // Empty the CAN buffers
  while(can_port_1.read(can_message));
  while(can_port_2.read(can_message));

  ROS_NODE_HANDLE.spinOnce();

  loops_without_control_command++;

  if(loops_without_control_command < max_loops_without_control_command)
  {
    // Send control commands to all of the motors
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
      switch(motorControlTypes[i])
      {
        case ControlType::none:
          break;
       
        case ControlType::position:
          motors[i].setPositionReference(motorControlValues[i]);
          break;
          
        case ControlType::velocity:
          motors[i].setSpeedReference(motorControlValues[i]);
          break;
          
        case ControlType::torque:
          motors[i].setTorqueReference(motorControlValues[i]);
          break;
  
        default:
          motors[i].requestMotorStatus();
          break;
      }
    } 
  }
  
  delay_microseconds(4000); // Can be 3000
  
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

  //motors[0].printState();
  motors[0].printTorqueCurrents();
 
  // Update the joint state reply message
  
  for(int i = 0; i < NUMBER_OF_MOTORS; i++)
  {
    position_array[i] = motors[i].getPosition();
    velocity_array[i] = motors[i].getVelocity();
    torque_array[i] = motors[i].getTorque();
  }

  //motors[0].readMultiTurnAngle();
  
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
