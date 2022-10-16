#pragma once

#ifndef __LED_H__
#define __LED_H__

// Toda clase tiene mínimo 2 partes:
//  1. parte pública, a la que puede acceder cualquier función
//  2. parte privada, a la que solo pueden acceder funciones de la clase
// 
// Toda clase tiene una interfaz y una implementación.
// Imagina que fabricas un coche:
//  * la interfaz del coche son las operaciones que puede hacer un conductor
//    con el coche. Ejemplo: puedes girar el volante a la derecha, a la
//    izquierda, cambiar marcha, pisar el acelerador, soltarlo, pisar el
//    freno...
//    Estas operaciones son públicas, cualquiera (que esté dentro del coche)
//    puede ejecutarlas.
//
//  * la implementación es cómo funciona internamente. Cuando yo piso el
//    acelerador de mi coche sé que acelera, pero no tengo ni idea de qué es
//    lo que hace internamente para acelerar. Esos detalles internos de cómo
//    funciona el coche es lo que llamamos su implementación y solo deben de
//    ser accesibles al ingeniero que diseñó el coche. 
//    Esta es la parte privada.
//	    
// Una de las finalidades de las clases es desvincular el interfaz de la
// implementación, el desvincular la pregunta ¿qué puedo hacer con mi coche
// (mi clase)? (=interfaz) de la pregunta ¿cómo lo hace? (=implementación)
class LED{
public:	// parte pública
// constructor de la clase: 
//	El constructor se llama en el momento en que se define un objeto de la
//	clase.
    LED(int pin0);  // le pasamos el pin al que conectamos el LED
    
    // encendemos el LED.  El 'const' que aparece al final indica que esta
    // función no modifica los datos de la clase
    void on() const; // enciende el LED (en lugar de on() 
		     // puedes llamarlo enciende())
    void off() const; // apaga el LED

private: // parte privada
// Datos de la clase
    /*const*/ int pin;  // pin al que conectamos el LED
};


#endif


