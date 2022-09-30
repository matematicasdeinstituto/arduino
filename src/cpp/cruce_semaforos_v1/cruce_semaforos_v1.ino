// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Cruce de semáforos
// Los semáforos van cambiando en el siguiente orden
//
//  semaforo1   semaforo2
//  ---------   ---------
//      R           R
//      G           R
//      A           R
//      R           R
//      R           G
//      R           A
//
//  con G = green (verde), Y = yellow (amarillo) y R = red (rojo)

#include "semaforo.h"  

// Conexiones
constexpr int smf1_verde_pin     = 4;
constexpr int smf1_amarillo_pin  = 5;
constexpr int smf1_rojo_pin      = 6;

constexpr int smf2_verde_pin     = 7;
constexpr int smf2_amarillo_pin  = 8;
constexpr int smf2_rojo_pin      = 9;


int main()
{
    init();

    Semaforo smf1(smf1_rojo_pin, smf1_amarillo_pin, smf1_verde_pin);
    Semaforo smf2(smf2_rojo_pin, smf2_amarillo_pin, smf2_verde_pin);

    while (true){
        smf1.rojo_on();
        smf2.rojo_on();
        delay(2000);

        smf1.verde_on();
        // smf2.rojo_on();
        delay(1000);

        smf1.amarillo_on();
        // smf2.rojo_on();
        delay(1000);

        smf1.rojo_on();
        // smf2.rojo_on();
        delay(1000);

        // smf1.rojo_on();
        smf2.verde_on();
        delay(1000);

        // smf1.rojo_on();
        smf2.amarillo_on();
        delay(1000);
    }
}



