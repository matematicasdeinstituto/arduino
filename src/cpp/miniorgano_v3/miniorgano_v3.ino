// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas:
//  1. enumeraciones
//  2. switch

#include "pulsador_v2.h"

// Conexiones
constexpr int pulsador_pin = 3;


int main()
{
    init();

// init serial:
    Serial.begin(9600);
    while (!Serial) { ; }

// init pulsador
    Pulsador pulsador{pulsador_pin};


    int i = 0;  // esto sobra. Prueba a eliminarlo para ver el efecto.
                // Lo pongo por cuestiones estéticas, para que se pueda
                // ver mejor cómo funciona el programa.
    while(true){
        if (pulsador.estado() == Pulsador_estado::recien_pulsado){
            ++i;
            Serial.print(i);
            Serial.println(": Do");
        }
    }
}


