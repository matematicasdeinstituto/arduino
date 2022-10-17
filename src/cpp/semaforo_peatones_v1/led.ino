#include "led.h"

// Anotamos el pin al que está conectado el LED para no tener que volver
// a pasarlo como parámetro a las funciones, y definimos el pin como de
// salida.
LED::LED(int pin0)
    : pin{pin0} // al definir `const int pin` es obligatorio inicializarlo
                // de esta forma
{

    pinMode(pin, OUTPUT);
}


void LED::on() const
{
    digitalWrite(pin, HIGH);   
}

void LED::off() const
{
    digitalWrite(pin, LOW);   
}


/***************************************************************************
 *                          FUNCIONES AUXILIARES
 ***************************************************************************/
void parpadea(LED& led, int n, int t_ms)
{
    for (int i = 0; i < n; ++i){
        led.on();
        delay(t_ms);
        led.off();
        delay(t_ms);
    }
}


