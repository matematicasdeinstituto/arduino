// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Conexiones
// OBSERVAR: constexpr en lugar de const, como en el ejemplo de Arduino.
constexpr int led_pin      = 13;
constexpr int pulsador_pin = 12;

// variable global!!! EVITARLAS!!!
// Arduino fomenta el uso de variables globales, lo cual está totalmente
// desaconsejado por los problemas que generan.
int no_pulsado = HIGH; // sin pulsar ¿por qué HIGH y no LOW? Mira el circuito.

void setup()
{
    // inicializamose el LED como pin de salida, mientras que el 
    // pulsador como pin de entrada
    pinMode(led_pin, OUTPUT);
    pinMode(pulsador_pin, INPUT);
}

void loop()
{
    // leemos el potencial del pin: puede ser 0 (0 voltios)  ó 1 (5 Voltios)
    no_pulsado = digitalRead(pulsador_pin);    

    // OBSERVAR: el ejemplo de Arduino pone el digitalWrite dentro de llaves {}.
    // Si solo se quiere ejecutar una sola línea eso no es necesario. 
    // De hecho, suele ser más fácil de leer no poner las llaves que ponerlas, 
    // pero a gusto de consumidor. 
    // Si lo que quieres ejecutar dentro del if tiene más de 1 instrucción,
    // ponlo todo entre llaves, sino solo ejecutaría la primera instrucción
    // siendo el programa erróneo.
    if (no_pulsado)
        digitalWrite(led_pin, LOW);

    else
        digitalWrite(led_pin, HIGH);
}



