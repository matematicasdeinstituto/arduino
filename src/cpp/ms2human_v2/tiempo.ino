#include "tiempo.h"

void serial_print_time(long h, long min, long seg, long ms)
{
    Serial.print(h);
    Serial.print(':');
    Serial.print(min);
    Serial.print(':');
    Serial.print(seg);
    Serial.print(':');
    //Serial.println(ms); <-- observar, no escribo el retorno de carro ya que
                         // esta es una función genérica. No sé cómo se va a
                         // usar.
    Serial.print(ms);
}
