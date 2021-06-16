#include "contact_sensors.h"

ContactSensors::ContactSensors()
{
    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        sensor_reading_offset[sensor_id] = 0;

        sensor_reading[sensor_id] = 0;

        //sensor_pin[sensor_id] = A0 + sensor_id;
        sensor_pin[sensor_id] = 14 + sensor_id;

        contact_sensor_state[sensor_id] = ContactState::NoContactDetected;
    }

    for(int i = 0; i < NUMBER_OF_PREVIOUS_READINGS; i++)
    {
        readings[i] = 0;
    }
}

void ContactSensors::updateSensorOffsets()
{
    int32_t sample_sum[NUMBER_OF_SENSORS];

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

    updateReadingHistory(readings, sensor_reading[0]);
}

void ContactSensors::updateStates()
{
    int32_t max_reading_change = 0;

    for(int i = 0; i < NUMBER_OF_PREVIOUS_READINGS - 1; i++)
    {
        if(abs(readings[i] - readings[i + 1]) > max_reading_change)
        {
            max_reading_change = abs(readings[i] - readings[i+1]);
        }
    }

    /*
    Serial.print("Max change: "); 
    Serial.print(max_reading_change); 
    Serial.print("\t");
    */

    switch (contact_sensor_state[0])
    {
        case ContactState::NoContactDetected:
        {
            // If the foot was not in contact we can allow small variations in the pressure
            if(max_reading_change >= 5)
            {
                contact_sensor_state[0] = ContactState::ContactDetected;
            }
            break;
        }
        case ContactState::ContactDetected:
        {
            // If the foot was recently in contact with the ground we need to wait until the pressure 
            // variations are almost non-existent before we assume a liftoff
            if(max_reading_change < 2)
            {
                contact_sensor_state[0] = ContactState::NoContactDetected;
            }
            break;
            
        }
        default:
            break;
    }
}

void ContactSensors::printReadings()
{
    uint32_t time = micros();
    //Serial.print("Time:\t"); 
    Serial.print(time - previous_time); 
    //Serial.print("\t");
    previous_time = time;

    
    Serial.print("\tReadings:"); 
    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        Serial.print(sensor_reading[sensor_id]);
    }
    Serial.print("\t");
}

void ContactSensors::printStates()
{
    for(int sensor_id = 0; sensor_id < NUMBER_OF_SENSORS; sensor_id++)
    {
        if(contact_sensor_state[sensor_id] == ContactState::ContactDetected)
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
    for(int i = 0; i < NUMBER_OF_PREVIOUS_READINGS - 1; i++)
    {
        if(abs(readings[i] - readings[i+1]) >= 2)
        {
            return false;
        }
    }
    
    return true;
}


/*
bool ContactSensors::contactDetected(int _sensor_id)
{
    if(sensor_reading[_sensor_id] - previous_sensor_reading[_sensor_id] > contact_detected_threshold)
    {
        return true;
    }

    for(int i = 0; i < NUMBER_OF_STEADY_SAMPLES ; i++)
    {
        if(abs(readings[i] - readings[i+1]) > 10)
        {
            return true;
        }
    }

    return false;
    
}
*/

/*
bool ContactSensors::contactLost(int _sensor_id)
{
    
    // Check if the pressure is stable. This should be the case for a foot not in contact

    // If the latest readings are varying we can assume that the foot is in contact with the ground or recently was
    for(int i = 0; i < NUMBER_OF_STEADY_SAMPLES; i++)
    {
        if(abs(readings[i] - readings[i+1]) > 5)
        {
            return false;
        }
    }

    int MIN_NUMBER_OF_DROPS = 3;

    int number_of_drops = 0;

    // If the most recent readings are stable and the ones before was after a pressure decrease it is likely that we had a liftoff
    for(int i = NUMBER_OF_STEADY_SAMPLES; i < NUMBER_OF_PREVIOUS_READINGS - 1; i++)
    {
        int change = readings[i + 1] - readings[i];

        if(change > contact_lost_threshold)
        {
            Serial.print("LIFTOFF!: "); Serial.print(change); 
            Serial.print(" Prev: "); Serial.print(readings[i+1]); 
            Serial.print(" Curr: "); Serial.print(readings[i]);
            Serial.print("\t"); 
            return true;
        }

        if(change > 10)
        {
            number_of_drops++;
            
            if(number_of_drops >= MIN_NUMBER_OF_DROPS)
            {
                return true;
            }
        }
    }

    // If all the measurements are very steady we can assume that the foot is lifting
    for(int i = 0; i < NUMBER_OF_PREVIOUS_READINGS - 1; i++)
    {
        if(abs(readings[i] - readings[i + 1]) > 3)
        {
            return false;
        }
    }

    return true;

}
*/

void ContactSensors::updateReadingHistory(int32_t *readings, int32_t new_reading)
{
    for(int reading = NUMBER_OF_PREVIOUS_READINGS - 1; reading > 0; reading--)
    {
        readings[reading] = readings[reading - 1];
    }
    
    readings[0] = new_reading;
}

void ContactSensors::printReadingHistory()
{
    Serial.print("History: ");

    for(int i = 0; i < NUMBER_OF_PREVIOUS_READINGS; i++)
    {
        Serial.print(readings[i]); Serial.print("\t");
    }
}

void ContactSensors::printLastChange()
{
    Serial.print("Change: "); Serial.print(readings[0] - readings[1]); Serial.print("\t");
}