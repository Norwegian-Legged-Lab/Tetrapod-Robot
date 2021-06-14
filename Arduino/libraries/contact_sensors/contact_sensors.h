#ifndef contact_sensors_h
#define contact_sensors_h

#include "Arduino.h"

#include "utilities.h"

const uint8_t NUMBER_OF_SENSORS = 1;

class ContactSensors
{
    private: int contact_detected_threshold = 10;

    private: int contact_lost_threshold = 5;

    public: ContactSensors();

    public: void updateSensorOffsets();

    public: void updateReadings();

    public: void updateStates();

    public: void printReadings();

    public: void printStates();

    private: bool contactDetected(int _sensor_id);

    private: bool contactLost(int _sensor_id);

    public: uint32_t previous_time;

    private: int32_t sensor_reading_offset[NUMBER_OF_SENSORS];

    private: uint16_t previous_sensor_reading[NUMBER_OF_SENSORS];

    private: int32_t sensor_reading[NUMBER_OF_SENSORS];

    private: uint16_t sensor_pin[NUMBER_OF_SENSORS];

    private: uint16_t sensor_variance[NUMBER_OF_SENSORS];

    private: uint16_t sensor_variance_no_contact[NUMBER_OF_SENSORS];

    private: bool contact_sensor_state[NUMBER_OF_SENSORS];
};

#endif