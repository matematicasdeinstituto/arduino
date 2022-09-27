#pragma once

#ifndef __LEDS_H__
#define __LEDS_H__

// Metemos todos los prototipos de función en un archivo .h
// Prototipos de función

// Funciones que afectan a un solo LED
void led_enciende(int pin_led); // enciende el LED conectado al pin_led
void led_apaga(int pin_led);	// apaga           "       "

// Funciones que afectan a un rango de LEDs
// [led0, led1] = pines donde están conectados los LEDs
void leds_init(int led0, int led1);
void leds_apaga(int led0, int led1);
void leds_enciende(int led0, int led1);
void leds_parpadea(int led0, int led1, int nrep);
void leds_hacia_el_centro(int led0, int led1);
void leds_del_centro_hacia_fuera(int led0, int led1);
void leds_tetris(int led0, int led1);
void leds_parpadeo_alterno(int led0, int led1);


#endif
