// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

#include "led.h"
#include "pulsador.h"

// Conexiones
constexpr int led_pin      = 13;
constexpr int pulsador_pin = 12;


int main()
{
    init();

    LED led{led_pin};
    Pulsador_con_pullup pulsador{pulsador_pin};

    while(true){
        if (pulsador.presionado())
            led.on();

        else
            led.off();
    }
}


