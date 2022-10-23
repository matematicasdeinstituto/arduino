// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// IMPORTANTE: por motivos que desconozcon los de arduino están totalmente
// anticuados. Este programa compila en la versión del 2017 de C++ (por
// defecto arduino compila en 2011). Parece ser que los de Arduino no saben
// que en el 2020 se introdujeron grandes cambios en C++.
//
// Si quieres que te compile tienes que buscar el archivo 'platform.txt' y
// cambiar los flags de compilación de `-std=gnu11` a  `-std=c++1z`
// En mi ordenador se puede encontrar en el directorio 
//      'packages/arduino/hardware/avr/1.8.5'
//
//
// TODO: formas de mejorar este programa.
//      Una canción está definida por el tiempo que se tarda cada semifusa en
//      ejecutar y la partitura. Yo quiero que eso quede reflejado en el
//      programa. Quiero escribir cosas del tipo:
//
//          toca(buzzer, partitura);
//
#include "buzzer_v2.h"
#include "nota.h"

// Conexiones
constexpr int buzzer_pin= 3;

// Observar que este estilo de programar me permite transcribir la partitura
// en programa directamente, sin tener que pensar en nada.
constexpr Nota_a_tocar oda_alegria[] =
{
// 1
    negra1(Nota::Mi), negra1(Nota::Mi), negra1(Nota::Fa), negra1(Nota::Sol), 
    negra1(Nota::Sol), negra1(Nota::Fa), negra1(Nota::Mi), negra1(Nota::Re), 
    negra1(Nota::Do), negra1(Nota::Do), negra1(Nota::Re), negra1(Nota::Mi), 
    negra_punto1(Nota::Mi), corchea1(Nota::Re), blanca1(Nota::Re),

// 2
    negra1(Nota::Mi), negra1(Nota::Mi), negra1(Nota::Fa), negra1(Nota::Sol),
    negra1(Nota::Sol),negra1(Nota::Fa), negra1(Nota::Mi), negra1(Nota::Re),
    negra1(Nota::Do), negra1(Nota::Do), negra1(Nota::Re), negra1(Nota::Mi),
    negra_punto1(Nota::Re), corchea1(Nota::Do), blanca1(Nota::Do),

// 3
    negra1(Nota::Re), negra1(Nota::Re), negra1(Nota::Mi), negra1(Nota::Do),
    negra1(Nota::Re), corchea1(Nota::Mi), corchea1(Nota::Fa), negra1(Nota::Mi), negra1(Nota::Do),
    negra1(Nota::Re), corchea1(Nota::Mi), corchea1(Nota::Fa), negra1(Nota::Mi), negra1(Nota::Re),
    negra1(Nota::Do), negra1(Nota::Re), blanca0(Nota::Si),

// 4
    negra1(Nota::Mi), negra1(Nota::Mi), negra1(Nota::Fa), negra1(Nota::Sol),
    negra1(Nota::Sol), negra1(Nota::Fa), negra1(Nota::Mi), negra1(Nota::Re),
    negra1(Nota::Do), negra1(Nota::Do), negra1(Nota::Re), negra1(Nota::Mi),
    negra_punto1(Nota::Re), corchea1(Nota::Do), blanca1(Nota::Do),

};



void toca_cancion(Buzzer& buzzer, const Nota_a_tocar nota[], int N, int T)
{
    for (int i = 0; i < N; ++i){
//      nota[i].print();
//      Serial.print(" --> time = ");
//      Serial.println(T * nota[i].duracion);

      buzzer.toca(nota[i].frecuencia);
      delay(T * nota[i].duracion);
    }
}



int main()
{
    init();

// para depurar
    Serial.begin(9600);

    Buzzer buzzer{buzzer_pin};

    // Son 100 negras/minuto = 1600 semifusas / minuto
    // 1 minuto = 60000 ms = 1600 semifusas 
    // ==> 60000 / 1600 = 37 ms cada semifusa
    //int T = 37; // tiempo que tardamos en tocar una semifusa
    int T = 25; // tiempo que tardamos en tocar una semifusa
    constexpr int N = sizeof(oda_alegria) / sizeof(Nota_a_tocar);

    // Vamos a probar la escala a ver si funciona y no hay error
    while (true){
        toca_cancion(buzzer, oda_alegria, N, T);
        buzzer.stop();
        delay(1000);
    }
}


