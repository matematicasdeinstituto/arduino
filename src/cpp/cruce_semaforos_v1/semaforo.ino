

Semaforo::Semaforo(int pin_rojo, int pin_amarillo, int pin_verde)
    : rojo{pin_rojo},           // inicializamos los LEDs
      amarillo{pin_amarillo},
      verde{pin_verde}
{ }


void Semaforo::rojo_on()
{
    amarillo.off();
    rojo.on();
}

void Semaforo::amarillo_on()
{
    verde.off();
    amarillo.on();
}

void Semaforo::verde_on()
{
    rojo.off();
    verde.on();
}


