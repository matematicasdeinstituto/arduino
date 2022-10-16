// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino
// Ideas nuevas:
//  1. random


// Prueba a ejecutar este programa varias veces fijándote en los números 
// aleatorios que saca. ¿son aleatorios realmente? Cotillea la ayuda de
// Arduino al respecto.
int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

    while(true){
        long n = random(500); // genera un número aleatorio de [0, 500)
        Serial.println(n);
        delay(500);
    }
}


