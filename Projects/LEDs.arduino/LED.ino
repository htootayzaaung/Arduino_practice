void toggleLed(int pin)
{
  digitalWrite(pin, !(digitalRead(pin)));
}
