#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8);

const byte address[6] = "000001";


void setup() 
{
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}

void loop() 
{
  const char text[] = "Hello World";
  radio.write(&text, sizeof(text));
  delay(1000);
}


/*
void setup() 
{
  Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
}

void loop()
{
  if(radio.available())
  {
    char text[32] = "";
    radio.read(&text, sizeof(text));
    Serial.println(text);
  }
}
*/
