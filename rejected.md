# Cosas rechazadas

### <a name="relojv1"></a>Ejemplo: Reloj v1
Usando la función `millis` hagamos un reloj básico. [Aquí](src/cpp/reloj_v1)
puedes encontrar un primer intento. 

Como puedes ver es un intento fallido ya que estamos dando la hora en
milisegundos. En lugar de poner `00:01:00` que sería que ha transcurrido 1
minuto desde que se encendió el microcontrolador ponemos `60000`, lo cual es
completamente ilegible.

### <a name="conversionHHMMSS"></a>Ejercicio: conversión de `ms` a `hh:mm:ss`
Modifiquemos la versión 1 del reloj para que muestre la hora como
`hh:mm:ss`. 

El problema lo podemos descomponer en dos partes:
1. Dado un tiempo en milisegundos averiguar cuántas horas, minutos y segundos
   tiene.
2. Imprimir esos números en formato `hh:mm:ss`. 

La segunda parte debería de ser sencilla. Veamos cómo hacer la primera.

Si quieres programar un ordenador para hacer algo, lo primero que tienes que
saber es cómo hacerlo tú a mano. Si tu no sabes pasar de milisegundos a horas,
minutos y segundos va a ser imposible que puedas programar el arduino para que
lo haga por ti.

Para ello te propongo los siguientes problemas (y sí, son problemas básicos de
matemáticas; si programas un microcontrolador te vas a encontrar
sistemáticamente con problemas de este tipo que tienes que saber resolver).

Cuando abordes un problema nuevo intenta empezar siempre con problemas
sencillos. Por ello, en lugar de usar milisegundos usemos segundos con los que
estamos más familiarizados:


* A mano (puedes usar una calculadora):
  1. Calcula los segundos que hay en 2horas 3minutos y 50segundos.
  2. Descompón 16.525 segundos en horas, minutos y segundos.

Recuerda que lo importante es que te fijes en el método, ya que el método es
lo que tienes que programar.

### <a name="implementandoHHMMSS1"></a>Implementando la conversión anterior (1)
Para ver si el método que has dado es correcto escribe un programa que te pida
el número de milisegundos y te imprima en el monitor serie las horas, minutos
y segundos.

#### Problema 1
Si recuerdas, cuando aprendimos a leer del monitor serie, 
usando la función `Serial.read()`, solo podíamos leer carácter a carácter. La
función `Serial.read()` no lee números!!! Si queremos hacer un programa que
lea el número de milisegundos, esta función no nos sirve.

Es muy habitual encontrarnos con este tipo de problemas: queremos hacer algo
(leer un número en este caso) y en principio no sabemos qué hacer. En este
caso puedes:

1. ¿Arduino suministrará alguna función para leer números? En principio, leer
   un número parece algo bastante normal, así que debería de suministrar dicha
   función. Yo buscaría en un motor de búsqueda algo del tipo "arduino serial
   read number". Observar que lo busco en inglés y no en español.

2. Si no encuentro nada, puedo acudir a foros como el de 
   [stackoverflow](https://stackoverflow.com/) buscando ayuda. Si quieres
   encontrar ayuda busca siempre en inglés, nunca en español.

3. Si no encuentro nada siempre puedo recurrir al método tradicional: pensar y
   escribir yo mismo la función.

En este caso, al buscar la ayuda de arduino he encontrado la siguiente
función:
[`Serial.parseInt()`](https://www.arduino.cc/reference/en/language/functions/communication/serial/parseint/)
que lee un número de tipo `long`. Como ves el nombre está fatal elegido: yo lo
habría llamado `Serial.read_int()`, o en este caso `Serial.read_long()`.
Serían nombres más expresivos.

¿Podrías modificar el programa que vimos de lectura de un carácter usando esta
nueva función `Serial.parseInt()` para que lea números?

[Aquí](src/cpp/serial_read_v3) tienes la solución. Juega con él.
Prueba a escribir números positivos, negativos y letras a ver qué responde.

### Problema 2
Una vez que ya sabemos leer números del monitor serie es fácil escribir el
programa que queríamos: escribe un programa que te pida el número de
milisegundos y te imprima en el monitor serie las horas, minutos y segundos.


### <a name="implementandoHHMMSS2"></a>Implementando la conversión anterior (2)
El [programa anterior](src/cpp/ms2human_v1) es un chorizo: todo el código está en
la función `main`. Carece de estructura. Vamos a mejorarlo.

Estamos imprimiendo el tiempo en formato `hh:mm:ss`. Esta función es genérica.
Esto quiere decir que esto mismo puede que lo queramos hacer en otro programa.
Para poder reutilizarla haz lo siguiente:

1. Crea un archivo de cabecera `tiempo.h` donde definas el prototipo de la
   función
   ```
   void serial_print_time(long h, long min, long seg, long ms);
   ```
    
    El `void` lo que quiere decir es que esta función no devuelve nada. Le
    pasamos las horas, los minutos, segundos y milisegundos y los imprime en
    el monitor serie.

2. Implementa la función en el fichero `tiempo.ino`.
3. Modifica el `main` usando esa función.
   

## <a name="programOverload"></a>Programación: sobrecarga de funciones
En C clásico (no soy programador en C, así que desconozco cómo es en C
moderno) tenías que escribir diferentes funciones para imprimir un objeto
dependiendo de si el objeto era un `char`, un `int`, un `long`, ...
```
void print_char(char x);    /* imprime un char */
void print_int (int x);	    /* imprime un int  */
void print_long(long x);    /* imprime un long */
```

C++ admite lo que se llama sobrecarga de funciones: podemos usar el mismo
nombre para distintos tipos. En C++ las funciones anteriores se escribirían
como:
```
void print(char x);
void print(int x);
void print(long x);
```

Como lo mejor es ver cómo funciona en la práctica, [aquí](src/cpp/overload_v1)
puedes encontrar un programa que muestra el funcionamiento. Observa que las 3
funciones anteriores son 3 funciones *distintas*, dependiendo del tipo que le
pases como parámetro el compilador llama a una u otra función.

## <a name="programPasoReferencia"></a>Programación: paso por referencia y por valor
Explicación:
* Forma de llamar a una función: pila.
* Punteros y referencias.
* Paso por referencia y paso por valor.

### <a name="claseTiempo1"></a>Ejercicio: clase `Tiempo`
Crea la siguiente clase:
```
clase Tiempo{
public:
// constructor
    // opción 1: se le pasan los milisegundos. Almacena hh:mm:ss
    Tiempo(long ms);

    // opción 2: se le pasan directamente las horas, minutos y segundos.
    Tiempo(long h, long min, long seg);

private:
    long h_;	// horas
    long min_;
    long seg_;
};
```
e implementa la función `void serial_print(const Tiempo& t)` que imprima el
tiempo como `hh:mm:ss`.

