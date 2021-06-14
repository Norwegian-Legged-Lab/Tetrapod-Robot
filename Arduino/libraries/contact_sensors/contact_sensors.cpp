#include "contact_sensors.h"

ContactSensors::ContactSensors()
{
    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        sensor_reading_offset[sensor_id] = 0;

        sensor_reading[sensor_id] = 0;

        sensor_pin[sensor_id] = A0 + sensor_id;

        contact_sensor_state[sensor_id] = false;
    }
}

void ContactSensors::updateSensorOffsets()
{
    uint16_t sample_sum[NUMBER_OF_SENSORS];

    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        sample_sum[sensor_id] = 0;
    }

    uint16_t number_of_offset_samples = 200;

    for(int sample = 0; sample < number_of_offset_samples; sample++)
    {
        for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
        {
            sample_sum[sensor_id] += analogRead(sensor_pin[sensor_id]);
        }
        delay_microseconds(100);
    }

    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        sensor_reading_offset[sensor_id] = sample_sum[sensor_id]/number_of_offset_samples;
    }
}

void ContactSensors::updateReadings()
{
    int16_t number_of_sensor_reading_samples = 20;

    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        previous_sensor_reading[sensor_id] = sensor_reading[sensor_id];

        int32_t sample_sum = 0;

        for(int sample = 0; sample < number_of_sensor_reading_samples; sample++)
        {
            sample_sum += analogRead(sensor_pin[sensor_id]);
        }

        sensor_reading[sensor_id] = sample_sum/number_of_sensor_reading_samples - sensor_reading_offset[sensor_id];
    }
}

void ContactSensors::updateStates()
{
    int sensor_variance_threshold = 10; 

    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        if(contactDetected(sensor_id))
        {
            contact_sensor_state[sensor_id] = true;
        }
        else if(contactLost(sensor_id))
        {
            contact_sensor_state[sensor_id] = false;
        }
    }
}

void ContactSensors::printReadings()
{
    uint32_t time = micros();
    //Serial.print("Time:\t"); 
    Serial.print(time - previous_time); 
    //Serial.print("\t");
    previous_time = time;

    
    Serial.print("\tReadings:\t"); 
    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        Serial.print(sensor_reading[sensor_id]);
    }
    
}

void ContactSensors::printStates()
{
    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        if(contact_sensor_state[sensor_id])
        {
            Serial.print("\tContact");
        }
        else
        {
            Serial.print("\tFloating");
        }
        
    } 
}

bool ContactSensors::contactDetected(int _sensor_id)
{
    if(sensor_reading[_sensor_id] - previous_sensor_reading[_sensor_id] > contact_detected_threshold)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool ContactSensors::contactLost(int _sensor_id)
{
    if(previous_sensor_reading[_sensor_id] - sensor_reading[_sensor_id] > contact_lost_threshold)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}