// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas:
//  1. Intro a bucles for

// Intenta entender cómo funciona el siguiente bucle 
// Cuando lo entiendas, mira la siguiente versión del programa: for02
void loop()
{
    int i = 0; 
    while (i <= 100){
        Serial.print(i);
        Serial.print(", ");
        i += 10; // esto también se puede escribir como
                 // i = i + 10;
    }

    Serial.print('\n'); // Los caracteres precedidos de la barra \
                        // se llaman caracteres de control y tiene significado
                        // especial. En este caso '\n' es el retorno de carro
                        // (= pasar a la siguiente línea)
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


