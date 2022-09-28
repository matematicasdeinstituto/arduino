#pragma once

#ifndef __LED_H__
#define __LED_H__

class LED{
public:
    LED(int pin0);  // le pasamos el pin al que conectamos el LED
    
    void on() const; // enciende el LED (en lugar de on() 
		     // puedes llamarlo enciende())
    void off() const; // apaga el LED

private:
    const int pin;  // pin al que conectamos el LED
};


#endif


