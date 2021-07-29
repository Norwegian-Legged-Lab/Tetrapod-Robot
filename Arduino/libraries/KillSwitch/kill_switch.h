#ifndef kill_switch_h
#define kill_switch_h

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include <nRF24L01.h>
#include <RF24.h>

const int SCREEN_WIDTH = 128;
    
const int SCREEN_HEIGHT = 64;

const int OLED_RESET = -1;

const int TRANSCEIVER_CE_PIN = 7;

const int TRANSCEIVER_CSN_PIN = 8;

const byte TRANSCEIVER_ADDRESS[6] = "000001"; 

const uint32_t ROBOT_COMMUNICATION_TIMEOUT = 500000;


class KillSwitch
{
    public: KillSwitch();

    public: void setupTransceiver();

    public: void readIncommingMessage();

    public: void sendDontKillMessage();

    public: void updateConnectionStatus();

    public: void setupDisplay();

    public: void writeBatteryStatesToDisplay();

    private: uint32_t message_sequence_number = 0;

    private: bool connected_to_robot = false;

    private: uint32_t time_of_last_ack = 0.0;

    private: float robot_battery_1_voltage = 0.0;

    private: float robot_battery_2_voltage = 0.0;

    private: float kill_switch_battery_voltage = 0.0;

    private: float robot_battery_1_max_voltage = 0.0;

    private: float robot_battery_2_max_voltage = 0.0;

    private: float kill_switch_battery_max_voltage = 0.0;

    private: float robot_battery_1_percentage = 70.0;

    private: float robot_battery_2_percentage = 74.0;

    private: float kill_switch_battery_percentage = 92.0;

    private: RF24 transceiver = RF24(TRANSCEIVER_CE_PIN, TRANSCEIVER_CSN_PIN);

    public: Adafruit_SSD1306 display = Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
};

#endif