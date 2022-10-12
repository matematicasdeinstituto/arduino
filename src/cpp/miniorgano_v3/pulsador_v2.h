#pragma once

#ifndef __PULSADOR_V2_H__
#define __PULSADOR_V2_H__

// En muchas ocasiones vamos a necesitar crear un conjunto de estados. La
// forma más básica de hacerlo sería:
// constexpr int pulsador_recien_pulsado   = 0;
// constexpr int pulsador_recien_soltado   = 1;
// constexpr int pulsador_sigue_pulsado	   = 2;
// constexpr int pulsador_sigue_soltado    = 3;
// Uno de los problemas con hacer esto es que es muy propenso a error (te
// puedes confundir al numerarlos, o más adelante añades otro estado y asignas
// mal el número, ...).
//
// Para evitar esos errores C++ suministra las enumeraciones `enum class`: lo
// que hacen es asignar automáticamente números evitando posibles errores.
// El código comentado arriba es similar al siguiente:
enum class Pulsador_estado{
    recien_pulsado,	// se ha presionado desde la última vez que se miró
    recien_soltado,	// se ha soltado    desde la última vez que se miró
    sigue_pulsado, 
    sigue_soltado
};


class Pulsador{
public:
    Pulsador(int pin_pulsador);

    // Devuelve el estado en el que se encuentra el pulsador desde la última
    // vez que se miró.
    // Observar que esta función no es `const` ya que va a modificar el
    // estado.
    Pulsador_estado estado();

    // Devuelve true si está presionado el pulsador. false en caso contrario.
    bool presionado() const;

    // Devuelve true si el pulsador no está presionado.
    bool no_presionado() const;

private:
    const int pin;
    bool presionado_;
};

inline Pulsador::Pulsador(int pin_pulsador)
		    : pin{pin_pulsador}
{
    pinMode(pin, INPUT_PULLUP);	

// Anotamos el estado del pin (<-- este comentario sobra, lo pongo para
// explicar. Intenta comentar lo mínimo posible, el código tiene que poder
// leerse).
    if (digitalRead(pin) == LOW)
	presionado_ = true;

    else
	presionado_ = false;

// Esto se puede escribir de forma críptica:
//  presionado_ = (digitalRead(pin) == LOW); <--- ESTILO PÉSIMO DE
//  PROGRAMACIÓN: recuerda, programar es muy sencillo, mantener muy dificil.
//  Si tienes que modificar tu programa dentro de 1 año ¿entenderás lo que
//  está escrito?

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


