// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Ideas nuevas:
//  1. enum


//constexpr int dia_lunes     = 1;
//constexpr int dia_martes    = 2;
//constexpr int dia_miercoles = 3;
//constexpr int dia_jueves    = 4;
//constexpr int dia_viernes   = 5;
//constexpr int dia_sabado    = 6;
//constexpr int dia_domingo   = 7;

// Enumeramos los días de la semana. La siguiente enumeración equivale al
// código comentado arriba. 
enum Dia{ // CUIDADO: esto está anticuado, realmente hay que escribir
          // `enum class`, pero para explicarlo es más sencillo usar `enum`
    lunes, martes, miercoles, jueves, viernes, sabado, domingo
};


int main()
{
    init();

    Serial.begin(9600);
    while (!Serial) 
        { ; }

    int i  = 0;
    while (true){
        ++i;
        if (i > domingo)
            i = lunes;

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
            break; case Dia::lunes:
                Serial.println("lunes");

            break; case Dia::martes:
                Serial.println("martes");

            break; case Dia::miercoles:
                Serial.println("miércoles");

            break; case Dia::jueves:
                Serial.println("jueves");

            break; case Dia::viernes:
                Serial.println("viernes");

            break; case Dia::sabado:
                Serial.println("sábado");

            break; case Dia::domingo:
                Serial.println("domingo");
        }

        delay(800);

    }
}


