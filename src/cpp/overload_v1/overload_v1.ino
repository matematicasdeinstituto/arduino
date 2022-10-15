// Autor: matematicasdeinstituto
// Web  : https://github.com/matematicasdeinstituto/arduino
// Ideas nuevas:
//  1. sobrecarga de funciones

void print(char x)
{ Serial.println("Llamando a print(char)");}

void print(int x)
{ Serial.println("Llamando a print(int)");}

void print(long x)
{ Serial.println("Llamando a print(long)");}

void print_linea()
{ Serial.println("---------------------------------");}

int main()
{
    init();
    
// init Serial
    Serial.begin(9600);
    while (!Serial) { ; }

    while(true){
        char c = 'a';
        print(c);
        print_linea();
        delay(500);

        int i = 3;
        print(i);
        print_linea();
        delay(500);

        long l = 30;
        print(l);
        print_linea();
    
        delay(3000);

    }
}


