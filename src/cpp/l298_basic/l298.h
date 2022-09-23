#pragma once

#ifndef __L298_H__
#define __L298_H__

// Clase para manejar el L298N
class L298N{
public:
    /// Define las conexiones del L298N
    L298N(int in1, int in2,     // conexiones motor 1
          int in3, int in4);    // conexiones motor 2

    // Operaciones con motor 1
    void motor1_turn_right() const;
    void motor1_turn_left() const;
    void motor1_stop() const;

    // Operaciones con motor 2
    void motor2_turn_right() const;
    void motor2_turn_left() const;
    void motor2_stop() const;

private:
    const int pin_in1_;
    const int pin_in2_;
    const int pin_in3_;
    const int pin_in4_;
};



#endif

