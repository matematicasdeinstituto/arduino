// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Cosas básicas del compilador que estamos usando

int main()
{
    init();

    Serial.begin(9600);
    while (!Serial) 
        { ; }

    uint8_t i = 0;
    while (true){
        Serial.println("-------------------------------------------------");
        Serial.print("Versión del compilador: ");
        Serial.print(__GNUC__);
        Serial.println("  <-- anticuado!!!");

        Serial.print("sizeof(char)     : ");
        Serial.println(sizeof(char));

        Serial.print("sizeof(short)    : ");
        Serial.println(sizeof(short));

        Serial.print("sizeof(int)      : ");
        Serial.println(sizeof(int));

        Serial.print("sizeof(long)     : ");
        Serial.println(sizeof(long));

        Serial.print("sizeof(long long): ");
        Serial.println(sizeof(long long));
        Serial.println("-------------------------------------------------");

        delay(10000);
    }
}


