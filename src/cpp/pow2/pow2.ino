// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas:
//  1. Función

// Esta es una función matemática vulgar y corriente que sirve para calcular
// un número al cuadrado. 
// Recordar que las funciones las podemos concebir como cajas negras:
// por un lado entra la x, y por otro sale la y. En matemáticas solemos
// escribir:
//              y = f(x);
// Como a la hora de programar tenemos muchas funciones no conviene llamarlas
// con una sola letra 'f', 'g',... como se hace en matemáticas, sino darles
// nombres más significativos que revelen lo que hacen. En nuestro caso,
// cuando queramos elevar al cuadrado escribiremos:
//              y = eleva_al_cuadrado(x);
//      
//
// La función se lee:
//          int         eleva_al_cuadrado       (int x)
//          \ /             \       /            \   /
//    y es un entero|  nombre de la función| espera un entero como argumento
//
int eleva_al_cuadrado(int x)
{ 
    return x*x;     // return indica el valor que va a tomar 'y'
}

int main()
{
    init();

    Serial.begin(9600);
    while (!Serial) 
        { ; }

    int x = 0;
    while (true){
        // x es la entrada a la función
        // y es la salida, el número elevado al cuadrado
        int y = eleva_al_cuadrado(x);

        Serial.print(x);
        Serial.print(" al cuadrado es ");
        Serial.println(y);
        delay(200);

        ++x; // idéntico a:
             // x = x + 1;
             // x += 1;
             // x++;
    }
}


