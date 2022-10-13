// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino
// Ideas nuevas:
//  1. Medida del tiempo: millis()
//  2. Nuevo tipo: unsigend long


int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

    while(true){
        unsigned long time = millis();
        Serial.println(time);
        delay(1000);
    }
}


