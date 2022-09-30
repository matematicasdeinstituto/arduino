// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino


#include "semaforo.h"  

// Conexiones
constexpr int led_verde_pin     = 4;
constexpr int led_amarillo_pin  = 5;
constexpr int led_rojo_pin      = 6;



int main()
{
    init();

    Semaforo semaforo(led_rojo_pin, led_amarillo_pin, led_verde_pin);

    while (true){
        semaforo.verde_on();
        delay(2000);
        semaforo.amarillo_on();
        delay(1000);
        semaforo.rojo_on();
        delay(2000);
    }
}



