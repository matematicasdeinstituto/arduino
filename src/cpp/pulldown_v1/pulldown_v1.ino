// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

#include "led.h"

// Conexiones
constexpr int led_pin      = 13;
constexpr int pulsador_pin = 12;


void setup()
{
    pinMode(pulsador_pin, INPUT);
}


int main()
{
    init();
    setup();
    LED led{led_pin};

    int pulsado = LOW;

    while(true){
        pulsado = digitalRead(pulsador_pin);    

        if (pulsado)
            led.on();

        else
            led.off();
    }
}


