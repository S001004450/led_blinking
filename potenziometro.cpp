	
int potenziometro = A0;
int led = 11;
void setup()
{

  pinMode(potenziometro, INPUT);
  pinMode(led, OUTPUT);
  
}

void loop()
{

  int valore_potenziometro = analogRead(potenziometro);
  int valore = map(valore_potenziometro, 0, 1023, 0, 255);
  analogWrite(led, valore);

}potenziomeyro