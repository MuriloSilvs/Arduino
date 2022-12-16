const int pino_led = 12;
const int pino_led2 = 11;

void setup() {
pinMode(pino_led, OUTPUT); // pino 13
pinMode(pino_led, OUTPUT); // pino 13
}

void loop() {
  digitalWrite(pino_led, HIGH);
  delay(1000); 
  digitalWrite(pino_led2, LOW);
  delay(1000);
   digitalWrite(pino_led2, HIGH);
  delay(1000); 
  digitalWrite(pino_led , LOW);
  delay(1000);
}
