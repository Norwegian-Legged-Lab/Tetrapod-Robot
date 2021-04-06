#include "teensy_blinker.h"

TEENSY_LED led;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 1; i < 5; i++)
  {
    led.blink(i);
    led.pause();
  }
  delay(5000);
}
