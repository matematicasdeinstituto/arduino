// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

#include "leds.h"   // fundamental: incluir el archivo con los prototipos

// Observar otra forma de escribir las funciones: en una línea
void led_enciende(int pin)  { digitalWrite(pin, HIGH); }
void led_apaga(int pin)     { digitalWrite(pin, LOW); }

void leds_init(int led0, int led1)
{
    for (int i = led0; i <= led1; ++i)
        pinMode(i, OUTPUT);
}

void leds_apaga(int led0, int led1)
{
    for (int i = led0; i <= led1; ++i)
        led_apaga(i);
}

void leds_enciende(int led0, int led1)
{
    for (int i = led0; i <= led1; ++i)
        led_enciende(i);
}


void leds_parpadea(int led0, int led1, int nrep)
{
    for (int i = 0; i < nrep; ++i){
        leds_apaga(led0, led1);
        delay(100);
        leds_enciende(led0, led1);
        delay(100);
    }
}


void leds_hacia_el_centro(int led0, int led1)
{
    int n = led1 - led0 + 1;  // número de LEDs: [led0, led1] sus pines
    int m = n / 2; // se podía hacer en un solo paso: m = (led1 - led0 + 1) / 2;

    leds_apaga(led0, led1);
    for (int i = 0; i < m; ++i){
        led_enciende(led0 + i);              
        led_enciende(led1 - i);
        delay(100);

        led_apaga(led0 + i);              
        led_apaga(led1 - i);
        delay(100);
    }
}


void leds_del_centro_hacia_fuera(int led0, int led1)
{
    int n = led1 - led0 + 1;  // número de LEDs: [led0, led1] sus pines
    int m = n / 2; // se podía hacer en un solo paso: m = (led1 - led0 + 1) / 2;

    leds_apaga(led0, led1);
    for (int i = m - 1; i >= 0; --i){
        led_enciende(led0 + i);              
        led_enciende(led1 - i);
        delay(100);

        led_apaga(led0 + i);              
        led_apaga(led1 - i);
        delay(100);
    }
}

// Esta función hace el efecto de mover la luz desde el led0 hasta el led1
// inclusive. Deja los leds apagados.
// (es el efecto del coche fantástico)
void leds_mueve_desde_hasta(int led0, int led1)
{
    for (int i = led0; i <= led1; ++i){
        led_enciende(i);
        delay(100);
        led_apaga(i);
        delay(100);
    }
}

void leds_tetris(int led0, int led1)
{
    leds_apaga(led0, led1);

    for (int last = led1; last > led0; --last){
        leds_mueve_desde_hasta(led0, last - 1);
        led_enciende(last); // y lo dejamos encendido
    }

    led_enciende(led0);
    delay(100);
}

bool es_par(int n) { return (n % 2) == 0; }
bool es_impar(int n) { return !es_par(n); }

// Compara esta función con leds_apaga_impares
void leds_enciende_impares(int led0, int led1)
{
    int i;
    if (es_par(led0))
        i = led0 + 1;
    else
        i = led0;

    while(i <= led1){
        led_enciende(i);
        i = i + 2;
    }
}


void leds_apaga_impares(int led0, int led1)
{
     int i = led0;
     if (es_par(led0))
          ++i;

    for(; i <= led1; i += 2)
        led_apaga(i);
}

void leds_enciende_pares(int led0, int led1)
{
    int i = led0;
    if (es_impar(led0))
        ++i;

    for(; i <= led1; i += 2)
        led_enciende(i);
}


void leds_apaga_pares(int led0, int led1)
{
     int i = led0;
     if (es_impar(led0))
          ++i;

    for(; i <= led1; i += 2)
        led_apaga(i);
}


void leds_parpadeo_impares(int led0, int led1)
{
    leds_enciende_impares(led0, led1);
    delay(100);

    leds_apaga_impares(led0, led1);
    delay(100);
}

void leds_parpadeo_pares(int led0, int led1)
{
    leds_enciende_pares(led0, led1);
    delay(100);

    leds_apaga_pares(led0, led1);
    delay(100);
}

void leds_parpadeo_alterno(int led0, int led1)
{
    leds_apaga(led0, led1);
//    leds_parpadeo_pares(led0, led1);
//    leds_parpadeo_impares(led0, led1);
    leds_enciende_pares(led0, led1);
    delay(100);
    leds_apaga_pares(led0, led1);
    leds_enciende_impares(led0, led1);
    delay(100);
    leds_apaga_impares(led0, led1);
}


