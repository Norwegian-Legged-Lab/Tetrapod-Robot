#ifndef kill_switch_h
#define kill_switch_h

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


const int SCREEN_WIDTH = 128;
    
const int SCREEN_HEIGHT = 64;

const int OLED_RESET = -1;


class KillSwitch
{
    public: KillSwitch();

    public: void setupDisplay();

    public: void writeBatteryStatesToDisplay();

    private: bool connected_to_robot = false;

    private: float robot_battery_1_voltage = 0.0;

    private: float robot_battery_2_voltage = 0.0;

    private: float kill_switch_battery_voltage = 0.0;

    private: float robot_battery_1_max_voltage = 0.0;

    private: float robot_battery_2_max_voltage = 0.0;

    private: float kill_switch_battery_max_voltage = 0.0;

    private: float robot_battery_1_percentage = 70.0;

    private: float robot_battery_2_percentage = 74.0;

    private: float kill_switch_battery_percentage = 92.0;

    public: Adafruit_SSD1306 display = Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
};

#endif