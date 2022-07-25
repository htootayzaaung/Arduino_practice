
const int pushButtonPin = 2;  
const int ledPin1 =  13;
const int ledPin2 =  12;
const int ledPin3 =  8;

int buttonState = 0;
         
void setup() 
{
  Serial.begin(9600);

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

  pinMode(pushButtonPin, INPUT);
}

void loop() 
{
  buttonState = digitalRead(pushButtonPin);

  Serial.println(buttonState);
  
  if (buttonState == HIGH) 
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
  }
   
  else if (buttonState == LOW)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }

  delay(100);
}
