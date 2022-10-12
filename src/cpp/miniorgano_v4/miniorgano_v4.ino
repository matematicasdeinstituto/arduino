// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino


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


    int i = 0;
    while(true){
        if (pulsador.recien_pulsado()){ // <-- comparar con versión anterior
            ++i;
            Serial.print(i);
            Serial.println(": Do");
        }
    }
}


