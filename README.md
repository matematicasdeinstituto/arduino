# Tutorial básico de Arduino

* [Primeros pasos](#basico)
    * [Ejercicio: Modificando el tiempo de parpadeo](#tst_blink)

* [Electrónica: circuito con un LED](#elecLED)
    * [Ejercicio: blink con un LED normal](#tst_blink2)

* [Primer programa: Hola, mundo!](#holaMundo)
* [Programación: funciones y bucles for](#programFunciones)
    * [Ejercicio: LEDs parpadeando](efectoLEDs)

* [Programación: prototipos de funciones](#PrototiposFunciones)

* [Programación: descomponiendo el programa en archivos](#programHeaderFiles)
    * [Efectos de LEDs](#efectoLEDs)
    * [Semáforo básico](#semaforo)

* [Pulsadores](#tst_pulsadores)
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
1. El programa `blink` lo que hace es enciende un LED durante 1 segundo (= 1000
   ms), luego lo apaga durante 1 segundo (= 1000 ms) y volviendo a empezar.

   La parte que controla el tiempo de encendido/apagado es `delay(1000)`. Esta
   función le indica el microcontralador que no haga nada (que espere) durante
   1000 ms. Prueba a cambiar el tiempo que está encendido. En lugar de 1000 ms
   pon 2000 ms; ó 500 ms. ¿qué pasa si enciendes y apagas el led durante 10
   ms?

## <a name="elecLED"></a>Electrónica: circuito con un LED
El problema con el LED que trae el microcontrolador es que es muy pequeño y
apenas se ve. Hagamos un circuito con un LED más grande.

### Material
* 1 LED
* 1 resistencia 1K (la típica suele ser de 330 ohms)
* Cables


### <a name="tst_blink2"></a>Ejercicio: blink con un LED normal
Conecta el circuito del apartado anterior al pin 13 del Arduino, y ejecuta el
programa de Blink. Prueba a cambiar el tiempo de parpadeo. ¿A partir de que
tiempo no eres capaz de ver que parpadean los LEDs? ¿Sabes lo que es la
persistencia de la imagen en la retina? 


### Material
* 1 LED
* 1 resistencia 1K (la típica suele ser de 330 ohms)
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


## <a name="programFunciones"></a>Programación: funciones y bucles for
* [Primera versión](src/cpp/coche_fantastico_v1)
  Usamos la función `write` para no tener que estar repitiendo continuamente
  código.

* [Segundo versión](src/cpp/coche_fantastico_v2)
  Usamos bucles `for` para simplificar el código.


### <a name="efectoLEDs"></a>Ejercicio: LEDs parpadeando

Usando el mismo circuito que en el coche fantástico haz que los LEDs parpadeen
2 ó 3 veces.

El programa tiene que contener las siguientes funciones:
* `leds_init()`: inicializa los pines donde se conectan los LEDS como de
  salida.
* `leds_apaga()`: apaga todos los leds.
* `leds_enciende()`: enciende todos los leds.
* `leds_parpadea(int n)`: parpadea `n` veces.


#### Material
* 8 LEDs
* 8 resistencias 1k
* cables

## <a name="programPrototiposFunciones"></a>Programación: prototipos de funciones
[Posible solución al ejercicio anterior](src/cpp/leds_parpadeando_v1)

## <a name="programHeaderFiles"></a>Programación: descomponiendo el programa
en archivos

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


### <a name="efectoLEDs"></a>Ejercicio: Efecto de LEDs
Prueba a jugar con los LEDs haciendo diferentes efectos. 

Posibilidades:

2. Se encienden 2 LEDs de un extremo y se mueven los 2 LEDs a la vez hasta el
   otro extremo. Puedes hacer que reboten o no. Elige.
3. Se encienden los LEDs de los extremos y se van moviendo hacia el centro.
4. Se encienden los dos LEDs del centro y se mueven hacia los extremos.
5. Se enciende el LED de la derecha y se mueve hasta el extremo izquierdo.
   Ese LED se queda iluminado. Se enciende de nuevo el LED de la derecha y se
   vuelve a mover "chocando" contra el LED de la derecha que estaba encendido,
   quedándose el segundo por la derecha iluminado, y así repetidamente.

6. Se encienden los LED impares, se apagan, se encienden los pares, se apagan,
   y volvemos a empezar.


#### Material
* 6-8 LEDs
* 6-8 resistencias de 1k
* cables


### <a name="semaforo"></a>Ejercicio: Semáforo
Hacer un semáforo.

#### Material
* 1 LED rojo
* 1 LED amarillo
* 1 LED verde
* 3 resistencias 1k
* cables


## <a name="tst_pulsadores"></a>Pulsadores

1. Electrónica: para ver cómo funciona un pulsador hacer un circuito que
   encienda o apague un LED al pulsarlo.

2. Repetir el mismo circuito pero esta vez usando Arduino.


### <a name="tecladoOrgano"></a>Ejercicio: Teclado órgano

Hacer un teclado de un órgano (teclas Do, Re, Mi...) de tal manera que al
pulsar cada tecla se muestre en el monitor serial de Arduino las teclas
pulsadas.

#### Material
* 7 pulsadores
* Opcional: 7 resistencias de 1k
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

