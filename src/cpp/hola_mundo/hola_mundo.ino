// Programa básico

// La función setup() es la primera función que se llama al empezar el programa
void setup() {
    // Las siguientes dos líneas configuran la inicialización del monitor serie
    Serial.begin(9600);   // velocidad de transmisión: 9600 bauds
    while (!Serial) { ; } // espera hasta que conecte
}

// La función loop() se va a estar continuamente ejecutando
void loop() {
    Serial.println("Hola, mundo!"); // imprime 'Hola, mundo'
    delay(1000);                    // espera 1000 ms (= 1 s). No hace nada. Se limita a esperar.
}

// El IDE de Arduino oculta la función más importante de C++: 
//      la función 'main'!!!
// Todo programa escrito en C++ tiene que tener esta función. Es la primera
// función que se va a ejecutar (main = principal).
int main()
{
    init();     // 1º. Ejecuta init(). Es una función que inicializa el Arduino
    setup();    // 2º. Ejecuta la función setup(). Podríamos llamarla de otra 
                //     forma.

    while (true){ // while(true) = ejecuta eternamente lo que esta entre llaves
        loop(); // 1º. ejecutas loop();
                // En este caso no ejecutamos nada más.
    }
}

