#include "LightControl.h"

LightControl::LightControl(){}

void LightControl::setup()
{
    for(int i = 0; i < lights.getDeviceCount(); i++)
    {
        lights.shutdown(i, false);
    }
}

void LightControl::setLedTest()
{
    lights.setRow(1, 0, 15);

    lights.setColumn(2, 0, 95);
}

void LightControl::setBandValues()
{
    for(double i = 0; i < NUMBER_OF_BANDS; i++)
    {
        int address = floor(i/LEDS_PER_DISPLAY);
        int column = i - LEDS_PER_DISPLAY*address;
        lights.setColumn(address, column, band_values(i));
    }
}

void LightControl::decrementBandValues()
{
    for(int i = 0; i < NUMBER_OF_BANDS; i++)
    {
        band_values(i) = decremtentSingleBandValue(band_values(i));
    }
}

uint8_t LightControl::decremtentSingleBandValue(uint8_t val)
{
    if(val == 1)
    {
        return 1;
    }
    else
    {
        return (val + 1)/2 - 1;
    }
}

void LightControl::randomizeBandValues()
{
    for(int i = 0; i < NUMBER_OF_BANDS; i++)
    {
        int led_level = rand() % 8 + 1;

        band_values(i) = pow(2, led_level) - 1;
    }
}

void LightControl::printBandValues()
{
    Serial.println("Band Values:");

    for(int i = 0; i < NUMBER_OF_BANDS; i++)
    {
        Serial.print("#"); Serial.print(i); Serial.print("\t"); Serial.println(band_values(i));
    }
}