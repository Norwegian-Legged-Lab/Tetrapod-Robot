#ifndef utilities_h
#define utilities_h

#include "Arduino.h"

/// \brief Performs a nonblocking delay in the program
/// Functions such as delay might block some interrupts
/// \param[in] _microseconds_delay Number of microseconds the program should wait
void delay_microseconds(double _microseconds_delay);

#endif