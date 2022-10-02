#pragma once

#ifndef __PULSADOR__CON_PULLUP_H__
#define __PULSADOR__CON_PULLUP_H__

class Pulsador_con_pullup{
public:
    Pulsador_con_pullup(int pin_pulsador);

    // Devuelve true si está presionado el pulsador. false en caso contrario.
    bool presionado() const;

    // Devuelve true si el pulsador no está presionado.
    bool no_presionado() const;

private:
    const int pin;
};

// Si las funciones son llamada a una única función merece la pena definirlas
// como inline. Son más eficientes.
// Pero solo si su implementación es de una línea. En caso contrario no las
// llames inline.
// Observa que las funciones inline las escribimos en el archivo de cabecera
// .h.
inline Pulsador_con_pullup::Pulsador_con_pullup(int pin_pulsador)
		    : pin{pin_pulsador}
{
    pinMode(pin, INPUT);
}

inline bool Pulsador_con_pullup::presionado() const
{
    return (digitalRead(pin) == LOW);
}


inline bool Pulsador_con_pullup::no_presionado() const
{
    return !presionado();
}


#endif


