#include "contact_sensor.h"


ContactSensor contact_sensors;

void setup() {
  Serial.begin(9600);
  delay(1000);

  contact_sensors.updateSensorOffsets();
}

void loop() {
  //Serial.println("Recording start: ");
  float timer = micros();

  contact_sensors.updateReadings();

  Serial.print("Time[us]:\t"); Serial.print(timer);


  Serial.print("Reading: "); Serial.println(contact_sensors.getReading());

  while(true);
  
}
