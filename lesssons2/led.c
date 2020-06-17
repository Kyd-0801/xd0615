int a=0;
int j=0;
void setup()
{
  for(a=0;a<12;a++)
  {
    pinMode(a, OUTPUT);
  }
}

void loop()
{
  for(j=0;j<12;j++)
  {
    digitalWrite(j, HIGH);
    delay(1300); // Wait for 1300 millisecond(s)
    digitalWrite(j, LOW);
    delay(1300); // Wait for 1300 millisecond(s)
  }
}