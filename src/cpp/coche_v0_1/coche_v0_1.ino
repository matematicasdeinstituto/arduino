// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Prueba básica L298N.
// Probamos a hacer girar los motores en uno u otro sentido.
// Estilo de programación: C++

#include "l298.h"

// pines al que conectamos los motores
constexpr int motor1_in1 = 4;
constexpr int motor1_in2 = 5;

constexpr int motor2_in1 = 6;
constexpr int motor2_in2 = 7;


void run(const L298N& l298) {
    l298.motor1_turn_right();
    l298.motor2_turn_left();
    delay(1000);

    l298.motor1_stop();
    l298.motor2_stop();
    delay(1000);

    l298.motor1_turn_left();
    l298.motor2_turn_right();
    delay(1000);


    l298.motor1_stop();
    l298.motor2_stop();
    delay(1000);
}


int main()
{
    init(); // inicialización del Arduino. Obligatorio llamarla.

    L298N l298{motor1_in1, motor1_in2,
               motor2_in1, motor2_in2};

    while(1){
        run(l298);
        delay(2000);
    }
}

