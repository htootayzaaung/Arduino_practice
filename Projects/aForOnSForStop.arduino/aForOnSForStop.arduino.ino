#define led1 7
#define led2 8
#define led3 12
#define led4 4
#define led5 13

void setup() 
{
  Serial.begin(9600);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() 
{  
  while (Serial.available())
  {
    int option = Serial.read();
      
    if (option == 97)
    {
      optionA();
    }
    else if (option == 115)
    {
      optionS();
    }
    else if (option == 102)
    {
      optionF();
    }
  }
}


void optionA()
{
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led4, HIGH);
  delay(1000);
  digitalWrite(led5, HIGH);
  delay(1000);

  allOn();
  Serial.println("ON");
}

void optionS()
{
  allOff();
  Serial.println("OFF");
}

void optionF()
{
  Serial.println("FLASH!");
  for (int i = 0; i < 100; i++)
  {
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  delay(250);
  allOn();
  delay(250);
  allOff();
  }
}

void allOn()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
}

void allOff()
{
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
}
