// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas: 
//  1. Bucles for
//  2. Toda función debe de ser pequeña: máximo 4-5 líneas.
//     Lo más grande que debe de ser una función es el tamaño de la pantalla.
//     Hay programas con funciones de más de 10.000 líneas: es imposible
//     razonar sobre esas funciones.
//
//     Recuerda: es muy fácil programar, muy difícil programar bien.
//     Todos los programas tienen errores, todos los programas los querrás
//     modificar en el futuro para añadir cosas. Escribe el programa de tal
//     manera que lo entiendas dentro de 1 año.
//
// Conexiones
constexpr int led_min_pin = 2;
constexpr int led_max_pin = 9;

// Configuración
constexpr int time_delay_in_ms = 100;

// Observa la forma de nombrar a las funciones: leds_accion. Esta forma de
// escribir va a ser importante para que sea más sencillo aprender a manejar
// clases.
void leds_apaga()
{
// 1ª versión: usando while
// int i = 2;               <-- primera instrucción a realizar
// while (i <= 9){          <-- condición para seguir iterando
//  digitalWrite(i, LOW);
//  ++i;                    <-- siempre al final incrementamos en 1 `i`.
// }
//
// 2ª versión: bucle for
// for (int i = 2; i <= 9; ++i)
//  digitalWrite(i, LOW);
//
// 3ª versión: en lugar de 2 y 9 usamos led_min_pin/led_max_pin
    for (int i = led_min_pin; i <= led_max_pin; ++i)
        digitalWrite(i, LOW);
}


void leds_enciende_solo(int led_pin)
{
    leds_apaga();
    digitalWrite(led_pin, HIGH);
}


// Los LEDs son pines de salida
void setup() {
    for (int i = led_min_pin; i <= led_max_pin; ++i)
        pinMode(i, OUTPUT);
}


void loop() {
    for (int i = led_min_pin; i <= led_max_pin; ++i){
        leds_enciende_solo(i);
        delay(time_delay_in_ms);
    }

    for (int i = led_max_pin; i >= led_min_pin; --i){
        leds_enciende_solo(i);
        delay(time_delay_in_ms);
    }
}


int main()
{
    init();
    setup();

    while (true){
        loop();
    }
}


