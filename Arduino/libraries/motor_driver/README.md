# Motor Interface

This library can be used control Gyems RMDX Motors through Arduino and ROS using CAN. The current implementation assumes that a Teensy 4.0/4.1 microcontroller is used together with RMDX8 Pro Motors. Other Arduino capable boards and RMD X motors can be used with some configurations.

The library offers the opportunity to use multiturn position control, speed control, and torque control. There also exists functions to read/write the PI parameters of the motor and to log the motor states. 

## Use:
TODO

## Code overview:
#### make_can_msg.h/cpp
The header file make_can_msg.h contains functions that transforms the data segment of a CAN message into a CAN message that correponds to the protocols used for the motor. Please take a look at the official protocol guide for a complete description over the commands: https://www.dropbox.com/s/2yzt90i10d6dn27/RMD%20servo%20motor%20control%20protocol%20%28CAN%20BUS%20%29V1.61.pdf?dl=0

#### motor_driver.h/cpp
This contains a class named MotorControl. One MotorControl object should be made for every physical motor. All communication with the motors goes through MotorClass objects.

#### motor_constants.h
This header file contains different constants related to the RMDX motors, both hardware and the communication protocol.

#### ros_node_handle.h
This file only contains a static global node handle. By declaring the node handle in this way it can easily be used by both the MotorControl class for logging and in the main file for communicating with the host PC.

#### teensy_can_ports.h
This file contains static definitions of the two non-FD CAN ports in the Teensy 4. This makes it possible for the different motors to access the appropriate CAN port.

#### main.ino
This is the script that runs on the Teensy. The script initializes the CAN ports and the ROS node. 

## Other comments
TODO
