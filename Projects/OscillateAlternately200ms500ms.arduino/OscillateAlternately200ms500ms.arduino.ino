int led1 = 7;
int led2 = 8;

unsigned long currentTime = 0;

unsigned long tick = 0;

bool led1State = false;
bool led2State = false;

unsigned long previousTime = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}

void loop() 
{  
  currentTime = millis();

  if (currentTime - previousTime >= 10)
  {
    previousTime = currentTime;
    tick++;
    if (tick % 20 == 0)
    {
      toggleLed1();
    }
    if (tick % 50 == 0)
    {
      toggleLed2();
    }
  }
}

void toggleLed1()
{
  if (led1State == false)
  {
    digitalWrite(led1, HIGH);
    led1State = true;
  }
  else
  {
    digitalWrite(led1, LOW);
    led1State = false;
  }
}


void toggleLed2()
{
  if (led2State == false)
  {
    digitalWrite(led2, HIGH);
    led2State = true;
  }
  else
  {
    digitalWrite(led2, LOW);
    led2State = false;
  }
}
