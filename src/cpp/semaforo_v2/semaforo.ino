

Semaforo::Semaforo(int pin_rojo, int pin_amarillo, int pin_verde)
    : rojo{pin_rojo},           // inicializamos los LEDs
      amarillo{pin_amarillo},
      verde{pin_verde}
{ }


void Semaforo::rojo_on()
{
    verde.off();
    rojo.on();
}

void Semaforo::amarillo_on()
{
    rojo.off();
    amarillo.on();
}

void Semaforo::verde_on()
{
    amarillo.off();
    verde.on();
}


