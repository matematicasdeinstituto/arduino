// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas:
//  1. Clases


#include "led.h"

// Conexiones
constexpr int led_pin = 6;



int main()
{
    init();

    LED led{led_pin};

    while (true){
        led.on();
        delay(500);
        led.off();
        delay(500);
    }
}



