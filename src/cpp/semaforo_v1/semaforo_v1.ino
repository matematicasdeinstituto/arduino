// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino


#include "semaforo.h"  

// Conexiones
constexpr int led_verde_pin     = 4;
constexpr int led_amarillo_pin  = 5;
constexpr int led_rojo_pin      = 6;


// Configuración





void loop() {
    semaforo_verde();
    delay(2000);
    semaforo_amarillo();
    delay(1000);
    semaforo_rojo();
    delay(2000);
}



int main()
{
    init();

    semaforo_init(led_rojo_pin, led_amarillo_pin, led_verde_pin);

    while (true){
        loop();
    }
}



