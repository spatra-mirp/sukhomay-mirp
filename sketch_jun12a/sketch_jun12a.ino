int RXLED = 17;
void setup() {
  // put your setup code here, to run once:
pinMode(RXLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RXLED, HIGH);
TXLED0;
delay(100);
digitalWrite(RXLED, LOW);
TXLED1;
delay(100);
digitalWrite(RXLED, HIGH);
TXLED0;
delay(1000);
}
