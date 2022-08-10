int Relaypin = 13; 

void setup() 
{
  Serial.begin(9600);
  pinMode(Relaypin, OUTPUT); 
}

void loop() 
{
  digitalWrite(Relaypin, HIGH);
  Serial.println(digitalRead(Relaypin));
  delay(1500);
  digitalWrite(Relaypin, LOW);
  Serial.println(digitalRead(Relaypin));
  delay(1500);
}
