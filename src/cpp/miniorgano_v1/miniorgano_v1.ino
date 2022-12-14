// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino


#include "pulsador_v1.h"

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

    while(true){
        if (pulsador.presionado())
            Serial.println("Do");

        else 
            Serial.println("Fin");
    }
}


