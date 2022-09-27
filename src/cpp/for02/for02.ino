// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas:
//  1. bucles for

// Compara el bucle while con el bucle for:
//
//    int i = 0;         <-- ejecutamos primero
//    while (i <= 100){  <-- condición para entrar dentro del bucle
//        ...
//        i += 10;       <-- ejecutamos al final de cada iteración
//    }
//
// Esto mismo lo podemos escribir de forma más compacta usando un bucle for:
//    for (int i = 0;   <-- ejecutamos primero
//         i <= 100;    <-- condición para entrar dentro del bucle
//         i += 10){    <-- ejecutamos al final de cada iteración
//         ...
//    }
//
//  En la práctica todo se escribe en una sola línea:
void loop()
{
    for (int i = 0; i <= 100; i += 10){
        Serial.print(i);
        Serial.print(", ");
    }

    Serial.print('\n'); 
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


