// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Conexiones
constexpr int led_pin      = 13;
constexpr int pulsador_pin = 12;


void setup()
{
    pinMode(led_pin, OUTPUT);
    pinMode(pulsador_pin, INPUT);
}


int main()
{
    init();
    setup();

    int no_pulsado = HIGH;

    while(true){
        no_pulsado = digitalRead(pulsador_pin);    

        if (no_pulsado)
            digitalWrite(led_pin, LOW);

        else
            digitalWrite(led_pin, HIGH);
    }
}


