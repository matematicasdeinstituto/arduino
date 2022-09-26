// Un int es un entero de 2 bytes.
// Veamos el rango de valores que puede tomar.
//
// NOTA: el rango es bastante grande, así que el programa sin delay tarda un
// rato en alcanzar el valor máximo. 
int main()
{
    init();

    Serial.begin(9600);
    while (!Serial) 
        { ; }

    int i = 0;
    while (true){
        Serial.println(i);
        ++i;
//        delay(50); 
    }
}


