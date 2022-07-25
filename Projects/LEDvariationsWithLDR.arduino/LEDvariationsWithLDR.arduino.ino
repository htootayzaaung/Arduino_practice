int photoPin = A0;
int ledPin = 7;

void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  int lightRaw = analogRead(photoPin);
  Serial.println(lightRaw);{
  int brightnessValue = analogueRead(photoPin)
  delay(1000);
  
  if (lightRaw < 20) 
  {
    digitalWrite(ledPin, HIGH);
  }

  else 
  {
    digitalWrite(ledPin, LOW);
  }
}
