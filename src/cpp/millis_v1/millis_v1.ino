// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino
// Ideas nuevas:
//  1. Medida de diferencia de tiempos


int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

    while(true){
        unsigned long t0= millis();
        delay(1000);
        unsigned long t1= millis(); // tarda un tiempo en ejecutarse
        unsigned long t = t1 - t0;  // tarda un tiempo en ejecutarse

        Serial.println(t); // si delay == 1000, ¿debería de imprimir 1000?
    }
}


