// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino
// Ideas nuevas:
//  1. tipo `char`

int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

    while(true){
        char c = 65;
        Serial.print("c = ");
        Serial.print(c);
        int i = 65;
        Serial.print("; i = ");
        Serial.println(i);
        delay(500);
    }
}


