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
  Serial.begin(9600);
  while(!Serial){}

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

  double a, b, c;

  //unsigned char recv_buffer[24];

  int i = 0;

  /*while(Serial.available())
  {
    recv_buffer[i] = Serial.read();
    if(i == 23)
    {
      break;
    }
    i++;
  }*/

  unsigned char recv_buffer[24];
  while (Serial.available())
  {
    recv_buffer[i] = Serial.read();
    i++;
  }

  //a = *((double*)recv_buffer);
  //b = *((double*)recv_buffer + 1);
  //c = *((double*)recv_buffer + 2);

  /*Serial.println(a);

  Serial.println(b);

  Serial.println(c);
  */

  double test;
  double test2;
  double test3;
  test = *((double*)recv_buffer);
  test2 = *((double*)recv_buffer + 1);
  test3 = *((double*)recv_buffer + 2);
  
  Serial.println(test);
  Serial.println(test2);
  Serial.println(test3);


  //Serial.write("World", BUFFER_SIZE);  
}
