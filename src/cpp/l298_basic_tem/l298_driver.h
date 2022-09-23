#pragma once

#ifndef __L298_H__
#define __L298_H__

// Clase para manejar el L298N_driver
template <int in1, int in2,	// conexiones motor 1
	  int in3, int in4>	// conexiones motor 2
class L298N_driver{
public:
    L298N_driver();

    // Operaciones con motor 1
    void motor1_turn_right() const;
    void motor1_turn_left() const;
    void motor1_stop() const;

    // Operaciones con motor 2
    void motor2_turn_right() const;
    void motor2_turn_left() const;
    void motor2_stop() const;

private:
    static constexpr int pin_in1_ = in1;
    static constexpr int pin_in2_ = in2;
    static constexpr int pin_in3_ = in3;
    static constexpr int pin_in4_ = in4;
};


template <int in1, int in2, int in3, int in4>
L298N_driver<in1, in2, in3, in4>::L298N_driver()
{ 
    // Configuramos todos los pines 
    pinMode(pin_in1_, OUTPUT);
    pinMode(pin_in2_, OUTPUT);
    pinMode(pin_in3_, OUTPUT);
    pinMode(pin_in4_, OUTPUT);
}


template <int in1, int in2, int in3, int in4>
void L298N_driver<in1, in2, in3, in4>::motor1_turn_right() const
{
    digitalWrite(pin_in1_, HIGH);
    digitalWrite(pin_in2_, LOW);
}

template <int in1, int in2, int in3, int in4>
void L298N_driver<in1, in2, in3, in4>::motor1_turn_left() const
{
    digitalWrite(pin_in1_, LOW);
    digitalWrite(pin_in2_, HIGH);
}

template <int in1, int in2, int in3, int in4>
void L298N_driver<in1, in2, in3, in4>::motor1_stop() const
{
    digitalWrite(pin_in1_, HIGH);
    digitalWrite(pin_in2_, HIGH);
}

template <int in1, int in2, int in3, int in4>
void L298N_driver<in1, in2, in3, in4>::motor2_turn_right() const
{
    digitalWrite(pin_in3_, HIGH);
    digitalWrite(pin_in4_, LOW);
}

template <int in1, int in2, int in3, int in4>
void L298N_driver<in1, in2, in3, in4>::motor2_turn_left() const
{
    digitalWrite(pin_in3_, LOW);
    digitalWrite(pin_in4_, HIGH);
}

template <int in1, int in2, int in3, int in4>
void L298N_driver<in1, in2, in3, in4>::motor2_stop() const
{
    digitalWrite(pin_in3_, HIGH);
    digitalWrite(pin_in4_, HIGH);
}



#endif

