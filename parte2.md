# Tutorial básico de Arduino (parte 2)

SIN ESCRIBIR

## Índice
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

---
* [Material](#tagmaterial)

* [Concursos](#tagConcursos)

* [Soluciones ejercicios](#tagSoluciones)

* [Problemas a la hora de subir videos](#problemasVideos)

* [C ó C++](#cversuscpp)

* [¿Por dónde seguir?](#porDondeSeguir)



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
A veces ha sido un poco frustrante escribir los ejemplos de este curso, ya que
por motivos que desconozco los de Arduino usan una versión antigua del
compilador (el IDE 2.0 trae la versión 7 de gcc, pero la versión actual del
compilador es la 11!!! ¿por qué están tan anticuados?). No se pueden usar
técnicas básicas modernas de programación por culpa de que los de Arduino dan
la impresión de que no saben mucho de programación (otro ejemplo de que 
lo que digo es cierto
es que el IDE te lo descargas y no hay forma de verificar que el programa 
que te has descargado no ha sido modificado. 
¿no saben cosas básicas de seguridad?).

Por ello, lo primero que tienes que hacer si quieres aprender a programar
microcontroladores es olvidarte de Arduino y empezar a programar los micros
directamente.

Un buen libro para aprender a programar directamente un microcontrolador es el
de *Make: AVR Programming*, de *Elliot Williams* (ISBN: 978-1-449-35578-4). El
libro programa en C, con la ventaja de programar directamente el
microcontrolador (y por supuesto, está en inglés).

Con todo, si realmente tienes interés sería conveniente que aprendieses
primero a programar directamente un ordenador en C++. 




