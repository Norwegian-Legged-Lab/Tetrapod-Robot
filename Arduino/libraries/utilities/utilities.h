#ifndef utilities_h
#define utilities_h

#include "Arduino.h"

/// \brief Performs a nonblocking delay in the program
/// Functions such as delay might block some interrupts
/// \param[in] _microseconds_delay Number of microseconds the program should wait
void delay_microseconds(double _microseconds_delay);

void printCANMessageData(unsigned char* _can_message);

/// \brief The function takes in an array are converts the first 8 elements to zero
/// \param[in] _can_message The first 8 elements are set to zero. 
void emptyCanMessage(unsigned char* _can_message);

#endif