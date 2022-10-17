#pragma once

#ifndef __SEMAFORO_PEATON_H__
#define __SEMAFORO_PEATON_H__


#include "led.h"    
#include "pulsador_v2.h"    


class Semaforo_peaton{
public:
    // Define los pines del semáforo
    Semaforo_peaton (int pin_rojo, int pin_verde, int pin_pulsador);
    
// Estado inicial: abierto = en rojo
    void cerrado();

// Operaciones
    // Abre el semáforo para los coches (pasa de rojo a verde)
    void abre();
    
    // Cierra el semáforo para los coches (pasa de verde a rojo)
    void cierra();

// Consulta
    // Mira si el peatón ha pulsado el pulsador. Si lo ha pulsado devuelve
    // true. En caso contrario false. 
    bool no_hay_peaton();

private:
    LED rojo;
    LED verde;
    Pulsador pulsador;
};


#endif


