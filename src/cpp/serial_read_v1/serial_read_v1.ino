// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino
// Ideas nuevas:
//  1. Serial.read()
//
//  Prueba a escribir letras y números y ver qué es lo que se muestra en
//  pantalla.
//  Observa que al lado de la casilla donde escribes puedes seleccionar 'No
//  line ending'. Prueba a seleccionarlo a ver qué pasa.

int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

    while(true){
        if (Serial.available() > 0){// ¿hay caracteres para leer?
            int c = Serial.read();  // lee 1 byte del monitor serie

            Serial.print("Escrito: ");
            Serial.println(c);
        }
    }
}


