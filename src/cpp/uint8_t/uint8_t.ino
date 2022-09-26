// Un uint8_t es un entero positivo de 8 bits.  (en matemáticas se llaman
// números naturales).
// Si un uint8_t tiene solo 8 bits, ¿cuántos números se pueden representar con
// ellos? Este programa nos responde a ello.

int main()
{
    init();

    Serial.begin(9600);
    while (!Serial) 
        { ; }

    uint8_t i = 0;
    while (true){
        Serial.println(i);
        ++i;
        delay(50);
    }
}


