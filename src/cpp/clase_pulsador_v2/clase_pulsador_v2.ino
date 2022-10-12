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


    while(true){
        switch (pulsador.estado()){
            break; case Pulsador_estado::recien_pulsado:
                Serial.print("\nPulsado"); // ¿por qué no pongo println?
                                           // El \n del principio es para
                                           // decirle que imprima un retorno
                                           // de carro

            break; case Pulsador_estado::recien_soltado:
                Serial.print("\nSoltado");

            break; case Pulsador_estado::sigue_pulsado:
                Serial.print('p');  // Para imprimir un solo caracter escríbelo
                                    // entre comillas simples
                                    //
            break; case Pulsador_estado::sigue_soltado:
                Serial.print('s');

        }

        delay(100); // para que no imprima muy rápido
    }
}


