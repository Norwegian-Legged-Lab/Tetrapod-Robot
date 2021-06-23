#include "Arduino.h"

const int SENSOR_PIN = A0;

const int NUMBER_OF_SAMPLES = 20;

float reading;

float max_reading_value = 1023;

float reading_offset;

void setup() 
{
  double sum = 0;
  
  for(int i = 0; i < NUMBER_OF_SAMPLES; i++)
  {
    sum += analogRead(SENSOR_PIN);
  }

  reading_offset = sum/NUMBER_OF_SAMPLES;
  
  Serial.begin(9600);
  delay(1000);
}

void loop() 
{
  double sum = 0;

  for(int i = 0; i < NUMBER_OF_SAMPLES; i++)
  {
    sum += analogRead(SENSOR_PIN);
    delay(1);
  }

  reading = sum/NUMBER_OF_SAMPLES - reading_offset;

  Serial.print(reading_offset); Serial.print("\t"); 
  Serial.print(reading); Serial.print("\t");

  if(reading - reading_offset > 10)
  {
    Serial.print(" CONTACT!");
  }

  Serial.println("");
  
  delay(10);
}
