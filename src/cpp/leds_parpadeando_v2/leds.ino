#include "leds.h"   // fundamental: incluir el archivo con los prototipos

void leds_init()
{
    for (int i = led_min_pin; i <= led_max_pin; ++i)
        pinMode(i, OUTPUT);
}

void leds_apaga()
{
    for (int i = led_min_pin; i <= led_max_pin; ++i)
        digitalWrite(i, LOW);
}

void leds_enciende()
{
    for (int i = led_min_pin; i <= led_max_pin; ++i)
        digitalWrite(i, HIGH);
}


void leds_parpadea(int nrep)
{
    for (int i = 0; i < nrep; ++i){
        leds_apaga();
        delay(100);
        leds_enciende();
        delay(100);
    }
}
