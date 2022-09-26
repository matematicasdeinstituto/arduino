// Ideas nuevas:
//  1. Prototipos de función


// Conexiones
constexpr int led_min_pin = 2;
constexpr int led_max_pin = 9;

// Configuración
constexpr int time_delay_in_ms = 100;


// Prototipos de función
void coche_fantastico();
void apaga_leds();
void enciende_leds();
void enciende_solo(int led_pin);
void parpadea(int nrep);


void setup() {
    for (int i = led_min_pin; i <= led_max_pin; ++i)
        pinMode(i, OUTPUT);
}


void loop() {
    coche_fantastico();
    parpadea(3);
}



int main()
{
    init();

    setup();

    while (true){
        loop();
    }
}


void coche_fantastico()
{
    for (int i = led_min_pin; i <= led_max_pin; ++i){
        enciende_solo(i);
        delay(time_delay_in_ms);
    }

    for (int i = led_max_pin; i >= led_min_pin; --i){
        enciende_solo(i);
        delay(time_delay_in_ms);
    }
}


void apaga_leds()
{
    for (int i = led_min_pin; i <= led_max_pin; ++i)
        digitalWrite(i, LOW);
}

void enciende_leds()
{
    for (int i = led_min_pin; i <= led_max_pin; ++i)
        digitalWrite(i, HIGH);
}

void enciende_solo(int led_pin)
{
    apaga_leds();
    digitalWrite(led_pin, HIGH);
}


void parpadea(int nrep)
{
    for (int i = 0; i < nrep; ++i){
        apaga_leds();
        delay(100);
        enciende_leds();
        delay(100);
    }
}

