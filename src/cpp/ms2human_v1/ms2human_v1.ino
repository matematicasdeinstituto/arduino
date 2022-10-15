// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino

// Para pasar de milisegundos a horas, minutos y segundos usamos la siguiente
// fórmula:
//          t = h*60*60*1000 + min*60*1000 + s*1000 + ms
//            = 3600000h + 60000min + 1000s + ms
//
//  con h = horas, min = minutos, s = segundos y ms los milisegundos que
//  quedan.
//
//  Ejemplo:
//          2h 20min 32seg 450ms = 3600000*2 + 60000*20 + 32*1000 + 450
//                               = 8432450 milisegundos
//
//  La forma como he deducido la forma anterior es ir poco a poco: 2horas son
//  2*60 minutos = 120 minutos. A las 2 horas le sumamos los 20 min y
//  obtenemos que 2h 20min = 140 min, que al multiplicarlo por 60 nos dan los
//  segundos: 140*60 = 8400 segundos. Sumándoles los 32 segundos obtemos que
//  2h 20min 32s = 8432 seg, que multiplicándolos por 1000 los convertimos en
//  milisegundos: 8432000 ms, número al que tenemos que sumar los 450 ms que
//  nos quedaban para obtener que 2h 20min 32s 450ms = 8432450 ms.
//
//  Para hacer la conversión inversa voy razonando al revés. 
//  Si queremos descomponer 8432450 ms en horas, minutos, segundos y
//  milisegundos lo primero que observo es que
//          t = 8432450 = 8432*1000 + 450ms
//  
//  Que nos dice que t lo podemos descomponer en 8432 segundos + 450 ms. La
//  idea clave es observar que lo que estamos haciendo es dividir entre 1000.
//  Resulta que:
//              t   = 8432 = cociente (t / 1000);
//              ms  =  450 = resto (t / 1000);
//  (¿te suena eso de `Dividiendo = divisor * cociente + resto`?)
// 
//  De esta forma puedo descomponer t en segundos:milisegundos.
//
//  Una vez que se los segundos t = 8432 podemos descomponerlo en minutos y
//  segundos dividiento entre 60, ya que:
//              8432 = 140*60 + 32
//  Luego
//              t   = 140 = cociente (t / 60);
//              seg =  32 = resto (t / 60);
//
//  Hemos descompuesto 8432450 ms = 140 min 32 seg 450 ms. Todavía nos falta
//  descomponer los 140 minutos en horas y minutos para acabar. Pero esto lo
//  hacemos dividiendo entre 60:
//              140 = 2*60 + 20
//  De donde
//              h   =  2 = cociente (t / 60);
//              min = 20 = resto (t / 60);
//
//  ¿Cómo calcular el cociente y el resto? Aunque C++ suministra la función
//  std::div para calcularlo vamos a hacerlo directamente, para aprender
//  algunas técnicas básicas:
//
//  El operador % calcula el resto de una división. Así, si quiero calcular el
//  resto de 20 entre 3, en C++ escribimos:
//          int resto = 20 % 3; 
//
//  Una vez que tenemos el resto, el cociente lo podemos calcular despejando:
//          D = d*q + r   (dividendo = divisor * cociente + resto)
//          q = (D - r) / d;    // q = quotient
//
//  Si queremos calcular el cociente de dividir 20 entre 3, una opción es:
//          int r = 20 % 3;
//          int q = (20 - r) / 3;
//
//  Con todo lo más habitual es observar que el cociente no es más que la
//  parte entera de la división y resulta que C++ al dividir dos enteros
//  trunca el resultado, dando el cociente. Con lo que en la práctica
//  funciona:
//          int q = 20 / 3; // como q es de tipo int C++ trunca el resultado
//
//  Personalmente me gusta más q = (20 - r) / 3; ya que controlo lo que hago.
//  Yo te estoy diciendo que C++ trunca, porque llevo haciéndolo toda la vida
//  así y siempre ha funcionado, pero en realidad no he confirmado en el
//  standard que sea así (el standard de C++ es la ley: en caso de duda
//  siempre lee el standard).
//


int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

    Serial.print("Número de milisegundos: ");
    while(true){
        if (Serial.available() > 0){
            long t0 = Serial.parseInt(); 
    
            if (t0 > 0){
                long t = t0;    // lo copio  para poder imprimirlo al final
                                //
                // Convertimos los milisegundos en hh:ss:mm:ms
                long ms = t % 1000;
                t = (t - ms) / 1000;// t = segundos
                                    
                long seg = t % 60;
                t = (t - seg) / 60; // t = minutos

                long min = t % 60;
                long h   = (t - min) / 60;

                // Imprimimos el tiempo
                Serial.print(t0);
                Serial.print(" = ");

                Serial.print(h);
                Serial.print(':');
                Serial.print(min);
                Serial.print(':');
                Serial.print(seg);
                Serial.print(':');
                Serial.println(ms);

                Serial.print("Número de milisegundos: ");
            }
        }
    }
}


