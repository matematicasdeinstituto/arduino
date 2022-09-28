
// static indica al compilador que estas variables solo son visibles
// en este archivo .ino, no se ven en ningún otro sitio 
// Estos son los pines de los LEDs que forman el semáforo. 
// Al definirlos así no tenemos que pasárselos a cada una de las funciones,
// solamente a la función init() para copiarlos.
static int led_rojo;
static int led_amarillo;
static int led_verde;

// NUEVO: inline
//  * inline le dice al compilador que expanda la función donde la encuentre,
//           en lugar de hacer una llamada. 
//           Nota: inline realmente le sugiere al compilador que la expanda.
//           El compilador no tiene por qué hacerlo.
inline void led_enciende(int pin)  { digitalWrite(pin, HIGH); }
inline void led_apaga(int pin)     { digitalWrite(pin, LOW); }

void semaforo_init(int led_rojo_pin, int led_amarillo_pin, int led_verde_pin)
{
// copiamos los pines donde están conectados los LEDs
    led_rojo     = led_rojo_pin;
    led_amarillo = led_amarillo_pin;
    led_verde    = led_verde_pin;

// inicializamos los pines como de salida
    pinMode(led_rojo, OUTPUT);
    pinMode(led_amarillo, OUTPUT);
    pinMode(led_verde, OUTPUT);
}


void semaforo_rojo()
{
    led_apaga(led_verde);
    led_enciende(led_rojo);
}

void semaforo_amarillo()
{
    led_apaga(led_rojo);
    led_enciende(led_amarillo);
}

void semaforo_verde()
{
    led_apaga(led_amarillo);
    led_enciende(led_verde);
}

