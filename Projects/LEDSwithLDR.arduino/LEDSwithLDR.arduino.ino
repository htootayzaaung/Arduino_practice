/*
   Roy Ben Avraham
   Last modification: 31/3/2020
   Project: Controlling LEDS with LDR sensor
*/

// variables ( You can change the pins as you wish)
const int ldrPin = A0;    
const int ledPin1 = 12; 
const int ledPin2 = 11; 
const int ledPin3 = 10; 
const int ledPin4 = 9; 

int ldrValue = 0;
int ldrlevel1=600; 
int ldrlevel2=700; 
int ldrlevel3=750; 
int ldrlevel4=800;

void setup() {
  Serial.begin(9600);    
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  ldrValue = analogRead(ldrPin); 
  Serial.println(ldrValue);
  if (ldrValue < ldrlevel1) {
    digitalWrite(ledPin4, HIGH);
  }
  else if (ldrValue < ldrlevel2) {
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, HIGH);
  }
  else if (ldrValue < ldrlevel3) {
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, HIGH);
  }
  else if (ldrValue < ldrlevel4) {
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin1, HIGH);
  }
  else {
    digitalWrite(ledPin1, LOW);
      }
   }
