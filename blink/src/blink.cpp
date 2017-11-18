#include    "blink.h"

#define LED_STAND_PIN 13

unsigned long time = 0;
unsigned long DELAY = 1000000;
bool on = false;

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
void setup()
{
    pinMode(LED_STAND_PIN, OUTPUT);
}

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
void loop()
{
    if ( micros() >= time + DELAY )
    {
        time = micros();
        on = !on;
    }

    uint8_t state = on ? HIGH : LOW;

    digitalWrite(LED_STAND_PIN, state);
}
