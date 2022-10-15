// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

#include "tiempo.h"

int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

    Serial.print("Número de milisegundos: ");
    while(true){
        if (Serial.available() > 0){
            long t0 = Serial.parseInt(); 
    
            if (t0 > 0){
                long t = t0;    // lo copio  para poder imprimirlo al final
                                //
                // Convertimos los milisegundos en hh:ss:mm:ms
                long ms = t % 1000;
                t = (t - ms) / 1000;// t = segundos
                                    
                long seg = t % 60;
                t = (t - seg) / 60; // t = minutos

                long min = t % 60;
                long h   = (t - min) / 60;

                // Imprimimos el tiempo
                Serial.print(t0);
                Serial.print(" = ");
                serial_print_time(h, min, seg, ms);
                Serial.print('\n');

                // imprimimos el menú:
                Serial.print("Número de milisegundos: ");
            }
        }
    }
}


