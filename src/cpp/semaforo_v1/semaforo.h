#pragma once

#ifndef __SEMAFORO_H__
#define __SEMAFORO_H__

void semaforo_init(int led_rojo_pin, int led_amarillo_pin, int led_verde_pin);
void semaforo_rojo();
void semaforo_amarillo();
void semaforo_verde();

#endif


