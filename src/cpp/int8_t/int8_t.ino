// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Un int8_t es un entero de 8 bits. 
// Los enteros son números que pueden ser positivos o negativos.
// Si un int8_t tiene solo 8 bits, ¿cuántos números se pueden representar con
// ellos? Este programa nos responde a ello.
int main()
{
    init();

    Serial.begin(9600);
    while (!Serial) 
        { ; }

    int8_t i = 0;
    while (true){
        Serial.println(i);
        ++i;
        delay(50);
    }
}


