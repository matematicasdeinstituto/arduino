#pragma once

#ifndef __NOTA_H__
#define __NOTA_H__



// Lo normal habría sido llamar a las notas en minúsculas: do, re, ...
// El problema es que 'do' es una palabra reservada en C++ y no se puede usar,
// por ello me veo obligado a definirla en mayúsculas. Si escribo Do en
// mayúsuculas, escribo el resto también (se siempre consistente con la forma
// de escribir). 
// DUDA: Do_sostenido es muy largo, ¿llamarlo DoS? ¿Do_sos? 
enum class Nota{
    Do, Do_sostenido, 
    Re, Re_sostenido, 
    Mi, 
    Fa, Fa_sostenido,
    Sol, Sol_sostenido,
    La, La_sostenido,
    Si
};

// No he encontrado cómo se llaman estas octavas en español, así que uso el
// inglés.
enum class Octava{
    great, small, one_line, two_line, three_line
};

/***************************************************************************
 *			FRECUENCIAS DE LA ESCALA MUSICAL
 ***************************************************************************/
// Este apartado está pensado para que lo llame el compilador.
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


inline constexpr int frec_great(Nota nota)
{
    switch (nota){
        break; case Nota::Do            : return do_1;
        break; case Nota::Do_sostenido  : return doS_1;
        break; case Nota::Re            : return re_1;
        break; case Nota::Re_sostenido  : return reS_1;
        break; case Nota::Mi            : return mi_1;
        break; case Nota::Fa            : return fa_1;
        break; case Nota::Fa_sostenido  : return faS_1;
        break; case Nota::Sol           : return sol_1;
        break; case Nota::Sol_sostenido : return solS_1;
        break; case Nota::La            : return la_1;
        break; case Nota::La_sostenido  : return laS_1;
        break; case Nota::Si            : return si_1;
    }
}

inline constexpr int frec_small(Nota nota)
{
    switch (nota){
        break; case Nota::Do            : return do0;
        break; case Nota::Do_sostenido  : return doS0;
        break; case Nota::Re            : return re0;
        break; case Nota::Re_sostenido  : return reS0;
        break; case Nota::Mi            : return mi0;
        break; case Nota::Fa            : return fa0;
        break; case Nota::Fa_sostenido  : return faS0;
        break; case Nota::Sol           : return sol0;
        break; case Nota::Sol_sostenido : return solS0;
        break; case Nota::La            : return la0;
        break; case Nota::La_sostenido  : return laS0;
        break; case Nota::Si            : return si0;
    }
}

inline constexpr int frec_one_line(Nota nota)
{
    switch (nota){
        break; case Nota::Do            : return do1;
        break; case Nota::Do_sostenido  : return doS1;
        break; case Nota::Re            : return re1;
        break; case Nota::Re_sostenido  : return reS1;
        break; case Nota::Mi            : return mi1;
        break; case Nota::Fa            : return fa1;
        break; case Nota::Fa_sostenido  : return faS1;
        break; case Nota::Sol           : return sol1;
        break; case Nota::Sol_sostenido : return solS1;
        break; case Nota::La            : return la1;
        break; case Nota::La_sostenido  : return laS1;
        break; case Nota::Si            : return si1;
    }
}

inline constexpr int frec_two_line(Nota nota)
{
    switch (nota){
        break; case Nota::Do            : return do2;
        break; case Nota::Do_sostenido  : return doS2;
        break; case Nota::Re            : return re2;
        break; case Nota::Re_sostenido  : return reS2;
        break; case Nota::Mi            : return mi2;
        break; case Nota::Fa            : return fa2;
        break; case Nota::Fa_sostenido  : return faS2;
        break; case Nota::Sol           : return sol2;
        break; case Nota::Sol_sostenido : return solS2;
        break; case Nota::La            : return la2;
        break; case Nota::La_sostenido  : return laS2;
        break; case Nota::Si            : return si2;
    }
}

inline constexpr int frec_three_line(Nota nota)
{
    switch (nota){
        break; case Nota::Do            : return do3;
        break; case Nota::Do_sostenido  : return doS3;
        break; case Nota::Re            : return re3;
        break; case Nota::Re_sostenido  : return reS3;
        break; case Nota::Mi            : return mi3;
        break; case Nota::Fa            : return fa3;
        break; case Nota::Fa_sostenido  : return faS3;
        break; case Nota::Sol           : return sol3;
        break; case Nota::Sol_sostenido : return solS3;
        break; case Nota::La            : return la3;
        break; case Nota::La_sostenido  : return laS3;
        break; case Nota::Si            : return si3;
    }
}



inline constexpr int frecuencia_nota(Nota nota, Octava octava)
{
    switch (octava){
        break; case Octava::great	: return frec_great(nota);
        break; case Octava::small	: return frec_small(nota);
        break; case Octava::one_line	: return frec_one_line(nota);
        break; case Octava::two_line	: return frec_two_line(nota);
        break; case Octava::three_line	: return frec_three_line(nota);
    }
}





/***************************************************************************
 *			CORCHEAS, SEMICORCHEAS, ...
 ***************************************************************************/
// ¿Cómo llamar a esto? El problema  en programación siempre es elegir los
// nombres adecuadamente.
struct Nota_a_tocar{
    int frecuencia;	// si == 0, queremos silencio
    int duracion;

// para depurar
    void print() const;
    void println() const; 
};

// Primer intento: 
//  voy a medir el tiempo en semifusas el tiempo.
inline constexpr Nota_a_tocar redonda(Nota nota, Octava octava)
{ return Nota_a_tocar{frecuencia_nota(nota, octava), 64};}

inline constexpr Nota_a_tocar blanca(Nota nota, Octava octava)
{ return Nota_a_tocar{frecuencia_nota(nota, octava), 32};}

// negra_punto = negra con un punto 
inline constexpr Nota_a_tocar negra_punto(Nota nota, Octava octava)
{ return Nota_a_tocar{frecuencia_nota(nota, octava), 24};}

inline constexpr Nota_a_tocar negra(Nota nota, Octava octava)
{ return Nota_a_tocar{frecuencia_nota(nota, octava), 16};}

inline constexpr Nota_a_tocar corchea(Nota nota, Octava octava)
{ return Nota_a_tocar{frecuencia_nota(nota, octava), 8};}

inline constexpr Nota_a_tocar semicorchea(Nota nota, Octava octava)
{ return Nota_a_tocar{frecuencia_nota(nota, octava), 4};}

inline constexpr Nota_a_tocar fusa(Nota nota, Octava octava)
{ return Nota_a_tocar{frecuencia_nota(nota, octava), 2};}

inline constexpr Nota_a_tocar semifusa(Nota nota, Octava octava)
{ return Nota_a_tocar{frecuencia_nota(nota, octava), 1};}

inline constexpr Nota_a_tocar silencio_corchea()
{ return Nota_a_tocar{0, 4};}

// Syntax sugar

inline constexpr Nota_a_tocar redonda0(Nota nota)
{ return redonda(nota, Octava::small);}

inline constexpr Nota_a_tocar blanca0(Nota nota)
{ return blanca(nota, Octava::small);}

// negra_punto = negra con un punto 
inline constexpr Nota_a_tocar negra_punto0(Nota nota)
{ return negra_punto(nota, Octava::small);}

inline constexpr Nota_a_tocar negra0(Nota nota)
{ return negra(nota, Octava::small);}

inline constexpr Nota_a_tocar corchea0(Nota nota)
{ return corchea(nota, Octava::small);}

inline constexpr Nota_a_tocar semicorchea0(Nota nota)
{ return semicorchea(nota, Octava::small);}

inline constexpr Nota_a_tocar fusa0(Nota nota)
{ return fusa(nota, Octava::small);}

inline constexpr Nota_a_tocar semifusa0(Nota nota)
{ return semifusa(nota, Octava::small);}





inline constexpr Nota_a_tocar redonda1(Nota nota)
{ return redonda(nota, Octava::one_line);}

inline constexpr Nota_a_tocar blanca1(Nota nota)
{ return blanca(nota, Octava::one_line);}

// negra_punto = negra con un punto 
inline constexpr Nota_a_tocar negra_punto1(Nota nota)
{ return negra_punto(nota, Octava::one_line);}

inline constexpr Nota_a_tocar negra1(Nota nota)
{ return negra(nota, Octava::one_line);}

inline constexpr Nota_a_tocar corchea1(Nota nota)
{ return corchea(nota, Octava::one_line);}

inline constexpr Nota_a_tocar semicorchea1(Nota nota)
{ return semicorchea(nota, Octava::one_line);}

inline constexpr Nota_a_tocar fusa1(Nota nota)
{ return fusa(nota, Octava::one_line);}

inline constexpr Nota_a_tocar semifusa1(Nota nota)
{ return semifusa(nota, Octava::one_line);}

#endif


