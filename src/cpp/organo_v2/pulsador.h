#pragma once

#ifndef __PULSADOR_H__
#define __PULSADOR_H__

class Pulsador{
public:
    Pulsador(int pin_pulsador);

    // Devuelve true si está presionado el pulsador. false en caso contrario.
    bool presionado() const;

    // Devuelve true si el pulsador no está presionado.
    bool no_presionado() const;

private:
    const int pin;
};

inline Pulsador::Pulsador(int pin_pulsador)
		    : pin{pin_pulsador}
{
    pinMode(pin, INPUT_PULLUP);	// este es el único cambio que hay que hacer
}

inline bool Pulsador::presionado() const
{
    return (digitalRead(pin) == LOW);
}


inline bool Pulsador::no_presionado() const
{
    return !presionado();
}


#endif


