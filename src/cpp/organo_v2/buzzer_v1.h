#pragma once

#ifndef __BUZZER_V1_H__
#define __BUZZER_V1_H__


class Buzzer{
public:
    Buzzer (int pin);

    void toca(int freq); // frecuencia
    void toca(int freq, int t_ms); 
    void stop(); // deja de tocar

// Tocamos las notas musicales.
    void toca_do() { toca(do1); }
    void toca_re() { toca(re1); }
    void toca_mi() { toca(mi1); }
    void toca_fa() { toca(fa1); }
    void toca_sol() { toca(sol1); }
    void toca_la() { toca(la1); }
    void toca_si() { toca(si1); }

private:
    int pin_;	// pin al que conectamos el buzzer

// Como definimos las frecuencias private el usuario de la clase
// no tiene acceso a estos valores. Lo que quiero es ocultarle los detalles
// de implementación. Cuando un pianista toca un piano, toca la tecla Do, pero
// no tiene ni idea de si su frecuencia es 261 ó 300 Hz. 
// Confieso que me suena un poco raro. ¿Algún error en alguna frecuencia o es
// culpa del buzzer? 
    static constexpr int do1   = 261;
    static constexpr int doS1  = 277;
    static constexpr int re1   = 294;
    static constexpr int reS1  = 311;
    static constexpr int mi1   = 330;
    static constexpr int fa1   = 349;
    static constexpr int faS1  = 369;
    static constexpr int sol1  = 391;
    static constexpr int solS1 = 415;
    static constexpr int la1   = 440;
    static constexpr int laS1  = 466;
    static constexpr int si1   = 494;
};



// CUIDADO: como estas funciones se limitan a llamar a otra función
// las defino `inline`. Puede dar la impresión de que esto es lo habitual:
// FALSO!!! Lo normal es definir las funciones dentro de un .ino, y nunca
// dentro del .h. Estas se definen en el .h porque son `inline`.
inline Buzzer::Buzzer(int pin) : pin_{pin}
{
    pinMode(pin_, OUTPUT);
}

inline void Buzzer::toca(int freq)
{
    tone(pin_, freq);
}

inline void Buzzer::toca(int freq, int t_ms)
{
    tone(pin_, freq, t_ms);
}

inline void Buzzer::stop()
{
    noTone(pin_);
}

#endif


