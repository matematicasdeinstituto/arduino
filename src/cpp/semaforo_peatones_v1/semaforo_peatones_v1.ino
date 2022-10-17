// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

#include "semaforo_peaton.h"  
#include "semaforo_coche.h"  

// Conexiones
constexpr int smfp_rojo_pin     = 3;
constexpr int smfp_verde_pin    = 4;
constexpr int smfp_pulsador_pin = 5;

constexpr int smf_rojo_pin      = 9;
constexpr int smf_amarillo_pin  = 10;
constexpr int smf_verde_pin     = 11;


int main()
{
    init();

    Semaforo_peaton smf_peaton{smfp_rojo_pin, smfp_verde_pin, 
                                                smfp_pulsador_pin};
    Semaforo_coche smf_coche{smf_rojo_pin, smf_amarillo_pin, smf_verde_pin};

    // Estado inicial de los semáforos
    smf_peaton.cerrado();
    smf_coche.abierto();

    while (true){
        while (smf_peaton.no_hay_peaton())
        { 
            delay(100); // delay para que no esté el micro continuamente mirando
                        // si alguien hay algún peaton
        }

        smf_coche.cierra();
        delay(800); 
        smf_peaton.abre();
        delay(2000);    // tiempo para que pase el peaton
        smf_peaton.cierra();
        delay(800);
        smf_coche.abre();
    }
}



