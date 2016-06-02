// 1 LED CONECTADO EN EL PIN 13
// 1 PULSADOR CONECTADO EL EL PIN 2

//CADA VEZ QUE SE EJECUTE EL PROYECTO NODE SE VA PRENDER
// EL LED ROJO Y VA MOSTRAR SIEMPRE EL ESTADO 
// DEL PULSADOR CERO(0) O UNO(1)
int input;
// the setup routine runs once when you press reset:
void setup() {
   pinMode(13, OUTPUT); 
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  if (Serial.available() > 0) {
    input = Serial.read();
    if (input == 'p') {
      digitalWrite(13, HIGH); 
    }
    if (input == 'a') {
    {
      digitalWrite(13, LOW); 
    }
  }
 }

  int sensorValue = digitalRead(2);

  Serial.print(sensorValue);
  delay(1000);        

  
}

