#include "semaforo_peaton.h"

Semaforo_peaton::Semaforo_peaton(int pin_rojo, int pin_verde, int pin_pulsador)
        : rojo{pin_rojo}, verde{pin_verde}, pulsador{pin_pulsador}
{}


void Semaforo_peaton::cerrado()
{
    verde.off();
    rojo.on();
}


void Semaforo_peaton::abre()
{
    verde.on();
    rojo.off();
}

    
// En lugar de pasar de verde a rojo directamente
// hacemos que el verde parpadee un rato
void Semaforo_peaton::cierra()
{
    parpadea(verde, 5, 300);
    verde.off();
    rojo.on();
}


bool Semaforo_peaton::no_hay_peaton()
{
    return !pulsador.recien_pulsado();
}

