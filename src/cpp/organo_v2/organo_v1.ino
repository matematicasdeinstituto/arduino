// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

#include "pulsador.h"

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
        if (pulsador0.presionado())
            Serial.println("Do");

        if (pulsador1.presionado())
            Serial.println("Re");

        if (pulsador2.presionado())
            Serial.println("Mi");

        if (pulsador3.presionado())
            Serial.println("Fa");

        if (pulsador4.presionado())
            Serial.println("Sol");

        if (pulsador5.presionado())
            Serial.println("La");

        if (pulsador6.presionado())
            Serial.println("Si");

    }
}


