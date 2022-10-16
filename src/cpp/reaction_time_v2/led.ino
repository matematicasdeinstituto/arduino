#include "led.h"

// Anotamos el pin al que está conectado el LED para no tener que volver
// a pasarlo como parámetro a las funciones, y definimos el pin como de
// salida.
LED::LED(int pin0)
{
    pin = pin0; 

    pinMode(pin, OUTPUT);
}


void LED::on() const
{
    digitalWrite(pin, HIGH);   
}

void LED::off() const
{
    digitalWrite(pin, LOW);   
}


