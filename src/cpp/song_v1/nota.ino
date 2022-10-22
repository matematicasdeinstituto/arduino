#include "nota.h"


void Nota_a_tocar::print() const
{
    Serial.print('(');
    Serial.print(frecuencia);
    Serial.print(", ");
    Serial.print(duracion);
    Serial.print(')');
}



void Nota_a_tocar::println() const
{
    print();
    Serial.print('\n');
}
