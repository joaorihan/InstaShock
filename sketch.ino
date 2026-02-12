int i = 0;

void setup() {
 pinMode(17, INPUT);
 pinMode(4, OUTPUT);
 
 Serial.begin(115200);
 Serial.println("Hello, ESP32!");
}

void loop() {
 int taser = digitalRead(17);

  if (taser == 0){
    i++;
  } 

  Serial.print("\nValor do contador de tempo: ");
  Serial.print(i);

  if (i >= 10){
    Serial.println("\nVocê já usou o instagram por tempo demais hoje!");
    digitalWrite(4, HIGH);
    delay(1000);
  }

  digitalWrite(4, LOW);
  delay(1000); // this speeds up the simulation
}
