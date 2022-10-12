// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas:
//  1. Forma moderna de escribir switch


int main()
{
    init();

    Serial.begin(9600);
    while (!Serial) 
        { ; }

    int i  = 0;
    while (true){
        ++i;
        if (i > 7)
            i = 1;

        Serial.print(i);
        Serial.print(" = ");

        // Uno de los problemas que hay al escribir switch es que a veces se
        // olvida escribir el `break` correspondiente, comportándose el
        // programa de forma diferente a lo esperado. Para evitar ese problema
        // Herb Sutter propone escribir el break delante del case. De esta
        // forma es imposible que se olvide el break, evitando este error.
        // Esto no es más que un convenio para evitar errores: si quieres
        // seguirlo síguelo, sino escribe los switch como se escriben
        // tradicionalmente.
        switch (i){
            break; case 1:
                Serial.println("lunes");

            break; case 2:
                Serial.println("martes");

            break; case 3:
                Serial.println("miércoles");

            break; case 4:
                Serial.println("jueves");

            break; case 5:
                Serial.println("viernes");

            break; case 6:
                Serial.println("sábado");

            break; case 7:
                Serial.println("domingo");
        }

        delay(800);

    }
}


