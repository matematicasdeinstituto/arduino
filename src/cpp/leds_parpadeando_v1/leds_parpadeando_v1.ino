// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas:
//  1. Prototipos de función


// Conexiones
constexpr int led_min_pin = 2;
constexpr int led_max_pin = 9;

// Configuración
constexpr int time_delay_in_ms = 100;

// Prototipos de función
void leds_init();
void leds_apaga();
void leds_enciende();
void leds_parpadea(int nrep);


void setup() {
    leds_init();
}


void loop() {
    leds_parpadea(3);
    leds_apaga();
    delay(1000);
}



int main()
{
    init();

    setup();

    while (true){
        loop();
    }
}


void leds_init()
{
    for (int i = led_min_pin; i <= led_max_pin; ++i)
        pinMode(i, OUTPUT);
}

void leds_apaga()
{
    for (int i = led_min_pin; i <= led_max_pin; ++i)
        digitalWrite(i, LOW);
}

void leds_enciende()
{
    for (int i = led_min_pin; i <= led_max_pin; ++i)
        digitalWrite(i, HIGH);
}


void leds_parpadea(int nrep)
{
    for (int i = 0; i < nrep; ++i){
        leds_apaga();
        delay(100);
        leds_enciende();
        delay(100);
    }
}

