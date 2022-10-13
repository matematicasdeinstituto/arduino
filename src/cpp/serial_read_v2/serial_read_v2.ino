// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino
// Ideas nuevas:
//  1. tipo `char`

int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

    while(true){
        if (Serial.available() > 0){// ¿hay caracteres para leer?
            char c = Serial.read();  // <-- cambiamos tipo de int a char

            Serial.print("Escrito: ");
            Serial.println(c);
        }



    }
}


