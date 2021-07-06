#include "contact_sensors.h"

double timer = 0;
double loop_rate = 200;

ContactSensors contact_sensors;

uint32_t t_prev = 0;
uint32_t t_curr = 0;


double period = pow(10, 6)/loop_rate;

void setup() {
  Serial.begin(9600);
  delay(1000);

  contact_sensors.updateSensorOffsets();
}

void loop() 
{
  while(timer + period > micros());

  timer = micros();

  contact_sensors.updateReadings();

  contact_sensors.updateStates();

  t_prev = t_curr;
  t_curr = micros();

  //Serial.println(t_curr - t_prev);

  //contact_sensors.printReadings();

  //contact_sensors.printLastChange();

  //contact_sensors.printReadingHistory();

  //contact_sensors.printStates();

  Serial.print(micros()); Serial.print("\t");

  Serial.print(contact_sensors.getReading()); Serial.print("\t");

  //Serial.print(1000); Serial.print("\t");

  //Serial.print(-500); Serial.print("\t");

  Serial.println("");



  //Serial.println(500); //Serial.print("\t");

 
  //delay(10);
  
}
