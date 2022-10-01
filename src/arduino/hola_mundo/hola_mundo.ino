// Esto es un comentario. Los comentarios son para que los entiendan los
// humanos, el compilador los ignora. 
//
// En C++ hay 2 formas de escribir un comentario:
//  1. Comentarios de una sola "línea": empiezan con dos barras inclinadas //
//     y acaban con el retorno de carro de la línea.
/*  2. Comentarios en bloque
       como este que estoy
       escribiendo ahora.
       Empiezan con una barra inclinada seguida de un asterisco,
       y acaban con un asterisco y una barra inclinada --> */
// He escrito entre comillas lo de "línea" ya que el comentario puede empezar
// después de una instrucción, como puedes ver en los ejemplos que siguen.

// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas:
//  1. Comentarios
//  2. Toda instrucción acaba con punto y coma.


// La función setup() es la primera función que se llama al empezar el programa
// FUNDAMENTAL: siempre que se abre una llave, se tiene que cerrar. Siempre
// que se abre un paréntesis, se tiene que cerrar.
// 
// Todas las instrucciones acaban punto y coma. Eso es lo que delimita que una
// instrucción finaliza. Si olvidas un punto y coma, el programa no compilará.
//
// Aunque se considera que es buen estilo de programación  poner cada
// instrucción en una línea diferente, se podrían poner todas seguidas en la
// misma línea. 
//
// FUNDAMENTAL: a poco que empieces a programar los programas se complican
// bastante. Es muy importante el ir tabulando todas las instrucciones. Fíjate
// en cómo está tabulado este ejemplo.
void setup() {// Principio de la función setup. Las instrucciones que componen
              // esta instrucción van desde que se abren las llaves hasta que
              // se cierran }
              // Observa que tabulamos todas las instrucciones para saber que
              // forman parte de esta función.
    // Las siguientes dos líneas configuran la inicialización del monitor serie
    Serial.begin(9600);   // velocidad de transmisión: 9600 bauds
    while (!Serial) { ; } // espera hasta que conecte
}

// La función loop() va a estar ejecutándose continuamente 
void loop() {
    Serial.println("Hola, mundo!"); // imprime 'Hola, mundo'
    delay(1000);                    // espera 1000 ms (= 1 s). No hace nada. Se limita a esperar.
}

