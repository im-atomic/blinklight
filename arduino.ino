int x = 500;

void setup()
{
    pinMode(3, OUTPUT);
}

void loop()
{
    digitalWrite(3, HIGH);
    delay(x);
    digitalWrite(3, LOW);
    delay(x);
}
