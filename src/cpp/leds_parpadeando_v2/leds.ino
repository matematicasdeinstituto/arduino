// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

#include "leds.h"   // fundamental: incluir el archivo con los prototipos

// ¿merece la pena definir esta función?
// Es fundamental que el código que escribas se entienda. 
// ¿Qué entiendes mejor: digitalWrite(pin, HIGH) o led_enciende(pin)?
void led_enciende(int pin)
{
    digitalWrite(pin, HIGH);
}


void led_apaga(int pin)
{
    digitalWrite(pin, LOW);
}

void leds_init(int led0, int led1)
{
    for (int i = led0; i <= led1; ++i)
        pinMode(i, OUTPUT);
}

void leds_apaga(int led0, int led1)
{
    for (int i = led0; i <= led1; ++i)
        led_apaga(i);
}

void leds_enciende(int led0, int led1)
{
    for (int i = led0; i <= led1; ++i)
        led_enciende(i);
}


void leds_parpadea(int led0, int led1, int nrep)
{
    for (int i = 0; i < nrep; ++i){
        leds_apaga(led0, led1);
        delay(100);
        leds_enciende(led0, led1);
        delay(100);
    }
}


