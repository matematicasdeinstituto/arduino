#pragma once

#ifndef __SEMAFORO_COCHE_H__
#define __SEMAFORO_COCHE_H__

#include "led.h"    


class Semaforo_coche{
public:
    // Define los pines del semáforo
    Semaforo_coche (int pin_rojo, int pin_amarillo, int pin_verde);
    
// Estado inicial: abierto = en verde
    void abierto();

// Operaciones
    // Abre el semáforo para los coches (pasa de rojo a verde)
    void abre();
    
    // Cierra el semáforo para los coches (pasa de verde a rojo)
    void cierra();

private:
    LED rojo;
    LED amarillo;
    LED verde;
};


#endif


