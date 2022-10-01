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

    int no_pulsado = HIGH;

    while(true){
        no_pulsado = digitalRead(pulsador_pin);    

        if (no_pulsado)
            led.off();

        else
            led.on();
    }
}


