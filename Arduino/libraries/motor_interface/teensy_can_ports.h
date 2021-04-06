#ifndef Teensy_CAN_ports_h
#define Teensy_CAN_ports_h

#include "FlexCAN_T4.h"

const uint8_t CAN_PORT_1 = 1;
const uint8_t CAN_PORT_2 = 2;

static FlexCAN_T4<CAN1, RX_SIZE_256, TX_SIZE_16> can_port_1;
static FlexCAN_T4<CAN2, RX_SIZE_256, TX_SIZE_16> can_port_2;

#endif