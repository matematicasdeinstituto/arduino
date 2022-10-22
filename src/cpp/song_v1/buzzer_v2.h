#pragma once

#ifndef __BUZZER_V2_H__
#define __BUZZER_V2_H__

class Buzzer{
public:
    Buzzer (int pin);

    void toca(int freq); // frecuencia
    void toca(int freq, int t_ms); 
    void stop(); // deja de tocar

private:
    int pin_;	// pin al que conectamos el buzzer
};


inline Buzzer::Buzzer(int pin) : pin_{pin}
{
    pinMode(pin_, OUTPUT);
}

inline void Buzzer::stop()
{
    noTone(pin_);
}

#endif


