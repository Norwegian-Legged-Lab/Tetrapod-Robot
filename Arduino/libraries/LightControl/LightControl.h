#ifndef LightControl_h
#define LightControl_h

#include "Arduino.h"

#include "LedControl.h"

#include <Eigen30.h>

#define DEFAULT_DATA_PIN 2
#define DEFAULT_CLK_PIN 3
#define DEFAULT_CS_PIN 4
#define DEFAULT_NUMBER_OF_DISPLAYS 4

#define NUMBER_OF_BANDS 32

class LightControl
{
    private: const uint8_t LEDS_PER_DISPLAY = 8;

    private: const uint8_t MAX_LED_LEVEL = 8;

    private: const uint8_t MAX_BAND_VALUE = 255;

    public: LightControl();

    public: void setup();

    private: LedControl lights = LedControl(DEFAULT_DATA_PIN, DEFAULT_CLK_PIN, DEFAULT_CS_PIN, DEFAULT_NUMBER_OF_DISPLAYS);

    public: void setLedTest();

    private: Eigen::Matrix<uint8_t, 8, NUMBER_OF_BANDS> led_mapping;

    private: void Set();

    private: double max_value = 1.0;

    private: Eigen::Matrix<uint8_t, NUMBER_OF_BANDS, 1> band_values = Eigen::Matrix<uint8_t, NUMBER_OF_BANDS, 1>::Zero();

    public: void setBandValues();

    public: void decrementBandValues();

    private: uint8_t decremtentSingleBandValue(uint8_t val);

    public: void randomizeBandValues();

    public: void printBandValues();
};

#endif