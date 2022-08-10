const int pushButtonPin = 2;

const int ledPin1 =  13;
const int ledPin2 =  12;
const int ledPin3 =  8;

int ledState = HIGH;         
int buttonState;             
int lastButtonState = LOW;   

unsigned long lastDebounceTime = 0;  
unsigned long debounceDelay = 50;
         
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
  int reading = digitalRead(pushButtonPin);

  if (reading != lastButtonState) 
  {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) 
  {
    if (reading != buttonState) 
    {
      buttonState = reading;

      if (buttonState == HIGH) 
      {
        ledState = !ledState;
      }
    }
  }

  digitalWrite(ledPin1, ledState);
  digitalWrite(ledPin2, ledState);
  digitalWrite(ledPin3, ledState);

  lastButtonState = reading;
}
