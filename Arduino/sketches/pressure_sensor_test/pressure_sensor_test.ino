#include "Arduino.h"

const int SENSOR_PIN = 14;

const int NUMBER_OF_SAMPLES = 20;

double reading;

double max_reading_value = 1023*3.3/5.0;

double max_pressure = 3920.0; //Pa

double reading_offset = 182.0; //

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

  //Serial.print(reading);

  if(reading/(max_reading_value - reading_offset) > 0.023)
  {
    Serial.println(" CONTACT!");
  }
  else
  {
    Serial.println("");
  }

  //Serial.println(reading);
  
  delay(10);
}
