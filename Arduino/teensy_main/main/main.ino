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
#include "Eigen30.h"

/// TEMP_START
#include "teensy_blinker.h"
TEENSY_LED led;
/// TEMP_END

// Number of motors 
const int NUMBER_OF_MOTORS = 2;
int NUMBER_OF_MOTORS_PER_PORT = 1;

/*
float *position_array = new float [NUMBER_OF_MOTORS];

//char *a[] = {"FL", "FR", "BR", "BL"}; // F: Front - B: Back - R: Right - L: Left
float pos[2]; /// stores arduino time
float vel[2];
float eff[2];
*/

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
  //uint8_t number_of_control_commands = sizeof(joint_state_msg.position)/sizeof(joint_state_msg.position[0]);

  // TODO get size from incoming message
  uint8_t number_of_control_commands = NUMBER_OF_MOTORS;
  
  /// TEMP_START
  //led.blink(number_of_control_commands);
  //led.pause();
  /// TEMP_END

  for(int i = 0; i < number_of_control_commands; i++)
  {
    //if(joint_state_msg.position[i] != NULL)
    if(joint_state_msg.position[i] != 1000)
    {
      // Tell motor i to move to the desired position
      motors[i].setPositionReference(joint_state_msg.position[i]);

      /// TEMP_START
      //led.blink(1);
      //led.pause();
      /// TEMP_END
      
    }
    //else if(joint_state_msg.velocity[i] != NULL)
    else if(joint_state_msg.velocity[i] != 1000)
    {
      // Tell motor i to move a the desired velocity
      motors[i].setSpeedReference(joint_state_msg.velocity[i]);
      /// TEMP_START
      //led.blink(2);
      //led.pause();
      /// TEMP_END
    }
    //else if(joint_state_msg.effort[i] != NULL)
    else if(joint_state_msg.effort[i] != 1000)
    {
      // Tell motor i to output a certain torque 
      motors[i].setTorqueReference(joint_state_msg.effort[i]);
      /// TEMP_START
      //led.blink(3);
      //led.pause();
      /// TEMP_END
    }
    else
    {
      // Report error. No valid control command for joint i
      Serial.println("ERROR: Invalid joint state message. Index: "); Serial.println(i);
      /// TEMP_START
      //led.blink(4);
      //led.pause();
      /// TEMP_END
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
  
  // Initialize the ROS node
  nh.initNode();

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
  
  nh.advertise(motor_state_publisher);
  nh.subscribe(subscriber_control_commands);
  /*
  joint_state_reply.name_length = 0;
  joint_state_reply.position_length = 2;
  joint_state_reply.velocity_length = 2;
  joint_state_reply.effort_length = 2;
  */
}

void loop() 
{
  nh.spinOnce();
  //delay_microseconds(100000);
  
  nh.loginfo("Empty buffers");
  //delay_microseconds(2000);
  while(can_port_1.read(can_message));
  while(can_port_2.read(can_message));
  //EmptyCANBuffers();
  nh.loginfo("Buffers emptied");
  
  for(int i = 0; i < NUMBER_OF_MOTORS; i++)
  {
    nh.loginfo("Send to");
    //nh.loginfo(i);
    motors[i].requestMotorStatus();
  }
  
  delay_microseconds(1000);

  nh.loginfo("Check for new messages");
  
  
  // Go through all the replies and update the motor states
  while(can_port_1.read(can_message) || can_port_2.read(can_message))
  {
    // The motor IDs are [1 - 32]. The lower numbers are used first
    uint8_t id = can_message.id - MOTOR_ADDRESS_OFFSET;
    nh.loginfo("New message for ID");
    //led.blink(id);
    //led.pause();
    //nh.loginfo(id);
    // Check if the incomming message belongs to any of the motors
    
    if((id <= NUMBER_OF_MOTORS) && (id >= 1))
    {
      // Update states of motor with id
      nh.loginfo("Ok");
      motors[id - 1].readMotorControlCommandReply(can_message.buf);
    }
    else
    {
      // Report error. No motor with the corresponding ID
      //Serial.println("ERROR: No motor ID corresponds to the incomming message");
      nh.loginfo("ERROR: No motor ID corresponds to the incomming message");
    }
  }
  
  
  // Update the joint state reply message
  /*
  for(int i = 0; i < NUMBER_OF_MOTORS; i++)
  {
    joint_state_reply.position[i] = motors[i].getPosition();
    joint_state_reply.velocity[i] = motors[i].getVelocity();
    joint_state_reply.effort[i] = motors[i].getTorque();
    nh.loginfo("States updated");
  }
  */
  /*
  pos[0] = 1.0;
  pos[1] = 1.0;
  vel[0] = 1.0;
  vel[1] = 1.0;
  eff[0] = 1.0;
  eff[1] = 1.0
  */
  

  //joint_state_reply.position.data.resize(2);
  //joint_state_reply.position.data[0] = 9.2;

  //pos[0] = 1.4;

  //joint_state_reply.position = pos;
  
  /*
  position_array[0] = 1.0;
  position_array[1] = 2.0;
  joint_state.position = position_array;
  */
  //joint_state_reply = joint_state;
  
  // Add message header
  joint_state_reply.header.frame_id = teensy_frame;
  
  // Add time stamp to the message
  joint_state_reply.header.stamp = nh.now();
  
  motor_state_publisher.publish(&joint_state_reply);
  nh.loginfo("Reply sent");
  
  nh.loginfo("");
  delay_microseconds(1000000.0);
}
