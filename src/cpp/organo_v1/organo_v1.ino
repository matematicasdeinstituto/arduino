// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

#include "pulsador_v2.h"

// Conexiones
// Los pines 1 y 2 no se pueden usar cuando uses el monitor serie, ya que son
// esos pines los que usa el Arduino para comunicarse con el ordenador.
constexpr int pin_pulsador0 = 3;
constexpr int pin_pulsador1 = 4;
constexpr int pin_pulsador2 = 5;
constexpr int pin_pulsador3 = 6;
constexpr int pin_pulsador4 = 7;
constexpr int pin_pulsador5 = 8;
constexpr int pin_pulsador6 = 9;
 

int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

// init pulsadores
    Pulsador pulsador0{pin_pulsador0};
    Pulsador pulsador1{pin_pulsador1};
    Pulsador pulsador2{pin_pulsador2};
    Pulsador pulsador3{pin_pulsador3};
    Pulsador pulsador4{pin_pulsador4};
    Pulsador pulsador5{pin_pulsador5};
    Pulsador pulsador6{pin_pulsador6};

    while(true){
        if (pulsador0.recien_pulsado())
            Serial.println("Do");

        if (pulsador1.recien_pulsado())
            Serial.println("Re");

        if (pulsador2.recien_pulsado())
            Serial.println("Mi");

        if (pulsador3.recien_pulsado())
            Serial.println("Fa");

        if (pulsador4.recien_pulsado())
            Serial.println("Sol");

        if (pulsador5.recien_pulsado())
            Serial.println("La");

        if (pulsador6.recien_pulsado())
            Serial.println("Si");

    }
}


