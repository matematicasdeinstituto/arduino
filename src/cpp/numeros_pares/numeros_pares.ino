// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

void loop()
{
    for (int i = 0; i <= 18; i += 2){
        Serial.print(i);
        Serial.print(", ");
    }

// Elige el final:
    // Serial.println("20");
    Serial.println("20.");
}


int main()
{
    init();

    Serial.begin(9600);
    while (!Serial) 
        { ; }

    while (true){
        loop();
        delay(1000);
    }
}


