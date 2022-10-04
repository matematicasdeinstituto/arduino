# Links vídeos rotos
Gracias a la política de violación de la privacidad de Google/YouTube me han
bloqueado el canal donde estaba subiendo los vídeos, así que de momento los
links con los vídeos no funcionan. Los actualizaré en los próximos días.
RECORDAR: evitar usar Google, YouTube, ... si valoras tu privacidad.

# Tutorial básico de Arduino

* [Primeros pasos](#basico)
    * [Ejercicio: Modificando el tiempo de parpadeo](#tst_blink)

* [Electrónica: básico](#elecBasico)

* [Electrónica: LEDs](#elecLED)
    * [Ejercicio: blink con un LED normal](#tst_blink2)

* [Primer programa: Hola, mundo!](#holaMundo)

* [Programación: funciones (1)](#programFunciones1)
    * [Ejercicio: Valor de un polinomio](#valorPolinomio)

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

* [Ejercicios con pulsadores](#ejerConPulsadores)
    * [Teclado de un órgano de 1 tecla](#tecladoOrgano1tecla)
    * [Teclado de un órgano](#tecladoOrgano)
    * [Midiendo tiempo de reacción](#tiempoReaccion)
    * [Semáforo de peatones](#semaforoPeatones)

* [Buzzers](#tst_buzzer)
    * [Órgano de juguete](#organo)
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

* [Material](#tagmaterial)

* [Concursos](#tagConcursos)

* [Soluciones ejercicios](#tagSoluciones)


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
* [Breadboards](https://youtu.be/2Z5Uf695iRs)
* [Cables](https://youtu.be/v1DFYv1s34Q)
* [Componentes electŕonicos básicos](https://youtu.be/7U78iw5pG64)
* [Pilas](https://youtu.be/GwNezJgIQcU)
* [Pines de GND,5V y 3.3V del arduino](https://youtu.be/Vsvkc_RkaXQ)
* [Fuente alternativa de alimentación](https://youtu.be/SeGhZ36l0Kw)


## <a name="elecLED"></a>Electrónica: circuito con un LED
El problema con el LED que trae el microcontrolador es que es muy pequeño y
apenas se ve. Hagamos un circuito con un LED más grande.

Se puede conectar el LED directamente a una pila o a la salida de los 5V del
Arduino.

En el siguiente [vídeo](https://youtu.be/KABDQgGnzzE) puedes encontrar una
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
[Vídeo con el resultado](https://youtu.be/QNWXKy1bohM)


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
[Vídeo con el resultado](https://youtube.com/shorts/4Bjh7ld3DgI?feature=share)

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
[Vídeo con el resultado](https://youtube.com/shorts/-WwpDeqQ2Bs?feature=share)

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
[Vídeo con el resultado (1)](https://youtu.be/BzOcOpxq_XI)
[Vídeo con el resultado (2)](https://youtu.be/GPrpHbzgl1Q)

#### Material
* 6-8 LEDs
* 6-8 resistencias de 1k
* cables


### <a name="semaforo"></a>Ejercicio: Semáforo
Hacer un semáforo. Un semáforo tiene 3 LEDs: verde, amarillo y rojo. 

Se enciende primero el verde. Espera un tiempo. Pasa a amarillo, espera un
tiempo. Pasa a rojo, espera un tiempo y vuelve a empezar.

#### Resultado
[Vídeo con el resultado](https://youtube.com/shorts/RWQUCvbBO7g?feature=share)

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
[Vídeo con el resultado](https://youtube.com/shorts/VMj2FK9vXhA?feature=share)

## <a name="elePulsadores"></a>Electrónica: Pulsadores
Cuando pulsas el interruptor de la luz para entrar en una habitación el
interruptor se queda en la posición nueva a la que has cambiado. Los
pulsadores son parecidos a los interruptores salvo con la diferencia de que
cuando los sueltas el pulsador vuelve a la posición inicial en la que estaba.

[Este vídeo](https://youtu.be/AkVQ5Dq2lvc) muestra cómo se conecta un
pulsador.

Para ver cómo funciona un pulsador vamos a hacer un circuito básico:
conectemos un LED a un pulsador de tal manera que al presionarlo se encienda
el LED. [Aquí](https://youtu.be/3TEm4HDfCIk) puedes encontrar una breve
explicación.


#### Resultado
[Vídeo con el resultado](https://youtu.be/aNBpg-pQGZ4)

### Material
* 1 LED
* 1 resistencia 1k
* 1 pulsador.
* Cables

### <a name="puertaOR"></a>Ejercicio: puerta OR
Conecta un LED (con la resistencia) a 2 pulsadores de tal manera que el LED se
encienda cuando cualquiera de los 2 pulsadores se presione.

#### Resultado
[Vídeo con el resultado](https://youtu.be/pxFBEQX47rM)

### <a name="puertaAND"></a>Ejercicio: puerta AND
Conecta un LED (con la resistencia) a 2 pulsadores de tal manera que el LED se
encienda únicamente cuando los dos pulsadores estén pulsados a la vez.

#### Resultado
[Vídeo con el resultado](https://youtu.be/scgejITpFwk)


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
[Vídeo con el resultado](https://youtu.be/K8IfUYAIUBk)


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
[Vídeo con el resultado](https://youtu.be/aIDDdeC-X5M)

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


## <a name="ejerConPulsadores"></a>Ejercicios con pulsadores

### <a name="tecladoOrgano1tecla"></a>Ejercicio: Teclado órgano de 1 tecla
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

### <a name="explicacionMiniorgano1"></a>Explicación: Teclado órgano de 1 tecla
[Aquí](src/cpp/miniorgano_v1) puedes encontrar un primer intento. El problema
con este programa es que al presionar el pulsador no se escribe un "Do" sino
que se escribe continuamente Do hasta que se suelta el pulsador.

Tenemos que cambiar la lógica del programa: cuando el pulsador se presiona una
vez, se imprime "Do", pero una vez que se ha impreso "Do" una vez ya no se
debe de volver a imprimir. Para ello incluimos una variable `presionado` que
nos dice si el pulsador está presionado o no.

En la [v2](src/cpp/miniorgano_v2) puedes encontrar el resultado.



### <a name="tecladoOrgano"></a>Ejercicio: Teclado órgano
Hacer un teclado de un órgano (teclas Do, Re, Mi...) de tal manera que al
pulsar cada tecla se muestre en el monitor serial de Arduino las teclas
pulsadas. Reutiliza la clase `Pulsador` que acabamos de escribir.

#### Material
* 7 pulsadores
* cables

### <a name="tiempoReaccion"></a>Ejercicio: Midiendo tiempo de reacción
Haz un circuito para medir el tiempo de reacción de una persona. Se puede
hacer de varias formas: pones 3 leds y que vayan cambiando de color
alternativamente. De repente se encienden todos: pulsa un botón. Mide el
tiempo que tarda en reaccionar la persona mostrándolo en el monitor serie.

### Material
* 3 LEDs 
* 3 resistencias 1k
* 1 pulsador

### <a name="semaforoPeatones"></a>Ejercicio: Semáforo de peatones
En una calle hay un paso de cebra regulado por un semáforo. El semáforo
siempre está verde para los coches excepto cuando llega un peaton y pulsa un
botón, en cuyo caso el semáforo de coches se pone rojo (pasa primero por
amarillo) y el de peatones se pone verde. Transcurrido un tiempo el semáforo
de peatones se pone rojo y el de coches verde.

### Material
* 2 LEDs rojos
* 2 LEDs verdes
* 1 LED amarillo
* 5 resistencias 1k
* 1 pulsador

## <a name="tst_buzzer"></a>Buzzers

1. Generar la nota La al presionar un pulsador. 
2. Para entender bien lo que se está haciendo grabar el sonido emitido por un
   diapasón de 440Hz (La) y mostrarlo en el ordenador usando Audacity.
   ¿Reconoces la forma de la función?

### <a name="organo"></a>Ejercicio: Órgano de juguete

Fabricar un organo de juguete: no son más que unos cuantos pulsadores 
y un buzzer.

#### Material
* 7 pulsadores
* 1 buzzer
* Opcional: resistencias de 1k
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


