// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino


#include "buzzer_v1.h"

// Conexiones
constexpr int buzzer_pin= 3;

// prototipos de función
void test(Buzzer& buzzer, Octava octava);



int main()
{
    init();

    Buzzer buzzer{buzzer_pin};

    // Vamos a probar la escala a ver si funciona y no hay error
    while (true){
        test(buzzer, Octava::great);
        test(buzzer, Octava::small);
        test(buzzer, Octava::one_line);
        test(buzzer, Octava::two_line);
        test(buzzer, Octava::three_line);

    }
}



void test(Buzzer& buzzer, Octava octava)
{
    buzzer.toca_do(octava);
    delay(500);

    buzzer.toca_do(octava);
    delay(500);

    buzzer.toca_do_sostenido(octava);
    delay(500);

    buzzer.toca_re(octava);
    delay(500);

    buzzer.toca_re_sostenido(octava);
    delay(500);

    buzzer.toca_mi(octava);
    delay(500);

    buzzer.toca_fa(octava);
    delay(500);

    buzzer.toca_fa_sostenido(octava);
    delay(500);

    buzzer.toca_sol(octava);
    delay(500);

    buzzer.toca_sol_sostenido(octava);
    delay(500);

    buzzer.toca_la(octava);
    delay(500);

    buzzer.toca_la_sostenido(octava);
    delay(500);

    buzzer.toca_si(octava);
    delay(500);

    buzzer.stop();
    delay(1000);

}
