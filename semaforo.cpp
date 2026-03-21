
#define ledRosso 13
#define ledGiallo 12
#define ledVerde 11

void setup()
{
  pinMode(ledRosso,OUTPUT);
}

void loop()
{
  digitalWrite(ledVerde, HIGH);
  delay(1000);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledGiallo,HIGH);
  delay(1000);
  digitalWrite(ledGiallo, LOW);
  digitalWrite(ledRosso, HIGH);
  delay(1000);
  digitalWrite(ledRosso, LOW);
}
