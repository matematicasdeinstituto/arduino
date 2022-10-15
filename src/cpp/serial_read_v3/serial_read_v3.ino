// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino
// Ideas nuevas:
//  1. Serial.parseInt() = lee un 'long' de Serial


int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

    while(true){
        if (Serial.available() > 0){
            long n = Serial.parseInt();  

            Serial.print("Escrito: ");
            Serial.println(n);
        }
    }
}


