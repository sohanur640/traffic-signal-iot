
// int buzzer = 7;
int red = 8;
int yellow = 9;
int green = 10;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  // pinMode(buzzer, OUTPUT);
}

void loop()
{
  // Red light + Buzzer ON
  digitalWrite(red, HIGH);
  // digitalWrite(buzzer, HIGH);
  delay(2000);

  digitalWrite(red, LOW);
  // digitalWrite(buzzer, LOW);

  // Green light
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);

  // Yellow light
  digitalWrite(yellow, HIGH);
  delay(1500);
  digitalWrite(yellow, LOW);
}
