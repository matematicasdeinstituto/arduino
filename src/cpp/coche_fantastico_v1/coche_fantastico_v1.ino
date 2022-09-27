// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas: 
//  1. Funciones con más de un argumentos. Ejemplo: write()
//  2. Números mágicos: evítalos!!! Ejemplo: time_delay_in_ms
//
// Conexiones
constexpr int led0_pin = 2;
constexpr int led1_pin = 3;
constexpr int led2_pin = 4;
constexpr int led3_pin = 5;
constexpr int led4_pin = 6;
constexpr int led5_pin = 7;
constexpr int led6_pin = 8;
constexpr int led7_pin = 9;

// Configuración
constexpr int time_delay_in_ms = 100;

// CUIDADO: pasarle tantos argumentos a una función es ineficiente y muy
// propenso a error. Esto simplemente es un ejemplo para ver que a una función
// le podemos pasar más de un argumento. En la versión 2 eliminamos todo esto
// por ser mala práctica.
void write(int led0, int led1, int led2, int led3, 
           int led4, int led5, int led6, int led7)
{
    digitalWrite(led0_pin, led0);
    digitalWrite(led1_pin, led1);
    digitalWrite(led2_pin, led2);
    digitalWrite(led3_pin, led3);
    digitalWrite(led4_pin, led4);
    digitalWrite(led5_pin, led5);
    digitalWrite(led6_pin, led6);
    digitalWrite(led7_pin, led7);
}


void setup() {
    // Los LEDs son pines de salida
    pinMode(led0_pin, OUTPUT);
    pinMode(led1_pin, OUTPUT);
    pinMode(led2_pin, OUTPUT);
    pinMode(led3_pin, OUTPUT);
    pinMode(led4_pin, OUTPUT);
    pinMode(led5_pin, OUTPUT);
    pinMode(led6_pin, OUTPUT);
    pinMode(led7_pin, OUTPUT);
}


void loop() {
    write(1,0,0,0,0,0,0,0);
    delay(time_delay_in_ms);

    write(0,1,0,0,0,0,0,0);
    delay(time_delay_in_ms);

    write(0,0,1,0,0,0,0,0);
    delay(time_delay_in_ms);

    write(0,0,0,1,0,0,0,0);
    delay(time_delay_in_ms);

    write(0,0,0,0,1,0,0,0);
    delay(time_delay_in_ms);

    write(0,0,0,0,0,1,0,0);
    delay(time_delay_in_ms);

    write(0,0,0,0,0,0,1,0);
    delay(time_delay_in_ms);

    write(0,0,0,0,0,0,0,1);
    delay(time_delay_in_ms);

    write(0,0,0,0,0,0,1,0);
    delay(time_delay_in_ms);

    write(0,0,0,0,0,1,0,0);
    delay(time_delay_in_ms);

    write(0,0,0,0,1,0,0,0);
    delay(time_delay_in_ms);


    write(0,0,0,1,0,0,0,0);
    delay(time_delay_in_ms);

    write(0,0,1,0,0,0,0,0);
    delay(time_delay_in_ms);

    write(0,1,0,0,0,0,0,0);
    delay(time_delay_in_ms);

    write(1,0,0,0,0,0,0,0);
    delay(time_delay_in_ms);

}


int main()
{
    init();
    setup();

    while (true){
        loop();
    }
}


