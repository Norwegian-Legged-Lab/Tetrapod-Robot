#ifndef contact_sensor_h
#define contact_sensor_h

#include "Arduino.h"

class ContactSensor
{
    public: ContactSensor();

    public: void updateSensorOffsets();

    private: void updateReading();

    private: void updateState();

    public: uint16_t getReading(){return sensor_reading;}

    public: uint16_t getState(){return contact_sensor_state;}

    private: uint16_t sensor_reading_offset;

    private: uint16_t sensor_reading;

    private: uint16_t sensor_pin;

    private: uint16_t sensor_variance;

    private: uint16_t sensor_variance_no_contact;

    private: bool contact_sensor_state; 

};

#endif