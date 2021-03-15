#include "motor_control.h"

MotorControl motor1(1, 0);

void setup() {
  Serial.begin(115200);
  delay_microseconds(100000.0);
}

void loop() {
  motor1.setSpeedReference(2*M_PI);
  Serial.println("Speed set");

  delay_microseconds(10*1000000.0);
  while(true);
}
