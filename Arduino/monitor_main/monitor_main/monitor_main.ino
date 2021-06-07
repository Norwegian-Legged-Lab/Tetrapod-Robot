#include "kill_switch.h"

KillSwitch controller; 

void setup() 
{
  Serial.begin(9600);

  controller.setupDisplay();

  controller.setupTransceiver();
  
}

void loop() 
{
  controller.sendDontKillMessage();

  controller.readIncommingMessage();

  controller.updateConnectionStatus();

  delay(1000);
}
