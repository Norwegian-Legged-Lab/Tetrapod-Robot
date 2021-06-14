#ifndef contact_sensors_h
#define contact_sensors_h

#include "Arduino.h"

#include "utilities.h"

#include "math.h"

const uint8_t NUMBER_OF_SENSORS = 1;

const int NUMBER_OF_PREVIOUS_READINGS = 10;

const int NUMBER_OF_STEADY_SAMPLES = 5;

class ContactSensors
{
    private: int32_t contact_detected_threshold = 10;

    private: int32_t contact_lost_threshold = 50;

    public: ContactSensors();

    public: void updateSensorOffsets();

    public: void updateReadings();

    public: void updateStates();

    public: void printReadings();

    public: void printStates();

    public: void printLastChange();

    private: bool contactDetected(int _sensor_id);

    private: bool contactLost(int _sensor_id);

    

    public: uint32_t previous_time;

    private: int32_t sensor_reading_offset[NUMBER_OF_SENSORS];

    private: int32_t previous_sensor_reading[NUMBER_OF_SENSORS];

    private: int32_t sensor_reading[NUMBER_OF_SENSORS];

    private: int16_t sensor_pin[NUMBER_OF_SENSORS];

    private: uint16_t sensor_variance[NUMBER_OF_SENSORS];

    private: uint16_t sensor_variance_no_contact[NUMBER_OF_SENSORS];

    private: bool contact_sensor_state[NUMBER_OF_SENSORS];

    public: void updateReadingHistory(int32_t *_readings, int32_t _new_reading);

    public: void printReadingHistory();

    private: int32_t readings[NUMBER_OF_PREVIOUS_READINGS];

};

#endif