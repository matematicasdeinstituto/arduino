

int main()
{
    // 1º. Inicializamos el arduino
    init();     

    // 2º. Inicializamos el monitor serie.
    Serial.begin(9600);   
    while (!Serial) { ; } 

    // 3º. Entramos en un bucle infinito  ejecutando eternamente
    //     lo que está entre llaves (escribe 'Hola, mundo', espera 1 s)
    while (true){
        Serial.println("Hola, mundo!"); 
        delay(1000);                    
    }
}

