#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include "kill_switch.h"

KillSwitch kill_switch;

/*
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() 
{
  Serial.begin(9600);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
    Serial.println(F("SSD1306 allocation failed"));
    while(true);
  }

  display.display();
  delay(2000);

  display.clearDisplay();

  //display.drawPixel(10, 5, WHITE);

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Connected");
  display.println("BR1: 100%");
  display.println("BR2: 100%");
  display.println("BKS: 100%");
  display.display();

  float bks = 31;
  String bks_string = String(bks, 3);

  float kill_switch_battery_remaining = 31.0;
  char kill_switch_battery_remaining_str[3];
  dtostrf(kill_switch_battery_remaining, 3, 0, kill_switch_battery_remaining_str);

  char kill_switch_battery_full_string[8];

  sprintf(kill_switch_battery_full_string, "KSB: %s",kill_switch_battery_remaining_str);

  Serial.println(kill_switch_battery_full_string);

  delay(2000);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Connected");
  display.println("BR1: 99%");
  display.println("BR2: 99%");
  display.println(kill_switch_battery_full_string);
  display.display();
  
}

void loop() {
  // put your main code here, to run repeatedly:

}

*/

void setup()
{
  Serial.begin(9600);
  
  delay(1000);

  kill_switch.setupDisplay();
}

void loop()
{
  kill_switch.writeBatteryStatesToDisplay();
  while(true);
}
