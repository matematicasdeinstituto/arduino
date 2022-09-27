// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

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

    // Si empezamos en 30000 no hace overflow!!!!
    // int i = 30000; 
    int i = 40000;  // aquí sí hace overflow!!!
    while (true){
        Serial.println(i);
        ++i;
//        delay(50); 
    }
}


