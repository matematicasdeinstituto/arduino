// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Órgano de juguete

#include "pulsador_v2.h"
#include "buzzer_v1.h"

// Conexiones
// Los pines 1 y 2 no se pueden usar cuando uses el monitor serie, ya que son
// esos pines los que usa el Arduino para comunicarse con el ordenador.
constexpr int pin_buzzer    = 3;
constexpr int pin_pulsador0 = 4;
constexpr int pin_pulsador1 = 5;
constexpr int pin_pulsador2 = 6;
constexpr int pin_pulsador3 = 7;
constexpr int pin_pulsador4 = 8;
constexpr int pin_pulsador5 = 9;
constexpr int pin_pulsador6 = 10;



int main()
{
    init();
 

// init pulsadores
    Pulsador pulsador0{pin_pulsador0};
    Pulsador pulsador1{pin_pulsador1};
    Pulsador pulsador2{pin_pulsador2};
    Pulsador pulsador3{pin_pulsador3};
    Pulsador pulsador4{pin_pulsador4};
    Pulsador pulsador5{pin_pulsador5};
    Pulsador pulsador6{pin_pulsador6};

    Buzzer buzzer{pin_buzzer};

    while(true){
        if (pulsador0.presionado())
            buzzer.toca_do();

        else if (pulsador1.presionado())
            buzzer.toca_re();

        else if (pulsador2.presionado())
            buzzer.toca_mi();

        else if (pulsador3.presionado())
            buzzer.toca_fa();

        else if (pulsador4.presionado())
            buzzer.toca_sol();

        else if (pulsador5.presionado())
            buzzer.toca_la();

        else if (pulsador6.presionado())
            buzzer.toca_si();

        else
            buzzer.stop();
    }
}


