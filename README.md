int x = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);    
}

void loop() {
digitalWrite(3,HIGH);
delay(x);
digitalWrite(3,LOW);
delay (x);
}
