#pragma once

#ifndef __SEMAFORO_H__
#define __SEMAFORO_H__

#include "led.h"    // observar que como voy a usar la clase LED
                    // necesito incluir este archivo de cabecera

// Convenio: Todas las clases empiezan siempre con la primera letra en
// mayúscula. De esta forma cuando queramos definir un semáforo podemos hacer:
//          Semaforo semaforo;
//              ^       ^
//              |       |
//            clase    objeto
class Semaforo{
public:
    Semaforo (int pin_rojo, int pin_amarillo, int pin_verde);
    
    void rojo_on();
    void amarillo_on();
    void verde_on();

private:
    LED rojo;
    LED amarillo;
    LED verde;
};


#endif


