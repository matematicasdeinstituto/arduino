// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

#include "led.h"
#include "pulsador_v2.h"
#include "cronometro_v1.h"

// conexiones
constexpr int pin_pulsador  = 3;
constexpr int pin_led       = 4;

constexpr unsigned long max_delay = 10000; // espera 10 segundos máximo
                                           
int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

    LED led{pin_led};
    Pulsador pulsador{pin_pulsador};
    Cronometro crono;

    while(true){
        // encendemos aleatoriamente el LED
        led.off();
        unsigned long td = random(max_delay);
        delay(td);
        led.on();

        // medimos tiempo de reacción
        crono.start();
        while (!pulsador.recien_pulsado()) { ; }
        crono.stop();

        // imprimos mensaje
        Serial.print(crono.time()); 
        Serial.println(" ms");
    }
}


