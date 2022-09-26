// Ideas nuevas:
//  1. Separar en diferentes archivos el programa.
//  2. Archivos de cabecera.


#include "leds.h"   // fundamental: incluir el archivo con los prototipos
// Conexiones
constexpr int led_min_pin = 2;
constexpr int led_max_pin = 9;

// Configuración
constexpr int time_delay_in_ms = 100;



void setup() {
    leds_init();
}


void loop() {
    leds_parpadea(3);
    leds_apaga();
    delay(1000);
}



int main()
{
    init();

    setup();

    while (true){
        loop();
    }
}



