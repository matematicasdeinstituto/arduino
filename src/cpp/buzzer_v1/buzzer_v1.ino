// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas:
//  1. Uso de un buzzer


constexpr int pin_buzzer = 9;


int main()
{
    init();

    pinMode(pinMode, OUTPUT);   // definimos el pin de salida

    while (true){
        tone(pin_buzzer, 440);  // generamos una señal de 440Hz
        delay(1000);

        noTone(pin_buzzer);     // apagamos la señal
        delay(1000);
    }
}


