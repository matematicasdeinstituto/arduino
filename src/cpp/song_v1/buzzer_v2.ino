#include "buzzer_v2.h"


void Buzzer::toca(int freq)
{
    if (freq > 0)
	tone(pin_, freq);
    else
	stop();
}

void Buzzer::toca(int freq, int t_ms)
{
    if (freq > 0)
	tone(pin_, freq, t_ms);

    else
	stop();
}


