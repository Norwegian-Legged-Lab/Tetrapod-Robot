#include "contact_sensor.h"

ContactSensor::ContactSensor(int _pin)
{
    sensor_reading_offset = 0;

    sensor_reading = 0;

    sensor_pin = _pin;

    contact_sensor_state = false;
}

void ContactSensor::updateSensorOffsets()
{
    uint16_t sample_sum;
    
    sample_sum = 0;

    uint16_t number_of_offset_samples = 200;

    for(int sample = 0; sample < number_of_offset_samples; sample++)
    {
        sample_sum += analogRead(sensor_pin);
        delay(1);
    }

    sensor_reading_offset = sample_sum/number_of_offset_samples;
}

void ContactSensor::updateReadings()
{
    uint16_t number_of_sensor_reading_samples = 50;

    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        uint16_t sample_sum = 0;

        for(int sample = 0; sample < number_of_sensor_reading_samples; sample++)
        {
            sample_sum += analogRead(sensor_pin[sensor_id]);
        }

        sensor_reading[sensor_id] = sample_sum/number_of_sensor_reading_samples;
    }
}

void ContactSensor::updateStates()
{
    int sensor_variance_threshold = 10; 

    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        if(sensor_variance[sensor_id] > sensor_variance_no_contact + sensor_variance_threshold)
        {
            contact_sensor_state[sensor_id] = true;
        }
        else
        {
            contact_sensor_state[sensor_id] = false;
        }
        
    }
}