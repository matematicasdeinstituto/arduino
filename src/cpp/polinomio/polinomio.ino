
int pol(int x)
{ 
    return 2*x + 1; 
}

int main()
{
    init();

    Serial.begin(9600);
    while (!Serial) 
        { ; }

    int x = 0;
    while (true){
        int y = pol(x);

        Serial.print("pol(");
        Serial.print(x);
        Serial.print(") = ");
        Serial.println(y);
        delay(300);

        x += 10; // Idéntico a: x = x + 10;
    }
}


