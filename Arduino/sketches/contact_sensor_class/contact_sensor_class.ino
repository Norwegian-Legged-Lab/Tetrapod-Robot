#include "contact_sensors.h"


ContactSensors contact_sensors;

void setup() {
  Serial.begin(9600);
  delay(1000);

  contact_sensors.updateSensorOffsets();
}

void loop() {

  contact_sensors.updateReadings();

  contact_sensors.updateStates();

  contact_sensors.printReadings();

  contact_sensors.printStates();

  Serial.println("");

  //Serial.println(500); //Serial.print("\t");

 
  //delay(10);

  

  //while(true);
  
}
