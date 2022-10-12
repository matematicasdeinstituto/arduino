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
    bool presionado = false;    // indica si el pulsador está presionado o no

    // ¿¿¿qué pasaría si escribes esto dentro del bucle while???
    int i = 0; // número de veces que se ha presionado, para 
               // visualizar mejor cuándo se escribo Do

    // OBSERVAR que C++ distingue entre `presionado` que es la variable que
    // hemos definido aquí, de `pulsador.presionado()` que es la función de
    // pulsador. 
    while(true){
        if (!presionado){ // la exclamación delante significa: NO presionado
            if (pulsador.presionado()){
                ++i;
                Serial.print(i);
                Serial.println(": Do");
                presionado = true;
            }
        }
        else {// caso contrario a !presionado == presionado
            if (pulsador.no_presionado())
                presionado = false;
        }

    }
}


