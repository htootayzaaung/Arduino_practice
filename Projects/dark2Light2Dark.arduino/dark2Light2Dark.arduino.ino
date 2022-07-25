#define ledPin 6

void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  for (int i = 0; i < 255; i++)
  {
    analogWrite(ledPin, i);
    Serial.println(i);
    delay(500);
  }
 
 for (int i = 255; i > 0; i--)
 {
    analogWrite(ledPin, i);
    Serial.println(i);
    delay(500);
  }

}
