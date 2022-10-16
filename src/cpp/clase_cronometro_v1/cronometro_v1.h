#pragma once

#ifndef __CRONOMETRO_V1_H__
#define __CRONOMETRO_V1_H__

class Cronometro{
public:
    Cronometro();
    
    void start(); 
    void stop();

    unsigned long time() const;

private:
    unsigned long t0_;	// tiempo en que se enciende
    unsigned long t1_;  // tiempo en que se apaga
};

// Como todas las funciones son de 1 línea opto por definirlas como inline.
// Observa que las funciones inline se definen en el archivo de cabecera. Si
// no fueran inlines, las tendríamos que definir en un archivo .ino.

// inicializamos t0, t1 a 0
inline Cronometro::Cronometro() : t0_{0}, t1_{0} { }

inline void Cronometro::start() { t0_ = millis(); }
inline void Cronometro::stop () { t1_ = millis(); }

inline unsigned long Cronometro::time() const
{ return t1_ - t0_; }


#endif


