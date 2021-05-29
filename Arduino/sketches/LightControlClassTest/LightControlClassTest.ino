#include "Arduino.h"

#include "LightControl.h"

LightControl lights;

void setup() 
{
  Serial.begin(9600);
  delay(1000);
  
  lights.setup();
}

void loop() 
{
  lights.randomizeBandValues();

  lights.printBandValues();

  lights.setBandValues();

  for(int i = 1; i < 8; i++)
  {
    delay(300);
    lights.decrementBandValues();
    lights.setBandValues();
  }
  
  delay(500);
}
