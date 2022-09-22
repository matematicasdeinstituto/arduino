# Tutorial básico de Arduino

* [Cosas básicas](#basico)
* [Motores de continua](#motoresDC)


## <a name="basico"></a>Cosas básicas

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





## <a name="motoresDC"></a>Motores de continua

* Driver L298N: 
    [características](https://components101.com/modules/l293n-motor-driver-module)
    [ejemplo](doc/L298N.pdf)
