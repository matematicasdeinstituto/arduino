// Prueba básica L298N:
// Probamos a hacer girar los motores en uno u otro sentido.

// Estilo de programación: horrible  

// pines al que conectamos los motores
constexpr int motor1_in1 = 4;
constexpr int motor1_in2 = 5;

constexpr int motor2_in1 = 6;
constexpr int motor2_in2 = 7;

void setup() {
  // Configuramos todos los pines 
  pinMode(motor1_in1, OUTPUT);
  pinMode(motor1_in2, OUTPUT);
  pinMode(motor2_in1, OUTPUT);
  pinMode(motor2_in2, OUTPUT);
}

void loop() {
  // giramos el motor 1 hacia un lado
  digitalWrite(motor1_in1, HIGH);
  digitalWrite(motor1_in2, LOW);
  delay(2000);

  // paramos el motor
  digitalWrite(motor1_in1, HIGH);
  digitalWrite(motor1_in2, HIGH);
  delay(1000);

  // giramos el motor 1 hacia el otro lado
  digitalWrite(motor1_in1, LOW);
  digitalWrite(motor1_in2, HIGH);
  delay(2000);

    // paramos el motor
  digitalWrite(motor1_in1, HIGH);
  digitalWrite(motor1_in2, HIGH);
  delay(1000);

  // giramos el motor 2 hacia un lado
  digitalWrite(motor2_in1, HIGH);
  digitalWrite(motor2_in2, LOW);
  delay(2000);

  // paramos el motor
  digitalWrite(motor2_in1, HIGH);
  digitalWrite(motor2_in2, HIGH);
  delay(1000);

  // giramos el motor 1 hacia el otro lado
  digitalWrite(motor2_in1, LOW);
  digitalWrite(motor2_in2, HIGH);
  delay(2000);

    // paramos el motor
  digitalWrite(motor2_in1, HIGH);
  digitalWrite(motor2_in2, HIGH);
  delay(1000);
  
}
