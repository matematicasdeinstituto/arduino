# Tutorial básico de Arduino

* [Primeros pasos](#basico)
* [Blink](#tst_blink)
* [Jugando con LEDs](#tst_blink_variaciones)
* [Pulsadores](#tst_pulsadores)
* [Jugando con pulsadores](#tst_pulsadores_ejemplo)
* [Buzzers](#tst_buzzer)
* [Órgano de juguete](#organo)
* [Motores de continua](#motoresDC)


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



## <a name="tst_blink"></a>Blink
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


## <a name="tst_blink_variaciones"></a>Jugando con LEDs

Posibles programas que se pueden hacer:

* Hacer el efecto del [coche
  fantástico](https://www.youtube.com/watch?v=c4M-GAS4cWE)

* Hacer un semáforo.


## <a name="tst_pulsadores"></a>Pulsadores

1. Electrónica: para ver cómo funciona un pulsador hacer un circuito que
   encienda o apague un LED al pulsarlo.

2. Repetir el mismo circuito pero esta vez usando Arduino.


## <a name="tst_pulsadores_ejemplo"></a>Jugando con pulsadores

* Conectar varios pulsadores, cada uno que represente una nota musical (Do,
  Re, Mi, ...) y que al pulsarlos se muestre en el "monitor serial" del IDE
  de Arduino la tecla pulsada.

## <a name="tst_buzzer"></a>Buzzers

1. Generar la nota La al presionar un pulsador. 
2. Para entender bien lo que se está haciendo grabar el sonido emitido por un
   diapasón de 440Hz (La) y mostrarlo en el ordenador usando Audacity.
   ¿Reconoces la forma de la función?

## <a name="organo"></a>Organo de juguete

* Fabricar un organo de juguete: no son más que unos cuantos pulsadores 
  y un buzzer.




## <a name="motoresDC"></a>Motores de continua

* Driver L298N: 
    * [Características](https://components101.com/modules/l293n-motor-driver-module)
    * [Datasheet](doc/L298_datasheet.pdf)
    * [Ejemplo](https://www.instructables.com/L298N-MOTOR-DRIVER-MODULE/) 


## <a name="cocheBasico"></a>Coche básico v1

* Fabricar un coche de juguete. Estará conectado por cable a un mando. El
  mando pueden ser 4 botones (adelante, atrás, izquierda y derecha) o un
  volante. Posibilidad de ponerle botón de encendido/parado.

  Método para fabricarlo: 

  Uno de los errores típicos al empezar es intentar hacerlo todo de golpe. Hay
  que ir poco a poco probando cada cosa que se vaya haciendo. Por eso te
  propongo que hagas:

  1. Construye un teclado conectado a la consola del Arduino. Al pulsar las
     teclas deberá aparecer en pantalla: arriba, abajo, izquierda y derecha,
     dependiendo de la tecla pulsada.

  2. Programa los motores: cuando pulsas arriba los motores giran hacia
     adelante; si pulsas abajo hacia atrás. De momento lo limitamos a
     adelante/atrás.

  3. Fabrica el coche. ¿Qué usar de plataforma dónde colocar los motores, el
     arduino, las pilas...? ¿La hacemos de cartón? ¿palillos pegados? ¿panel?
     ¿Y las ruedas? ¿cartón? ¿Tapones de garrafas?
 
  4. Pruébalo. Si hay errores, corrígelos.

  5. Añade que el coche pueda girar a la derecha y a la izquierda. Haz
     experimentos. Prueba a girar una rueda en un sentido y otra en el otro:
     ¿cómo se mueve el coche?



