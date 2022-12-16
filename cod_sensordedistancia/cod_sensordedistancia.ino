#include<Ultrasonic.h>

#define pino_trigger 4 
#define pino_echo 5 

Ultrasonic ultrasonic(pino_trigger,pino_echo);

void setup()
{
  Serial.begin(9600);
  Serial.println("Lendo sensor...");
}

void loop()
{
  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);

  String cmMsecString = String(cmMsec, 0);
  String cmMsecStringFinal = cmMsecString + "centimetros";

  Serial.print("Distancia:");
  Serial.println(cmMsecStringFinal);
  delay(500);
}
