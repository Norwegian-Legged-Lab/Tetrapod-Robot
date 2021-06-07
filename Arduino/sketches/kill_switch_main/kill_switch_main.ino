#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

const int TRANSCEIVER_CE_PIN = 7;

const int TRANSCEIVER_CSN_PIN = 8;

const byte TRANSCEIVER_ADDRESS[6] = "000001";

RF24 transceiver(TRANSCEIVER_CE_PIN, TRANSCEIVER_CSN_PIN);

void setup() 
{
  transceiver.begin();
  transceiver.openWritingPipe(TRANSCEIVER_ADDRESS);
  transceiver.openReadingPipe(0, TRANSCEIVER_ADDRESS);
  transceiver.setPALevel(RF24_PA_MIN);
  transceiver.startListening();
}

void loop() 
{
  if(transceiver.available())
  {
    uint8_t msg[2];

    transceiver.read(&msg, sizeof(msg));
    
    uint16_t sequence_number = 0;
    sequence_number += msg[0];
    sequence_number += msg[1]*256;

    transceiver.stopListening();

    uint8_t tx_msg[4];
    tx_msg[0] = msg[0];
    tx_msg[1] = msg[1];
  }

  
}
