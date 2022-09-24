# Tutorial básico de Arduino

* [Primeros pasos](#basico)
* [Blink](#tst_blink)
    * [Coche fantástico (efecto de LEDs)](#cocheFantastico)
    * [Semáforo](#semaforo)

* [Pulsadores](#tst_pulsadores)
    * [Teclado de un órgano](#tecladoOrgano)

* [Buzzers](#tst_buzzer)
    * [Órgano de juguete](#organo)

* [Motores de continua](#motoresDC)
    * Coche básico: [v1.0](#cocheBasico10)
		    [v1.1](#cocheBasico11)

* [Mandos a distancia](#recepcionIR)
    * [Coche básico  v2](#cocheBasico20)


* [Material](#tagmaterial)


## <a name="basico"></a>Primeros pasos

1. Comprar arduino. ¿Dónde? En amazon se pueden encontrar muchos kits. La
   marca ELEGOO parece ser buena marca y un poco más barata que la marca
   original. Para empezar recuerda comprar "ARDUINO UNO".


2. Ir a la página oficial de [arduino](https://www.arduino.cc/) y descargarse
   el IDE para tu ordenador: [download](https://www.arduino.cc/en/software).
   Selecciona la versión para tu sistema operativo. 

3. Después de instalarlo conviene probar un pequeño programa para ver que todo
   esté bien configurado. Para ello conecta tu arduino al ordenador, abre el 
   ejemplo `File > Examples > 01.Basics > Blink`, y compilalo cargándolo en el
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



### <a name="tst_blink"></a>Blink
#### Material
* 1 LED
* 1 resistencia 1K (la típica suele ser de 330 ohms)
* Cables


#### Actividad
1. El programa `blink` lo que hace es enciende un LED durante 1 segundo (= 1000
   ms), luego lo apaga durante 1 segundo (= 1000 ms) y volviendo a empezar.

   La parte que controla el tiempo de encendido/apagado es `delay(1000)`. Esta
   función le indica el microcontralador que no haga nada (que espere) durante
   1000 ms. Prueba a cambiar el tiempo que está encendido. En lugar de 1000 ms
   pon 2000 ms; ó 500 ms. ¿qué pasa si enciendes y apagas el led durante 10
   ms?

2. Explicación del programa.

3. Electrónica: hacer un circuito muy básico que encienda un LED.

4. El LED que estamos encendiendo es muy pequeño y apenas se ve. Encendamos un
   LED más grande: conecta al pin 13 (el pin del LED que estás encendiendo) a
   un LED normal.


### <a name="cocheFantastico"></a>Coche fántastico

Hacer el efecto del [coche
  fantástico](https://www.youtube.com/watch?v=c4M-GAS4cWE)


#### Material
* 6-8 LEDs
* 6-8 resistencias de 1k
* cables


### <a name="semaforo"></a>Semáforo
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


### <a name="tecladoOrgano"></a>Teclado órgano

Hacer un teclado de un órgano (teclas Do, Re, Mi...) de tal manera que al
pulsar cada tecla se muestre en el monitor serial de Arduino las teclas
pulsadas.

#### Material
* 7 pulsadores
* Opcional: 7 resistencias de 1k
* cables


## <a name="tst_buzzer"></a>Buzzers

1. Generar la nota La al presionar un pulsador. 
2. Para entender bien lo que se está haciendo grabar el sonido emitido por un
   diapasón de 440Hz (La) y mostrarlo en el ordenador usando Audacity.
   ¿Reconoces la forma de la función?

### <a name="organo"></a>Órgano de juguete

Fabricar un organo de juguete: no son más que unos cuantos pulsadores 
y un buzzer.

#### Material
* 7 pulsadores
* 1 buzzer
* Opcional: resistencias de 1k
* cables



## <a name="motoresDC"></a>Motores de continua

* Driver L298N: 
    * [Características](https://components101.com/modules/l293n-motor-driver-module)
    * [Datasheet](doc/L298_datasheet.pdf)
    * [Ejemplo](https://www.instructables.com/L298N-MOTOR-DRIVER-MODULE/) 

### <a name="cocheBasico10"></a>Coche básico v1.0
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

### <a name="cocheBasico11"></a>Coche básico v1.1

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


### <a name="cocheBasico20"></a>Coche básico v2
Hacer que el coche de v1.1 se controle con un mando a distancia.

#### Material
* Mismo que v1.1
* Receptor IR
* Mando a distancia



## <a name="tagmaterial"></a>Material para realizar las actividades
* 1 arduino
* 1 breadboard
* 8 LEDs rojos
* 1 LED amarillo
* 1 LED verde
* 8 resistencia 1k
* 7 pulsadores
* 1 buzzer
* 2 L298N (ó 1 solo si se hace el coche con 3 ruedas)
* 4 motores DC con reducción (que sean fáciles de montar)
* Receptor de infrarrojos (38kHz)
* Mando a distancia (puede ser el de la TV)
* Batería de 6V (?)
* Cables
* Palillos, cartón, tapones... lo que se necesite para hacer las ruedas y el
  soporte del coche.

### Material opcional
* 4 ruedas

