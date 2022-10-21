#pragma once

#ifndef __BUZZER_V1_H__
#define __BUZZER_V1_H__

// No he encontrado cómo se llaman estas octavas en español, así que uso el
// inglés.
enum class Octava{
    great, small, one_line, two_line, three_line
};


class Buzzer{
public:
    Buzzer (int pin);

    void toca(int freq); // frecuencia
    void toca(int freq, int t_ms); 
    void stop(); // deja de tocar

// Tocamos las notas musicales.
// Por defecto, si no se pasa la octava en la que queremos tocar la nota, es
// la octava one_line.
    void toca_do(Octava octava = Octava::one_line); 
    void toca_do_sostenido(Octava octava = Octava::one_line); 
    void toca_re(Octava octava = Octava::one_line);
    void toca_re_sostenido(Octava octava = Octava::one_line);
    void toca_mi(Octava octava = Octava::one_line);
    void toca_fa(Octava octava = Octava::one_line);
    void toca_fa_sostenido(Octava octava = Octava::one_line);
    void toca_sol(Octava octava = Octava::one_line);
    void toca_sol_sostenido(Octava octava = Octava::one_line);
    void toca_la(Octava octava = Octava::one_line);
    void toca_la_sostenido(Octava octava = Octava::one_line);
    void toca_si(Octava octava = Octava::one_line);

private:
    int pin_;	// pin al que conectamos el buzzer

// Como definimos las frecuencias private el usuario de la clase
// no tiene acceso a estos valores. Lo que quiero es ocultarle los detalles
// de implementación. Cuando un pianista toca un piano, toca la tecla Do, pero
// no tiene ni idea de si su frecuencia es 261 ó 300 Hz. 

// Voy a clasificar las octavas tal como lo hace el piano:
//  great, small, one_line, two_line, three_line, abreviándolas
//    _1 ,   0  ,    1    ,    2    ,     3
//
//  NOTA: En C++ se podría hacer todo esto de forma más sencilla, ya que se
//  puede hacer que el compilador calcule todo esto. Pero estamos aprendiendo,
//  así que hagámoslo de la forma más sencilla que sabemos

    static constexpr int do_1  = 65;
    static constexpr int doS_1 = 69;
    static constexpr int re_1  = 73;
    static constexpr int reS_1 = 78;
    static constexpr int mi_1  = 82;
    static constexpr int fa_1  = 87;
    static constexpr int faS_1 = 92;
    static constexpr int sol_1 = 98;
    static constexpr int solS_1= 104;
    static constexpr int la_1  = 110;
    static constexpr int laS_1 = 117;
    static constexpr int si_1  = 123;

    static constexpr int do0  = 131;
    static constexpr int doS0 = 139;
    static constexpr int re0  = 147;
    static constexpr int reS0 = 156;
    static constexpr int mi0  = 165;
    static constexpr int fa0  = 175;
    static constexpr int faS0 = 185;
    static constexpr int sol0 = 196;
    static constexpr int solS0= 208;
    static constexpr int la0  = 220;
    static constexpr int laS0 = 233;
    static constexpr int si0  = 247;

    static constexpr int do1  = 262;
    static constexpr int doS1 = 277;
    static constexpr int re1  = 294;
    static constexpr int reS1 = 311;
    static constexpr int mi1  = 330;
    static constexpr int fa1  = 349;
    static constexpr int faS1 = 370;
    static constexpr int sol1 = 392;
    static constexpr int solS1= 415;
    static constexpr int la1  = 440;
    static constexpr int laS1 = 466;
    static constexpr int si1  = 494;

    static constexpr int do2  = 523;
    static constexpr int doS2 = 554;
    static constexpr int re2  = 587;
    static constexpr int reS2 = 622;
    static constexpr int mi2  = 659;
    static constexpr int fa2  = 698;
    static constexpr int faS2 = 740;
    static constexpr int sol2 = 784;
    static constexpr int solS2= 831;
    static constexpr int la2  = 880;
    static constexpr int laS2 = 932;
    static constexpr int si2  = 988;

    static constexpr int do3  = 1046;
    static constexpr int doS3 = 1109;
    static constexpr int re3  = 1175;
    static constexpr int reS3 = 1244;
    static constexpr int mi3  = 1318;
    static constexpr int fa3  = 1397;
    static constexpr int faS3 = 1480;
    static constexpr int sol3 = 1568;
    static constexpr int solS3= 1661;
    static constexpr int la3  = 1760;
    static constexpr int laS3 = 1865;
    static constexpr int si3  = 1976;


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


