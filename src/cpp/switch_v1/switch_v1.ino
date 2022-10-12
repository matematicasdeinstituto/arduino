// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas:
//  1. switch


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

        switch (i){
            case 1:
                Serial.println("lunes");
                break;

            case 2:
                Serial.println("martes");
                break;

            case 3:
                Serial.println("miércoles");
                break;

            case 4:
                Serial.println("jueves");
                break;

            case 5:
                Serial.println("viernes");
                break;

            case 6:
                Serial.println("sábado");
                break;

            case 7:
                Serial.println("domingo");
                break;
        }

        delay(800);

    }
}


