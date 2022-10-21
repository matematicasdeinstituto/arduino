# Tutorial básico de Arduino

* [Introducción](#introduccion)

* [Primeros pasos](#basico)
    * [Ejercicio: Modificando el tiempo de parpadeo](#tst_blink)

* [Electrónica: básico](#elecBasico)

* [Electrónica: LEDs](#elecLED)
    * [Ejercicio: blink con un LED normal](#tst_blink2)

* [Primer programa: Hola, mundo!](#holaMundo)

* [Programación: funciones (1)](#programFunciones1)
    * [Ejercicio: Valor de un polinomio](#valorPolinomio)

* [Programación: leyendo del monitor serie](#programSerialRead)
    * [ASCII](#programASCII)
    * [Tipo: char](#programtipoChar)

* [Programación: tipos básicos en C++](#programTypes)
    
* [Programación: funciones (2)](#programFunciones2)
* [Programación: bucles for](#programFor1)
    * [Ejercicio: números pares](#numerosPares)
    * [Ejercicio: LEDs parpadeando](#ledsParpadeando)

* [Programación: prototipos de funciones](#programPrototiposFunciones)

* [Programación: descomponiendo el programa en archivos](#programHeaderFiles)

* [Programación: condicionales if/else](#programIfElse)
    * [Efectos de LEDs](#efectoLEDs)
    * [Semáforo básico](#semaforo)

* [Programación: clases en C++ (1)](#programClases)
    * [Clase LED](#claseLED)
    * [Semáforo usando la clase LED](#semaforov2)
    * [Cruce con dos semáforos](#cruceSemaforosv1)


* [Electrónica: Pulsadores](#elePulsadores)
    * [Puerta OR](#puertaOR)
    * [Puerta AND](#puertaAND)

* [Programación: Pulsadores](#programPulsadores)
    * [Pull-up resistors](#ejempullupPulsador)
    * [Pull-down resistors](#ejempulldownPulsador)
    * [Arduino Pull-up resistor](#ejemArduinoPullup)
    * [Clase Pulsador](#clasepulsador)

* [Ejercicios con pulsadores (1)](#ejerConPulsadores1)
    * [Miniórgano](#tecladoOrgano1tecla)
    * [Explicación: miniórgano](#explicacionMiniorgano1)

* [Programación: switchs](#programSwitch)
    * [switch](#explicacionSwitch)
    * [Mejora escritura de switch](#mejoraSwitch)

* [Programación: enum](#programEnum)
    * [Clase pulsador v2](#clasePulsadorv2)
    * [Miniorgano v3](#ejerMiniorgano3)
    * [Miniorgano v4](#ejerMiniorgano4)

* [Programación: paso por valor y por referencia](#programPasoValorRef)
    * [Semáforo de peatones](#semaforoPeatones)

* [Programación: midiendo tiempo y tipos de enteros](#programTime)
    * [Midiendo tiempo de reacción (1)](#tiempoReaccion1)
    * [Generando números aleatorios](#funcrandom)
    * [Midiendo diferencias de tiempo](#proramTime2)
    * [Midiendo tiempo de reacción (2)](#tiempoReaccion2)
    * [Clase Cronometro](#claseCronometro)

* [Buzzers](#tst_buzzer)
    * [Ideas básicas de sonido](#basicoSonido)
    * [Generando 1 señal](#buzzer1senal)
    * [Escala musical](#buzzerEscala)
    * [Teclado de un órgano](#tecladoOrgano)
    * [Órgano de juguete](#organo1)

---------
* [Jugando con buzzers](#jugandoBuzzers)
    * [Tocando una canción](#cancion1)
    * [Sirena](#sirenaBuzzer)

* [Motores de continua](#motoresDC)
    * Coche básico: [v1.0](#cocheBasico10)
		    [v1.1](#cocheBasico11)

* [Mandos a distancia](#recepcionIR)
    * Coche básico [v2.0](#cocheBasico20)

* [Servo motor](#motorServo)

* [Sensor de ultrasonidos](#sensorUltrasonidos)
    * [Metro de "ultrasonidos"](#metroUltrasonidos)
    * [Semáforo de peatones automático](#semaforoPeatonesAutomatico)
    * Coche v3.0: [con sensor ultrasonidos](#cochev30)


* [Reflective Optical Sensor](#sensorOptico)
    * Coche v4.0: [seguidor de línea](#cochev40)

* [PWM: controlando la velocidad de un motor DC](#pwmMotorDC)

----
* [Material](#tagmaterial)

* [Concursos](#tagConcursos)

* [Soluciones ejercicios](#tagSoluciones)

* [Problemas a la hora de subir videos](#problemasVideos)

* [C ó C++](#cversuscpp)

* [¿Por dónde seguir?](#porDondeSeguir)


## <a name="introduccion"></a>Introducción
Las notas que vas a encontrar a continuación son eso: notas que pretenden
acompañar a un curso presencial. Eso hace que el curso que encuentres aquí no
esté completo: faltan explicaciones que pretendo hacer en persona. Con todo,
como suministro todos los ejemplos y ejercicios resueltos, cualquiera que
tenga interés y se tome la molestia de buscar en internet lo que no está
explicado aquí, le podrá sacar bastante partido.

Como puedes ver el proyecto tiene licencia GPL-3.0. Esto quiere decir que no
es necesario que robes el código: es gratuito, puedes hacer lo que quieras con
él (salvo venderlo, quedaría feo robarle el trabajo a otro y sacarle tú
dinero). Lo único que no puedes hacer es borrar las menciones de dónde has
sacado todo este material. Por lo demás, úsalo como quieras. Eso si: si algún
programa tiene errores, y lo usas en algún sitio, a mi no me
busques. El código se suministra tal y como está: sin garantías de ningún
tipo.

[Web](https://github.com/matematicasdeinstituto/arduino)

Autor: Matemáticas de Instituto


## <a name="basico"></a>Primeros pasos

1. Comprar arduino. ¿Dónde? En amazon se pueden encontrar muchos kits. La
   marca ELEGOO parece ser buena marca y un poco más barata que la marca
   original. Para empezar recuerda comprar "ARDUINO UNO".


2. Ir a la página oficial de [arduino](https://www.arduino.cc/) y descargarse
   el IDE para tu ordenador: [download](https://www.arduino.cc/en/software).
   Selecciona la versión para tu sistema operativo. 

3. Después de instalarlo conviene probar un pequeño programa para ver que todo
   esté bien configurado. Para ello conecta tu arduino al ordenador, abre el 
   ejemplo `File > Examples > 01.Basics > Blink`, y compílalo cargándolo en el
   arduino (pulsa el boton "flecha"). Lo más probable es que te falle porque
   no esté bien configurado.

   Si te dice que no conoce el board es porque tienes que indicarle al IDE que
   tienes conectado un Arduino UNO. Para ello pincha en 
   `Tools > Boards > Arduino AVR Boards` y selecciona "Arduino UNO".

    Vuelve a intentar cargar el ejemplo en el arduino (pulsa el botón
    "flecha").  Lo más probable es que te vuelva a generar otro error
    indicando que el puerto no está bien configurado. Para resolverlo tienes
    que seleccionar el puerto: `Tools > Port` y selecciona el que te sugiera
    el programa.

    Después de cargar el programa podrás ver que uno de los LEDs del Arduino
    parpadea. ¡Ha funcionado! 



### <a name="tst_blink"></a>Ejercicio: modificando tiempo de parpadeo
El programa `blink` lo que hace es enciende un LED durante 1 segundo (= 1000
ms), luego lo apaga durante 1 segundo (= 1000 ms) y volviendo a empezar.

La parte que controla el tiempo de encendido/apagado es `delay(1000)`. Esta
función le indica el microcontralador que no haga nada (que espere) durante
1000 ms. Prueba a cambiar el tiempo que está encendido. En lugar de 1000 ms
pon 2000 ms; ó 500 ms. ¿qué pasa si enciendes y apagas el led durante 10
ms?

## <a name="elecBasico"></a>Electrónica: básico
Los siguientes vídeos son una introducción básica a la electrónica:
* [Breadboards](https://odysee.com/@fisicadeinstituto:c/breadboard:b0)
* [Cables](https://odysee.com/@fisicadeinstituto:c/cables:7)
* [Componentes electŕonicos básicos](https://odysee.com/@fisicadeinstituto:c/componentes_electricos:3)
* [Pilas](https://odysee.com/@fisicadeinstituto:c/pilas:c)
* [Pines de GND,5V y 3.3V del arduino](https://odysee.com/@fisicadeinstituto:c/pines_arduino_5V:0)
* [Fuente alternativa de alimentación](https://odysee.com/@fisicadeinstituto:c/dc2dc:e)


## <a name="elecLED"></a>Electrónica: circuito con un LED
El problema con el LED que trae el microcontrolador es que es muy pequeño y
apenas se ve. Hagamos un circuito con un LED más grande.

Se puede conectar el LED directamente a una pila o a la salida de los 5V del
Arduino.

En el siguiente [vídeo](https://odysee.com/@fisicadeinstituto:c/circuito_led:2) puedes encontrar una
explicación del circuito a montar.

### Material
* 1 LED
* 1 resistencia 1k (la típica suele ser de 330 ohms)
* Cables


### <a name="tst_blink2"></a>Ejercicio: blink con un LED normal
Conecta el circuito del apartado anterior al pin 13 del Arduino, y ejecuta el
programa de Blink. Prueba a cambiar el tiempo de parpadeo. ¿A partir de que
tiempo no eres capaz de ver que parpadean los LEDs? ¿Sabes lo que es la
persistencia de la imagen en la retina? 

#### Resultado
[Vídeo con el resultado](https://odysee.com/@fisicadeinstituto:c/blink:0)


### Material
* 1 LED
* 1 resistencia 1k (la típica suele ser de 330 ohms)
* Cables

## <a name="holaMundo"></a>Primer programa: hola, mundo!
El primer programa que se aprende al aprender C++ es imprimir "Hola, mundo!"
en pantalla. Veamos cómo hacerlo. 

IMPORTANTE: El lenguaje de programación que usa Arduino es C++. Sin embargo,
por motivos que desconozco, el estilo de programación de los ejemplos que se
encuentran en internet es un C++ obsoleto. Como sería un error aprender un
estilo de programación anticuado en general los ejemplos los suministraré en
C++ moderno. Con todo, cuando ponga 'versión arduino' es porque el ejemplo
será el típico que viene en internet. Suministraré una versión más moderna
del mismo programa para comparar.


* [Versión arduino](src/arduino/hola_mundo)
* Versión C++: [v1](src/cpp/hola_mundo) 
	       [v2](src/cpp/hola_mundo_v2)

## <a name="programFunciones1"></a>Programación: funciones (1)
[Aquí](src/cpp/pow2) puedes encontrar un programa que calcula los cuadrados 
del 0 en adelante. 

### <a name="valorPolinomio"></a>Ejercicio: Valor de un polinomio
Haz que Arduino calcule la tabla de valores del polinomio `p(x) = 2x + 1`,
para `x` positivos *múltiplos de 10*.

Para ello crea una función que:
1. Se llame `pol`
2. Se le pase un entero `x` como argumento.
3. Devuelva un entero.

*Ayuda: para sumarle 1 a una variable lo más eficiente es escribir `++x`. Para
sumarle 10, puedes escribir `x = x + 10`, aunque suele ser más eficiente `x +=
10`*

## <a name="programSerialRead"></a>Programación: leyendo del monitor serie
Como lo más normal es cometer errores a la hora de programar, es fundamental
desarrollar métodos para probar todo el código que estamos escribiendo.

Una forma de probar que la función que acabamos de implementar es correcta es
hacer que el programa pida números al usuario y calcule el valor del polinomio
correspondiente. Para ello necesitamos aprender cómo leer.

[Aquí](src/cpp/serial_read_v1) puedes encontrar un programa que se limita a
leer del monitor serie imprimiendo lo que has escrito.

Como puedes observar `Serial.read()` devuelve un `int`. ¿Cómo lo sé?
Consultando la documentación. En la página de arduino puedes encontrar toda la
ayuda que necesitas. Cotillea la ayuda de
[Serial.read()](https://www.arduino.cc/reference/en/language/functions/communication/serial/read/)
Como puedes ver en la sección del `return` indica que devuelve un `int`.
Además observa que en la documentación puedes encontrar un ejemplo de cómo se
usa la función.


### <a name="programASCII"></a>ASCII
Nada más que se prueba el programa anterior se observa algo bastante raro:
* Al escribir una `a` el programa dice que hemos escrito `97`!!!
* Si escribes una `b`, `98`; si una `c`, 99, ...
* Si escribes un `1` el programa dice que hemos escrito `49`. Absurdo!!!

¿qué es lo que está ocurriendo? Lo que ocurre es que cuando escribimos una `a`
en el ordenador, el ordenador realmente almacena internamente el byte de valor
en decimal `97`. 

En la memoria de un ordenador solo podemos escribir bytes, y los bytes
básicamente son números. ¿Cómo podemos almacenar letras? La idea genial es
asignar a cada número un carácter (= letra). En principio se podía haber
asignado `a = 0`,  `b = 1`, ... El decir qué valor corresponde a cada letra se
llama codificación. La codificación más difundida inicialmente fue la que se
conoce como ASCII. En la
[wikipedia](https://en.wikipedia.org/wiki/ASCII#Printable_characters)
puedes encontrar la forma concreta como se codifican las letras. Observa que
en la tabla se ve que `95` corresponde a una `a` tal y como nos dice el
ordenador.

### <a name="programtipoChar"></a>Programación: tipo char
[Aquí](src/cpp/serial_read_v2) puedes encontrar el programa modificado de tal
manera que ahora sí imprime correctamente lo que escribimos.

¿Qué modificación hemos hecho? Hemos cambiado el tipo devuelto `int` por
`char`. Un `char` es un tipo básico de C++. Lo habitual es que sea de 1 byte.
Cuando decimos que un byte es de tipo `char` cuando lo imprimamos se imprimirá
como carácter y no como número entero. Esto es, 
```
char c = 65;	// el valor del byte c es 65
Serial.println(c); // como c es de tipo 'char' no se imprime 65 sino 'A'

int i = 65;    // el valor del byte i es 65
Serial.println(i); // como i es de tipo 'int' se imprime 65

```

[Aquí](src/cpp/char_type) tienes el programa anterior. Prueba a jugar a
cambiar los valores de `c` y de `i` comparándolos con la tabla ASCII dada en
la wikipedia.


## <a name="programTypes"></a>Programación: tipos básicos en C++
Un `int` en C++ representa un número entero (números positivos y negativos),
pero el compilador reserva solo 2 bytes luego en la realidad `int` **NO** es
un número entero sino un **entero de 2 bytes**. Esta diferencia importante se
suele olvidar muchas veces a la hora de programar pudiendo generar graves errores.

Para entender lo que significa veamos otros dos tipos básicos de C++:
* `uint8_t` es un entero positivo de 8 bits (1 byte)
* `int8_t` un número entero con signo (positivo/negativo) de 8 bits (1 byte).

[Este programa](src/cpp/uint8_t) muestra los valores que puede tomar un número 
de tipo `uint8_t`, mientras que [este otro](src/cpp/int8_t) es el equivalente
para un `int8_t`. Mira a ver el rango de valores que puede tomar cada tipo.



## <a name="programFunciones2"></a>Programación: funciones (2)
Hace muchos años había una serie de televisión que se llamaba "el coche
fantástico". En el frontal el coche tenía una serie de LEDs que se encendían
de un lado a otro. [Aquí](https://www.youtube.com/watch?v=t-iacBu8U1o) puedes
ver un vídeo con el efecto. 

Hagamos un programa que genere un efecto parecido.

* [Coche fantástico v1](src/cpp/coche_fantastico_v1)
  Usamos la función `write` para no tener que estar repitiendo continuamente
  código.

#### Resultado
[Vídeo con el resultado](https://odysee.com/@fisicadeinstituto:c/coche_fantastico:c)

## <a name="programFor1"></a>Programación: bucles for
* [Iteramos usando `while`](src/cpp/for01)
* [Iteramos usando `for`](src/cpp/for02)

Escribamos el programa del coche fantástico usando bucles for:
* [Coche fantástico v2](src/cpp/coche_fantastico_v2)


### <a name="numerosPares"></a>Ejercicio: números pares
Escribe un programa que muestre todos los números pares hasta el 20. Usa un
bucle `for`.

El programa usado para escribir los múltiplos de 10 tiene un error: escribe
una coma al final de cada serie de números. ¿Podrías corregir ese error? Dos
posibilidades: que escriba un punto y aparte al final, o que no escriba nada.



### <a name="ledsParpadeando"></a>Ejercicio: LEDs parpadeando

Usando el mismo circuito que en el coche fantástico haz que los LEDs parpadeen
2 ó 3 veces.

El programa tiene que contener las siguientes funciones:
* `leds_init()`: inicializa los pines donde se conectan los LEDS como de
  salida.
* `leds_apaga()`: apaga todos los leds.
* `leds_enciende()`: enciende todos los leds.
* `leds_parpadea(int n)`: parpadea `n` veces.

#### Resultado
[Vídeo con el resultado](https://odysee.com/@fisicadeinstituto:c/leds_parpadeando01:b)

#### Material
* 8 LEDs
* 8 resistencias 1k
* cables

## <a name="programPrototiposFunciones"></a>Programación: prototipos de funciones
[Posible solución al ejercicio anterior](src/cpp/leds_parpadeando_v1)

## <a name="programHeaderFiles"></a>Programación: descomponiendo el programa en archivos

* [Aquí](src/cpp/leds_parpadeando_v2) puedes encontrar el mismo programa
  solución anterior más estructurado: en un archivo tenemos el programa
  principal, mientras que en otro tenemos el comportamiento de los leds.

* ¿Qué son las guardas de cabecera? ¿Por qué el archivo `.h` tiene líneas
```
#ifndef __LEDS_H__
#define __LEDS_H__
...
#endif
```
Es para evitar que el compilador se quede colgado al intentar compilar el
programa. Prueba a compilar el siguiente
[ejemplo](src/cpp/recursive_header)


## <a name="programIfElse"></a>Programación: condicionales if/else
[Aquí](src/cpp/par_impar) puedes encontrar un programa que muestra 
los números del 1 al 10 indicando si son pares o impares.


### <a name="efectoLEDs"></a>Ejercicio: Efecto de LEDs
Prueba a jugar con los LEDs haciendo diferentes efectos. 

Posibilidades:

1. Se encienden 2 LEDs de un extremo y se mueven los 2 LEDs a la vez hasta el
   otro extremo. Puedes hacer que reboten o no. Elige.
2. Se encienden los LEDs de los extremos y se van moviendo hacia el centro.
3. Se encienden los dos LEDs del centro y se mueven hacia los extremos.
4. Se enciende el LED de la derecha y se mueve hasta el extremo izquierdo.
   Ese LED se queda iluminado. Se enciende de nuevo el LED de la derecha y se
   vuelve a mover "chocando" contra el LED de la derecha que estaba encendido,
   quedándose el segundo por la derecha iluminado, y así repetidamente.

5. Se encienden los LED impares, se apagan, se encienden los pares, se apagan,
   y volvemos a empezar.


#### Resultado
[Vídeo con el resultado (1)](https://odysee.com/@fisicadeinstituto:c/efecto_leds01:6)
[Vídeo con el resultado (2)](https://odysee.com/@fisicadeinstituto:c/efecto_leds02:d)

#### Material
* 6-8 LEDs
* 6-8 resistencias de 1k
* cables


### <a name="semaforo"></a>Ejercicio: Semáforo
Hacer un semáforo. Un semáforo tiene 3 LEDs: verde, amarillo y rojo. 

Se enciende primero el verde. Espera un tiempo. Pasa a amarillo, espera un
tiempo. Pasa a rojo, espera un tiempo y vuelve a empezar.

#### Resultado
[Vídeo con el resultado (ROTO)](https://youtube.com/shorts/RWQUCvbBO7g?feature=share)

#### Material
* 1 LED rojo
* 1 LED amarillo
* 1 LED verde
* 3 resistencias 1k
* cables

## <a name="programClases"></a>Programación: clases en C++

### <a name="claseLED"></a>Ejemplo: clase LED
[Aquí](src/cpp/clase_led) puedes encontrar el programa *blink* pero
implementado usando la clase LED.

Una de las ideas fundamentales a la hora de programar es que el código se
pueda leer, se entienda lo que hace el programa. 

Si yo quiero explicar a otra persona lo que hace mi programa *blink* le diré:

    1. enciendo el LED
    2. espero un tiempo
    3. apago el LED
    4. espero un tiempo
    5. vuelvo a empezar

Eso lo entiende cualquier persona. Yo quiero que mi programa sea igual de
sencillo de entender. Las clases facilitan eso, ya que el programa anterior lo
puedo escribir como
```
led.enciende();
delay(1000);
led.apaga();
delay(1000);
```

y la única pega es que el *espera* en lugar de en español está escrito en
inglés (*delay*).

### <a name="semaforov2"></a>Ejemplo: Clase Semaforo
[Aquí](src/cpp/semaforo_v2) puedes encontrar el programa del semáforo pero
implementado con una clase.

¿Cuál es la ventaja de este programa frente al programa inicial? Que ahora
podemos tener 2, 3, 4, ... semáforos. Todos los que queramos y no tenemos que
volver a escribir cómo funciona cada uno de ellos.


### <a name="cruceSemaforosv1"></a>Ejercicio: Cruce con dos semáforos
Haz un cruce con 2 semáforos. Cuando uno de los semáforos está en verde, el
otro está en rojo. Usa la clase Semaforo del ejemplo anterior.

#### Resultado
[Vídeo con el resultado](https://odysee.com/@fisicadeinstituto:c/cruce_semaforos_v01:9)

## <a name="elePulsadores"></a>Electrónica: Pulsadores
Cuando pulsas el interruptor de la luz para entrar en una habitación el
interruptor se queda en la posición nueva a la que has cambiado. Los
pulsadores son parecidos a los interruptores salvo con la diferencia de que
cuando los sueltas el pulsador vuelve a la posición inicial en la que estaba.

[Este vídeo](https://odysee.com/@fisicadeinstituto:c/pulsador_intro:4) muestra cómo se conecta un
pulsador.

Para ver cómo funciona un pulsador vamos a hacer un circuito básico:
conectemos un LED a un pulsador de tal manera que al presionarlo se encienda
el LED. [Aquí](https://odysee.com/@fisicadeinstituto:c/circuito_pulsador:9) puedes encontrar una breve
explicación.


#### Resultado
[Vídeo con el resultado](https://odysee.com/@fisicadeinstituto:c/pulsador01:5)

### Material
* 1 LED
* 1 resistencia 1k
* 1 pulsador.
* Cables

### <a name="puertaOR"></a>Ejercicio: puerta OR
Conecta un LED (con la resistencia) a 2 pulsadores de tal manera que el LED se
encienda cuando cualquiera de los 2 pulsadores se presione.

#### Resultado
[Vídeo con el resultado](https://odysee.com/@fisicadeinstituto:c/pulsador_or:1)

### <a name="puertaAND"></a>Ejercicio: puerta AND
Conecta un LED (con la resistencia) a 2 pulsadores de tal manera que el LED se
encienda únicamente cuando los dos pulsadores estén pulsados a la vez.

#### Resultado
[Vídeo con el resultado](https://odysee.com/@fisicadeinstituto:c/pulsador_and:1)


## <a name="programPulsadores"></a>Programación: Pulsadores
Hasta ahora hemos conectado los pines del Arduino únicamente a LEDs. A través
de esos pines el Arduino puede (o no) suministrar corriente al LED. Si la
suministra el LED estará encendido, en caso contrario apagado. Como sale
corriente a través del pin del Arduino a ese pin lo llamamos *pin de salida*,
porque sale corriente.

En los pines de salida quien controla el potencial es el Arduino: el programa
escribe un 0 (0 voltios) ó un 1 (5 voltios) en ese pin.

Para averiguar si un pulsador está pulsado lo que vamos a hacer es medir el
potencial de un circuito. Como ahora vamos a medir (=leer) el potencial en un
pin del Arduino, a estos pines se les llama *pines de entrada*. 

Dos circuitos básicos para saber si un pulsador está presionado o no: con pull-up resistor o con pull-down
resistor.

### <a name="ejempullupPulsador"></a>Ejemplo: pulsador con pull-up resistor
Arduino trae un ejemplo. Para verlo, pincha en `File > Examples > 02.Digital >
Button`.

Versiones del programa:
* [Tipo arduino](src/arduino/pullup_pulsador): similar al del ejemplo que trae
  el arduino.
* [v1](src/cpp/pullup_v1): escribimos explícitamente la función `main`.
* [v2](src/cpp/pullup_v2): usamos la clase LED que habíamos escrito.

Al igual que hemos definido una clase `LED` que estamos reutilizando en todos
los programas, sería interesante definir una clase `Pulsador` que podamos
volver a usar en el futuro. ¿Serías capaz de escribirla? Si no ves cómo
hacerlo mira la versión 3:
* [v3](src/cpp/clase_pulsador_pullup): escribimos una clase `Pulsador` que
  podamos reutilizar en otros programas como hacemos con `LED`.

#### Resultado
[Vídeo con el resultado](https://odysee.com/@fisicadeinstituto:c/pulsador_pull_up:6)


#### Material
* 1 pulsador
* 1 resistencia de 10k (o 20k)
* cables

### <a name="ejempulldownPulsador"></a>Ejercicio: pulsador con pull-down resistor
La resistencia del circuito anterior se llama *pull-up* porque cuando el
pulsador no está apretado fuerza el potencial en el punto donde lo medimos a
5 voltios (a 1 lógico). Si intercambiamos el pulsador con la resistencia, la
resistencia fuerza el potencial a 0 voltios. En este caso se llama
*pull-down*.

Monta el circuito correspondiente y reescribe el programa anterior de acuerdo
a esta resistencia. Mira el vídeo con el resultado para ver el circuito a
construir.


#### Resultado
[Vídeo con el resultado](https://odysee.com/@fisicadeinstituto:c/pulsador_pull_down:2)

### <a name="ejemArduinoPullup"></a>Ejemplo: Arduino pull-up resistor
Como es bastante habitual el tener que conectar dispositivos de entrada al
microcontrolador del Arduino, este trae ya internamente un pull-up resistor,
de tal manera que nos podemos ahorrar la resistencia cuando conectamos el
pulsador.

Lo único que tenemos que cambiar es la llamada a `pinMode(pin, INPUT)` por
`pinMode(pin, INPUT_PULLUP)` y eliminar la resistencia conectada al pulsador.

[Aquí](src/cpp/pullup_v3) puedes ver el programa correspondiente. Prueba a
ejecutarlo.

### <a name="clasePulsador"></a>Ejercicio: clase Pulsador
Modifica la clase `Pulsador` que habíamos escrito para que funcione siempre
con la resistencia interna del microcontrolador.


## <a name="ejerConPulsadores1"></a>Ejercicios con pulsadores (1)

### <a name="tecladoOrgano1tecla"></a>Ejercicio: Miniórgano de 1 tecla
Conecta un pulsador al arduino de tal manera que cuando se apriete muestre en
el monitor serie "Do". 

El programa tiene que funcionar de la siguiente forma:
1. Aprietas el pulsador.
2. Se muestra **una sola vez** la palabra "Do" en el monitor serie.
3. Se suelta el pulsador.

y volvemos a empezar. Sencillo, ¿verdad?


#### Material
* 1 pulsadores
* cables


### <a name="explicacionMiniorgano1"></a>Explicación: Miniórgano de 1 tecla
[Aquí](src/cpp/miniorgano_v1) puedes encontrar un primer intento. El problema
con este programa es que al presionar el pulsador no se escribe un "Do" sino
que se escribe continuamente Do hasta que se suelta el pulsador.

Tenemos que cambiar la lógica del programa: cuando el pulsador se presiona una
vez, se imprime "Do", pero una vez que se ha impreso "Do" una vez ya no se
debe de volver a imprimir. Para ello incluimos una variable `presionado` que
nos dice si el pulsador está presionado o no.

En la [v2](src/cpp/miniorgano_v2) puedes encontrar el resultado.


## <a name="programSwitch"></a>Programación: switchs 
### <a name="explicacionSwitch"></a>Explicación: switch
Imagina que escribes un programa donde en una variable `int dia` te dan el día
de la semana y quieres imprimir el día. Para ello escribirías código similar
a:

```
if (dia == 1)
    Serial.println("lunes");

else if (dia == 2)
    Serial.println("martes");

else if (dia == 3)
    Serial.println("miércoles");

else if (dia == 4)
    Serial.println("jueves");

else if (dia == 5)
    Serial.println("viernes");

else if (dia == 6)
    Serial.println("sábado");

else if (dia == 7)
    Serial.println("domingo");
```

C++ suministra una forma más sencilla de escribir lo anterior: usar `switch`.
El código anterior quedaría:

```
switch (dia){ 
    case 1:	
	Serial.println("lunes");
	break;

    case 2:
	Serial.println("martes");
	break;

    case 3:
	Serial.println("miércoles");
	break;

    case 4:
	Serial.println("jueves");
	break;

    case 5:
	Serial.println("viernes");
	break;

    case 6:
	Serial.println("sábado");
	break;

    case 7:
	Serial.println("domingo");
	break;
}
```

Dependiendo del valor que tenga `dia` se ejecutará una parte del programa u
otra. En el caso de que valga 1 (`case 1:`) se ejecutará todo lo que vaya
desde después del `case 1:` hasta el `break`.

En general:
```
switch(vble){
    case 1:
	// código a ejecutar en caso de que vble == 1
	break;

    case 2:
	// código a ejecutar en caso de que vble == 2
	break;

    case 3:
	// código a ejecutar en caso de que vble == 3
	break;

    ...
}
```

[Aquí](src/cpp/switch_v1) puedes encontrar el programa anterior. Prueba a
jugar con él.


### <a name="mejoraSwitch"></a>Mejora escritura de switch
Es fácil olvidar algún `break` a la hora de escribir los `switch` lo cual
haría que el programa funcionase de forma incorrecta. 
[Aquí](src/cpp/switch_v2) puedes encontrar una forma diferente de escribir
`switch` que evita el olvido del `break`. 



## <a name="programEnum"></a>Programación: enum
Uno de los problemas con el programa anterior es que estamos escribiendo 1, 2,
3, ... en los `case`. No es un programa que sea fácil de leer, ya que tienes
que recordar que 1 significa 'lunes', 2 'martes', ... 

La regla es intentar que el código sea lo más legible posible.
[Aquí](src/cpp/enum_v1) puedes encontrar el mismo programa pero más legible.
Para ello hemos definido 7 variables que indican el día de la semana. Observar
que en el programa así escrito el programador no tiene que recordar si el
`jueves' es el 4 ó el 5, simplificando la escritura y evitando errores.

### enums
Podemos simplificar el programa usando una enumeración. A fin de cuentas
estamos enumerando los días de la semana del 1 al 7. C++ suministra las `enum`
para simplificar. [Aquí](src/cpp/enum_v2) puedes encontrar el mismo programa
usando `enum`. 


### <a name="clasePulsadorv2"></a>Clase pulsador v2
Usemos `enum` y `switch` para mejorar nuestra clase `Pulsador`. El problema
que teníamos con la versión 1 es que no podíamos saber si el pulsador estaba
pulsado o no. Añadamos un estado al `Pulsador` que nos permita consultar si 
el pulsador estaba ya pulsado o no.

[Aquí](src/cpp/clase_pulsador_v20) puedes encontrar la clase
correspondiente.


### <a name="ejerMiniorgano3"></a>Ejercicio: miniorgano v3
Reescribe el programa del miniórgano usando la versión 2 del `Pulsador`.

### <a name="ejerMiniorgano4"></a>Ejercicio: miniorgano v4
En la versión 3 del miniórgano aparece la línea:

```
if (pulsador.estado() == Pulsador_estado::recien_pulsado)
```

que es demasiado larga. Es más natural de escribir

```
if (pulsador.recien_pulsado())
```

más corto y sencillo de leer.

Modifica la clase `Pulsador` y el programa añadiendo la función
`Pulsador::recien_pulsado()`. Y ya que estamos añade por consistencia las
siguientes funciones a la clase pulsador:

* `bool recien_pulsado();`
* `bool sigue_pulsado();`
* ` bool recien_soltado();`
* `bool sigue_soltado();`


## <a name="programPasoValorRef"></a>Programación: paso por valor y por referencia.

Explicar:
1. Llamada a una función: copia de argumentos en la pila.
2. Punteros y referencias.
3. Paso por valor, y paso por referencia.


### <a name="semaforoPeatones"></a>Ejercicio: Semáforo de peatones
En una calle hay un paso de cebra regulado por un semáforo. El semáforo
siempre está verde para los coches excepto cuando llega un peaton y pulsa un
botón, en cuyo caso el semáforo de coches se pone rojo (pasa primero por
amarillo) y el de peatones se pone verde. Transcurrido un tiempo el semáforo
de peatones se pone rojo (para avisar al peatón que se va a poner en rojo
primero parpadea) y el de coche verde.

Crea un circuito donde se vea un semáforo para los coches (3 luces, roja,
amarilla y verde) y un semáforo para los peatones (2 luces, roja y verde, con
un pulsador para que aprieten los peatones cuando quieran pasar), y
prográmalo para controlar el tráfico de una calle.

Para ello:
1. Escribe una función `void parpadea(LED& led, int n, int t)` que haga que
   un led parpadee `n` veces. El LED se encenderá `t` milisegundos, 
   se apagará `t` milisegundos, y así repetidamente `n` veces.

2. Crea dos clases: `Semaforo_coche` y `Semaforo_peaton` para controlar los
   dos semáforos. De momento no te ayudo, intenta hacerlo tú. Si necesitas
   ayuda pregunta.


### Material
* 2 LEDs rojos
* 2 LEDs verdes
* 1 LED amarillo
* 5 resistencias 1k
* 1 pulsador

## <a name="programTime"></a>Programación: midiendo tiempo y tipos de enteros
Arduino trae incorporada la función `millis` que devuelve el número de
milisegundos transcurridos desde que se encendió el microcontrolador.

La función `millis` devuelve un `unsigned long`. Este es un nuevo tipo de
entero.

[Aquí](src/cpp/reloj_v1) puedes encontrar un ejemplo de cómo usar la función
`millis`. 

### Tipos de enteros en C++
En C++ se definen los siguientes tipos básicos de enteros: 
* `short`, entero que al menos tiene 16 bits.
* `int`, este es el entero a usar por defecto. De mínimo 16 bits.
* `long`, entero de al menos 32 bits.
* `long long`, entero de al menos 64 bits.

Como ves la diferencia entre los diferentes tipos de enteros es el tamaño en
bits mínimo que tienen. En general, como estamos empezando, por defecto usa
siempre `int` salvo que alguna función, como `millis` devuelva explícitamente
otro tipo.

Además, los enteros pueden ser de dos tipos:
* `signed`, enteros con signo. Si no se pone nada el tipo definido es
  `signed`.
* `unsigned`, enteros sin signo.

**Advertencia**

Los tipos `unsigned` se crearon porque inicialmente los
ordenadores tenían poca memoria y el rango de valores positivos que admiten es
mayor que el rango de valores del mismo tipo pero `signed`. Sin embargo,
generan muchos problemas y dan muchos dolor de cabeza. Hasta tal punto que
cada vez se oye más el consejo de evitar usarlos (salvo que no se pueda no
usarlos). Resumiendo: cuando definas un entero por defecto defínelo siempre
como `int`.


### <a name="tiempoReaccion1"></a>Explicación: Midiendo tiempo de reacción (1)
Vamos a hacer un circuito para medir el tiempo de reacción de una persona.

Para ello ponemos a una persona delante de un LED y le damos un interruptor.
Cuando el LED se encienda, la persona tiene que apretar el interruptor
midiendo el tiempo que tarda en pulsarlo. Esa es la idea. Por supuesto que se
podría hacer de muy diferentes formas: suena música y de repente se para;
tienes que pulsar el pulsador cuando se para la música y medimos el tiempo que
tardas en hacerlo, ...

Concretemos lo que queremos hacer:
1. Necesitamos un LED y un pulsador.
2. El LED está apagado y de repente se enciende (o al revés).
3. Medimos el tiempo que tarda el usuario desde que apagamos el LED hasta que
   se enciende de nuevo.
4. Mostramos en el monitor serie el resultado.

Las partes 1 y 4 ya deberíamos de saberlas hacer. Es nuevo el apagar
aleatoriamente el LED y medir el tiempo que tarda. Veamos cómo hacerlo.


### <a name="funcrandom"></a>Programación: generando números aleatorios
Arduino trae la función `random` que genera un número de forma aleatoria.
Siempre que quieras usar una nueva función escribe un programa sencillo para
aprender a manejarla. Según la
[ayuda](https://www.arduino.cc/reference/en/language/functions/random-numbers/random/)
una forma de usar esta función es `long n = random(max);` lo que genera un
número aleatorio de [0, max).

[Aquí](src/cpp/random_v1) puedes encontrar un ejemplo básico de cómo usar esta
función.

### <a name="programTime2"></a>Programación: midiendo diferencias de tiempo
Para medir el tiempo transcurrido entre que se apaga el LED y se pulsa el
interruptor basta con anotar la "hora" a la que apagamos el LED y la "hora" a
la que se pulsa el interruptor. La diferencia será el tiempo:

```
// se apaga el LED
unsigned long t0 = millis();	// t0 = hora a la que se apaga el LED
...
// se pulsa el interruptor
unsigned long t1 = millis();	// t1 = hora a la que se pulsa el interruptor

unsigned long t = t1 - t0;      // tiempo transcurrido
```

[Aquí](src/cpp/millis_v1) puedes encontrar un ejemplo de cómo medir tiempos.



### <a name="tiempoReaccion2"></a>Ejercicio: Midiendo tiempo de reacción
Haz un circuito para medir el tiempo de reacción de una persona.


### Material
* 1 LEDs 
* 1 resistencias 1k
* 1 pulsador


### <a name="claseCronometro"></a>Ejercicio: clase Cronometro
El programa anterior lo que está haciendo es medir el tiempo que transcurre
desde que se apaga el LED hasta que se pulsa el pulsador. Si en lugar de
Arduino lo hicieramos a mano yo tendría un cronómetro en mi mano: cuando se
apaga el LED lo pongo en marcha, y cuando se pulsa el interruptor lo apago
mirando el tiempo transcurrido. 

A mi me gustaría que mi programa reflejase esta forma natural de concebir las
cosas. Quiero que mi programa quede:
```
    Cronometro crono;
    ... 

    while(true){
	...

        crono.start();
        // medimos el tiempo de lo que ejecutemos aquí
        crono.stop();

        // imprimos mensaje
        Serial.print(crono.time()); 
        Serial.println(" ms");
    }
```

Observar que eso es más legible. 

¿Te atreves a escribir la clase `Cronometro`? Una pista, la clase es:
```
class Cronometro{
public:
    Cronometro();
    
    void start(); 
    void stop();

    unsigned long time() const;

private:
    unsigned long t0_;	// tiempo en que se enciende
    unsigned long t1_;  // tiempo en que se apaga
};
```

Implementa tú las funciones.




## <a name="tst_buzzer"></a>Buzzers
### <a name="basicoSonido"></a>Explicación: Ideas básicas de sonido

#### Experimento
Coge un diapasón y graba con el ordenador el sonido que genera. Con el
programa Audacity abre el sonido y mira la señal que se ha generado.
¿Reconoces esa función?


### <a name="buzzer1senal"></a>Programación: Generando una señal.
[Aquí](src/cpp/buzzer_v1) puedes encontrar un programa básico que permite
generar un sonido de una determinada frecuencia. 

Prueba a poner el dedo encima del buzzer cuando está sonando. ¿Suena diferente
con el dedo puesto o quitado?

#### Material
* 1 buzzer

### <a name="buzzerEscala"></a>Ejercicio: Escala musical
Modifica el programa anterior para que toque la escala musical: do, re, mi,
fa, sol, la, si. El problema que tienes es averiguar las frecuencias de dicha
escala. Búscalo en internet.

(Si no quieres buscarlo basta con saber que:

1. Cuando dos notas estan separadas por una octava las frecuencias se 
   multiplican por dos.
2. Las frecuencias forman una sucesión geométrica.)


### <a name="tecladoOrgano"></a>Ejercicio: Teclado órgano
Hacer un teclado de un órgano (teclas Do, Re, Mi...) de tal manera que al
pulsar cada tecla se muestre en el monitor serial de Arduino las teclas
pulsadas. Reutiliza la clase `Pulsador` que ya escribimos.

#### Material
* 7 pulsadores
* cables


### <a name="organo1"></a>Ejercicio: Órgano de juguete

Fabrica un organo de juguete: no son más que unos cuantos pulsadores 
y un buzzer. 

#### Material
* 7 pulsadores
* 1 buzzer
* cables


### <a name="sirenaBuzzer"></a>Ejercicio: Sirena
¿Puedes hacer que el buzzer emita el sonido de una sirena de policía? ¿o de
los bomberos? ¿o reproducir la alarma de un despertador?

#### Material
* 1 buzzer
* cables


## <a name="motoresDC"></a>Motores de continua

* Driver L298N: 
    * [Características](https://components101.com/modules/l293n-motor-driver-module)
    * [Datasheet](doc/L298_datasheet.pdf)
    * [Ejemplo](https://www.instructables.com/L298N-MOTOR-DRIVER-MODULE/) 

### <a name="cocheBasico10"></a>Ejercicio: Coche básico v1.0
Fabricar un coche de juguete. Es un coche completamente tonto. Se limita a ir
1 segundo hacia adelante, parar 1 segundo, ir 1 segundo hacia atrás, parar y
volver a empezar.

#### Material
* 4 motores
* 4 ruedas (¿tapones? ¿de cartón? ¿compradas?)
* 2 L298N
* Soporte para montarlo (¿cómo fabricarlo? Como quieras)
* Batería de 6V (?)
* Cables

#### Actividad
El problema de esta actividad es cómo fabricar el coche. Tenemos motores,
arduino, los L298N, pero no tenemos ruedas ni un soporte para montarlo.

* ¿Qué usar de plataforma dónde colocar los motores, el
 arduino, las pilas...? ¿La hacemos de cartón? ¿palillos pegados? ¿panel?
 ¿lo metemos en una caja?

* ¿Y las ruedas? ¿cartón? ¿Tapones de garrafas?

### <a name="cocheBasico11"></a>Ejercicio: Coche básico v1.1

Fabricar un coche de juguete. Estará conectado por cable a un mando. El
mando pueden ser 4 botones (adelante, atrás, izquierda y derecha) o un
volante. Posibilidad de ponerle botón de encendido/parado.

#### Material
* Mismo que en v1.0

#### Método para fabricarlo

  Uno de los errores típicos al empezar es intentar hacerlo todo de golpe. Hay
  que ir poco a poco probando cada cosa que se vaya haciendo. Por eso te
  propongo que hagas:

  1. Construye un teclado conectado a la consola del Arduino. Al pulsar las
     teclas deberá aparecer en pantalla: arriba, abajo, izquierda y derecha,
     dependiendo de la tecla pulsada.

  2. Programa los motores: cuando pulsas arriba los motores giran hacia
     adelante; si pulsas abajo hacia atrás. De momento lo limitamos a
     adelante/atrás.

 
  4. Pruébalo. Si hay errores, corrígelos.

  5. Añade que el coche pueda girar a la derecha y a la izquierda. Haz
     experimentos. Prueba a girar una rueda en un sentido y otra en el otro:
     ¿cómo se mueve el coche?



## <a name="recepcionIR"></a>Mandos a distancia
* Receptor de IR: aprender a recibir las señales de un mando a distancia.


### <a name="cocheBasico20"></a>Ejercicio: Coche básico v2.0
Hacer que el coche de v1.1 se controle con un mando a distancia.

## <a name="motorServo"></a>Servo motor
* servo motor

## <a name="sensorUltrasonidos"></a>Sensor de ultrasonidos
* HC-SR04

### <a name="metroUltrasonidos"></a>Ejercicio: Metro de "ultrasonidos"
Hacer un "metro" que permita medir la distancia hasta la pared, techo, ...,
usando ultrasonidos. La distancia la muestra en el monitor serie.

#### Material
* HC-SR04
* Cables

### <a name="semaforoPeatonesAutomatico"></a>Ejercicio: Semáforo de peatones automático
Este semáforo es igual al semáforo de peatones salvo que en lugar de que el
peaton tenga que pulsar un botón, el semáforo se pone en verde automáticamente
para los peatones cuando detecta que se acerca uno. 

En caso de que llegasen peatones de forma continua ten cuidado no dejes el
semáforo en rojo para los coches continuamente. Transcurrido un tiempo tendrá
que ponerse en verde para que pasen los coches, luego en rojo para que pasen
los peatones que hayan llegado, ...

### Material
* 2 LEDs rojos
* 2 LEDs verdes
* 1 LED amarillo
* 5 resistencias 1k
* HC-SR04
* cables

### <a name="cochev30"></a>Ejercicio: Coche v3.0: con sensor ultrasonidos
Añadirle a la versión 2 del coche un sensor de ultrasonidos. Programarlo para
que el coche sea automático: se mueva hacia adelante hasta encontrar una
pared. En ese momento gira, cambia la dirección y va a otro sitio.

RETO: ¿Puedes programarlo para que sea capaz de salir de un laberinto? Videos
ejemplos: [01](https://www.youtube.com/watch?v=ZFO2q83cBfY) 
	  [02](https://www.youtube.com/watch?v=018CSojYI8Y)


#### Material
* Mismo que v2
* HC-SR04


### <a name="sensorOptico"></a>Reflective Optical Sensor
* CNY70 


### <a name="cochev40"></a>Ejercicio: Coche v4.0: seguidor de línea
Añadirle a la v3 un sensor (ó más de uno) para poder hacer un coche seguidor
de línea. [Aquí](https://www.youtube.com/watch?v=db6oKIfeocs) tienes un
ejemplo de cómo funcionan.

#### Material
* Mismo que v3
* 1-3 sensor CNY70

## <a name="pwmMotorDC"></a>PWM: controlando la velocidad de un motor DC



## <a name="tagmaterial"></a>Material para realizar las actividades
* 1 arduino
* 1 breadboard
* 8 LEDs rojos
* 1 LED amarillo
* 2 LED verdes
* 8 resistencia 1k
* 7 pulsadores
* 1 buzzer
* 2 L298N (ó 1 solo si se hace el coche con 3 ruedas)
* 4 motores DC con reducción (que sean fáciles de montar)
* 1 servo motor
* Batería de 6V (?)
* Receptor de infrarrojos (38kHz)
* Mando a distancia (puede ser el de la TV)
* HC-SR04 sensor de ultrasonidos
* 1-3 sensor CNY70
* Cables
* Palillos, cartón, tapones... lo que se necesite para hacer las ruedas y el
  soporte del coche.

### Material opcional
* 4 ruedas

## <a name="tagConcursos"></a>Concursos
Para cotillear:
* Eurobot: 
    [página España](https://www.eurobot.es/index.php/eurobot-jr)
    [página internacional](https://www.eurobot.org/eurobot-junior/)

    Plazo de inscripción: hasta finales de diciembre.


## <a name="tagSoluciones"></a>Soluciones ejercicios
* [Valor de un polinomio](src/cpp/polinomio)
* [LEDs parpadeando](#programPrototiposFunciones)
* [Números pares](src/cpp/numeros_pares)
* [Efecto de LEDs](src/cpp/luces_v1)
* [Semáforo v1](src/cpp/semaforo_v1)
* [Cruce de semáforos v1](src/cpp/cruce_semaforos_v1)
* [Pulsador con pull-down resistor](src/cpp/pulldown_v1)
* [Clase Pulsador](src/cpp/clase_pulsador_v1)
* [Miniorgano v3](src/cpp/miniorgano_v3)
* [Miniorgano v4](src/cpp/miniorgano_v4)
* [Semáforo de peatones v1](src/cpp/semaforo_peatones_v1)
* [Midiendo tiempo de reacción (2)](src/cpp/reaction_time_v1)
* [Clase Cronometro](src/cpp/reaction_time_v2)
* [Escala musical](src/cpp/buzzer_v2)
* [Teclado órgano](src/cpp/organo_v1)
* [Órgano de juguete](src/cpp/organo_v2)

## <a name="problemasVideos"></a>Problemas a la hora de subir videos
Al principio decidí subir todos los vídeos a YouTube. Sin embargo, después de
haber subido unos 30 vídeos cortos Google/YouTube me bloquearon el canal
diciendo que violaba su política. Parece ser que YouTube debe de estar en
contra de que se suban videos educativos de electrónica en español.

Como consecuencia del bloqueo he empezado a probar en Odysee.

## <a name="cversuscpp"></a>C ó C++
### Polémica C versus C++
Los microcontroladores se programan fundamentalmente con dos lenguajes: C ó
C++. A día de hoy estos son dos lenguajes muy diferentes: un programador de C
no entiende gran parte del código en C++, y un programador de C++ no es capaz
de escribir código al estilo de C. 

Cuando encuentres alguna página que te hable de C/C++ no pierdas tiempo
leyéndola: no saben programar ni en C ni en C++.

Hay muchos programadores de microcontroladores que programan en C. Otros 
programan en C++. ¿Cuál de los 2 lenguajes es mejor? Ni idea. A mi me gusta
más C++, pero si prefieres C, usa C. Gusto del consumidor.

### C++
C++ es un lenguaje que está evolucionando mucho. En el 2011 sufrió un gran
cambió, introduciendo  nuevos estilos de programación. En el 2020 se ha
modificado de nuevo, simplificando la programación genérica y añadiendo los
módulos. 

Esto quiere decir que tienes que tener mucho cuidado de dónde sacar la
información. En internet hay páginas escritas hace 20 años, páginas escritas
por gente que se quedó con el estilo de programación de 1995 que aprendió
cuando eran jóvenes. Si lees esas páginas vas a aprender un estilo totalmente
anticuado de programar en C++. Ten cuidado: aprende C++ moderno (en el 2023 se
espera introducir pequeñas mejoras, y cada 3-4 años ir mejorando el lenguaje).

### Recursos para aprender C++
Si tienes interés en aprender el lenguaje y estar a la última consulta
[CppCon](https://www.youtube.com/channel/UCMlGfpWw-RUdWX_JbLCukXg). Para
empezar busca los vídeos 'back to the basics' donde explican los conceptos
básicos.

El libro de [Stroustrup](https://www.stroustrup.com/programming.html), creador
del lenguaje de C++, puede ser una buena referencia para aprender el lenguaje.
En esa misma página puedes encontrar unas cuantas charlas y un montón de
recursos (aunque suelen ser para gente que ya sabe programar).


## <a name="porDondeSeguir"></a>¿Por dónde seguir?
Un buen libro para aprender a programar directamente un microcontrolador es el
de *Make: AVR Programming*, de *Elliot Williams* (ISBN: 978-1-449-35578-4). El
libro programa en C, con la ventaja de programar directamente el
microcontrolador (y por supuesto, está en inglés).

Con todo, si realmente tienes interés sería conveniente que aprendieses
primero a programar directamente un ordenador en C++. 




