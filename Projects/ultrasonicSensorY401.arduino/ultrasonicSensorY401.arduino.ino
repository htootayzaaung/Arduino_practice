#include <SoftwareSerial.h>

SoftwareSerial mySerial(3, 2);                    

/*
Calling the constructor: SoftwareSerial(rxPin, txPin, inverse_logic)
Can accept only 2 parameters.
*/
                                                 
unsigned int HighByte = 0;
unsigned int LowByte  = 0;
unsigned int Len  = 0;

void setup() 
{  
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() 
{
  mySerial.flush();                               // Waits for the transmission of outgoing serial data to complete.
  mySerial.write(0X55);                           // trig US-100 begin to measure the distance
  delay(500);                                  
  
  if (mySerial.available() >= 2)                  // check receive 2 bytes correctly
  {
    HighByte = mySerial.read();
    LowByte  = mySerial.read();
    
    Serial.print("HighByte: ");
    Serial.println(HighByte);
    Serial.print("LowByte: ");
    Serial.println(LowByte);

    Len  = HighByte * 256 + LowByte;             // Calculate the distance 
    
    if (Len > 1)
    {
      Serial.print("Distance: ");
      Serial.print(Len, DEC);          
      Serial.println(" mm");                  
    }
  }
  delay(300);                                    
}

// HighByte becomes >= 1 at further distances from the Ultrasonic-sensor
