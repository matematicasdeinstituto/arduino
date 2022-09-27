// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

#include "l298.h"

// Implementación de la clase L298N

L298N::L298N(int in1, int in2, int in3, int in4)
    : pin_in1_{in1}
    , pin_in2_{in2}
    , pin_in3_{in3}
    , pin_in4_{in4}
{ 
    // Configuramos todos los pines 
    pinMode(pin_in1_, OUTPUT);
    pinMode(pin_in2_, OUTPUT);
    pinMode(pin_in3_, OUTPUT);
    pinMode(pin_in4_, OUTPUT);
}


void L298N::motor1_turn_right() const
{
    digitalWrite(pin_in1_, HIGH);
    digitalWrite(pin_in2_, LOW);
}

void L298N::motor1_turn_left() const
{
    digitalWrite(pin_in1_, LOW);
    digitalWrite(pin_in2_, HIGH);
}

void L298N::motor1_stop() const
{
    digitalWrite(pin_in1_, HIGH);
    digitalWrite(pin_in2_, HIGH);
}

void L298N::motor2_turn_right() const
{
    digitalWrite(pin_in3_, HIGH);
    digitalWrite(pin_in4_, LOW);
}

void L298N::motor2_turn_left() const
{
    digitalWrite(pin_in3_, LOW);
    digitalWrite(pin_in4_, HIGH);
}

void L298N::motor2_stop() const
{
    digitalWrite(pin_in3_, HIGH);
    digitalWrite(pin_in4_, HIGH);
}


