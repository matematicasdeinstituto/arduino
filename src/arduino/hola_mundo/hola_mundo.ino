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
