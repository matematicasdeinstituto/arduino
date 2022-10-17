#include "semaforo_coche.h"

Semaforo_coche::Semaforo_coche(int pin_rojo, int pin_amarillo, int pin_verde)
    : rojo{pin_rojo},     
      amarillo{pin_amarillo},
      verde{pin_verde}
{ }


void Semaforo_coche::abierto()
{
    verde.on();
    amarillo.off();
    rojo.off();
}

void Semaforo_coche::abre()
{
    verde.on();
//    amarillo.off(); <-- es de esperar que esté apagado
    rojo.off(); 
}


void Semaforo_coche::cierra()
{
    verde.off();
    amarillo.on();
    delay(1000);
    amarillo.off();
    rojo.on();
}


