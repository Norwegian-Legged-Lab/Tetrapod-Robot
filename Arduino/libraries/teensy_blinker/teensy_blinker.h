#ifndef teensy_blinker_h
#define teensy_blinker_h

class TEENSY_LED
{
public:
    TEENSY_LED()
    {
        pinMode(led_pin, OUTPUT);
    }

    void blink(int _number_of_blinks)
    {
        for(int i = 0; i < _number_of_blinks; i++)
        {
            digitalWrite(led_pin, HIGH);
            delay_us(on_time_microseconds);

            digitalWrite(led_pin, LOW);
            delay_us(off_time_microseconds);
        }
    }

    void pause()
    {
        delay_us(delay_time_between_commands);
    }
private:
    const int led_pin = 13;
    bool is_on = false;
    const double on_time_microseconds = 300000.0;
    const double off_time_microseconds = 300000.0;
    const double delay_time_between_commands = 1500000.0;
    void delay_us(double time_us)
    {
        double timer = micros();
        while(timer + time_us > micros());
    }
};

#endif