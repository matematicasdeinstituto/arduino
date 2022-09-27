// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

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
    leds_init(led_min_pin, led_max_pin);
}


void loop() {

    leds_parpadea(led_min_pin, led_max_pin, 3);
    leds_apaga(led_min_pin, led_max_pin);
    delay(1000);
    for (int i = 0; i < 3; ++i){
        leds_hacia_el_centro(led_min_pin, led_max_pin);
        delay(100);
    }

    for (int i = 0; i < 3; ++i){
        leds_del_centro_hacia_fuera(led_min_pin, led_max_pin);
        delay(100);
    }

    // y podemos hacer que reboten
    for (int i = 0; i < 3; ++i){
        leds_hacia_el_centro(led_min_pin, led_max_pin);
        leds_del_centro_hacia_fuera(led_min_pin, led_max_pin);
        delay(100);
    }

    for (int i = 0; i < 3; ++i){
        leds_tetris(led_min_pin, led_max_pin);
        delay(500);
    }

    // Observar que el efecto que he obtenido no era el que en principio
    // buscaba. 
    for (int i = 0; i < 3; ++i){
        leds_parpadeo_alterno(led_min_pin, led_max_pin);
        delay(100);
    }

}



int main()
{
    init();

    setup();

    while (true){
        loop();
    }
}



