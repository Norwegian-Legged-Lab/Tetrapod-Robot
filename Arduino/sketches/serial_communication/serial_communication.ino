#include "Arduino.h"

const int NUMBER_OF_STATES = 8;

const int BYTES_PER_STATE = 8;

const int BUFFER_SIZE = NUMBER_OF_STATES*BYTES_PER_STATE;

double data[NUMBER_OF_STATES];

char str_0[BYTES_PER_STATE];
char str_1[BYTES_PER_STATE];
char str_2[BYTES_PER_STATE];
char str_3[BYTES_PER_STATE];

char send_buffer[NUMBER_OF_STATES*BYTES_PER_STATE];

void setup() 
{
 
  //while(!Serial){}

  for(int i = 0; i < NUMBER_OF_STATES; i++)
  {
    data[i] = i*2.0;
  }
}

void loop() 
{
  //Serial.write("Hello World", BUFFER_SIZE);
  /*
  dtostrf(data[0], 7, 4, str_0);
  dtostrf(data[1], 7, 4, str_1);
  dtostrf(data[2], 7, 4, str_2);
  dtostrf(data[3], 7, 4, str_3);

  sprintf(send_buffer, "%s %s %s %sX", str_0, str_1, str_2, str_3);

  Serial.write(send_buffer, BUFFER_SIZE);

  delay(1000);
  */

  while(!Serial.available()){}

  Serial.write("World", BUFFER_SIZE);  
}
