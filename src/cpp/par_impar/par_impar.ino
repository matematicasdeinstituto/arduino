// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas:
//  1. condicionales: if/else
// El tipo bool es un tipo que solo puede tener dos valores: true/false.
// Esta función responde a la pregunta: ¿n es_par? 
// Si n es par, devuelve true.
// Si n es impar, devuelve false.
bool es_par(int n) 
{
    return (n % 2) == 0;    // n % 2 = resto de dividir n entre 2
}

// Un número que no es par, es impar. Aprovechamos esta propiedad para
// implementar la función es_impar
bool es_impar(int n)
{
    return !es_par(n);  // El operador ! es la negación
                        // luego '!es_par' significa 'no es_par'
}

void loop()
{
    for (int i = 1; i <= 10; ++i){
        Serial.print(i);

        if (es_par(i))                  // si es_par(i): 
            Serial.println(" par");

        else                            // en caso contrario:
            Serial.println(" impar");
    }
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


