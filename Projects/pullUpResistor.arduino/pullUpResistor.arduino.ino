#define inputPin 7

int state;

void setup() 
{
  Serial.begin(9600);
  pinMode(inputPin, INPUT);
}

void loop() 
{
  state = digitalRead(inputPin);
  Serial.println(state);
  delay(1000);
}

/*
Pullup resistors
Switch ON LOW
Switch OFF HIGH

Pulldown resistors 
Switch ON HIGH
Switch OFF LOW
*/

/*
Pullup and Pulldown resistors has similar circuitry.
Swap the places of Switch and Resistors to make a resistor from Pullup to Pulldown
And vice versa for the latter.
*/
