// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino


constexpr int pin_buzzer = 9;

// Las notas en una octava son 12:
//  do, do#, re, re#, mi, fa, fa#, sol, sol#, la, la#, si
//
// Para calcular una nota a partir de la anterior hay que multiplicar por
// 2^(1/12) = 1.0595. La nota de La son 440Hz. Con estos datos se pueden
// calcular el resto de las notas.

constexpr int do1   = 261;
constexpr int doS1  = 277;
constexpr int re1   = 294;
constexpr int reS1  = 311;
constexpr int mi1   = 330;
constexpr int fa1   = 349;
constexpr int faS1  = 369;
constexpr int sol1  = 391;
constexpr int solS1 = 415;
constexpr int la1   = 440;
constexpr int laS1  = 466;
constexpr int si1   = 494;

constexpr int cancion[] = 
    {re1, 1, 


int main()
{
    init();

    pinMode(pinMode, OUTPUT);   // definimos el pin de salida

    while (true){
        tone(pin_buzzer, do1);  
        delay(500);

        tone(pin_buzzer, re1);  
        delay(500);

        tone(pin_buzzer, mi1);  
        delay(500);

        tone(pin_buzzer, fa1);  
        delay(500);

        tone(pin_buzzer, sol1);  
        delay(500);

        tone(pin_buzzer, la1);  
        delay(500);

        tone(pin_buzzer, si1);  
        delay(500);


        noTone(pin_buzzer);    
        delay(1000);
    }
}


