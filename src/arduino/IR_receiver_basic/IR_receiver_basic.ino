// CUIDADO: usar la biblioteca 2.7.0 de IRremote!!! No usar la última versión.
// Instalar la biblioteca 2.7.0 de IRremote by shirriff, z3t0, ArminJo

// La idea de este programa es averiguar qué códigos generan cada uno de los 
// botones pulsados.
// Probar con el mando de la tele.
#include <IRremote.h>

// conexiones del arduino
constexpr int mando_pin = 11;

// códigos de las teclas pulsadas
constexpr int arriba = 16736925;
constexpr int abajo  = 16754775;
constexpr int derecha= 16761405;
constexpr int izquierda = 16720605;
constexpr int ok = 765;

// Mando
// NOTA: es mala práctica definir variables globales como estamos haciendo
// aquí. Al definirlas 'static' las hago locales a este fichero.
// Regla: "I.2: Avoid non-const global variables"
static IRrecv mando(mando_pin);


void print(int value)
{
    switch (value){
        break; case arriba  : Serial.println("arriba");
        break; case abajo   : Serial.println("abajo");
        break; case derecha : Serial.println("derecha");
        break; case izquierda:Serial.println("izquierda");
        break; case ok      : Serial.println("ok");
        break; default: 
            Serial.println(value);
    }
}

void setup()
{ 
    Serial.begin(9600);
    mando.enableIRIn(); // Start the receiver
}


void loop() 
{
    decode_results results;

    if (mando.decode(&results)) 
    { 
        print(results.value);
        delay(200);
        mando.resume();        // prepare to receive the next value
    }
}


