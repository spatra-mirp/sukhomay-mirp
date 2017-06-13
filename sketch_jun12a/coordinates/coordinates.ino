int analogValue;
int analogValue1;
int Yp = A0;
int Xp = A1;
int Yn = A2;
int Xn = A3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  pinMode(Yp, INPUT);
  
  pinMode(Yn, INPUT);
  digitalWrite(Yn, LOW);
  pinMode(Xp, OUTPUT);
  digitalWrite(Xp, HIGH);
  pinMode(Xn, OUTPUT);
  digitalWrite(Xn, LOW);
 // digitalWrite(Xp, HIGH);
 // pinMode(Xn, OUTPUT);
 // digitalWrite(Xn, LOW);
  analogValue = analogRead(Yp);
  Serial.print("X = ");
   Serial.print(analogValue);
  // put your main code here, to run repeatedly:
 pinMode(Yp, OUTPUT);
  digitalWrite(Yp, HIGH);
  pinMode(Yn, OUTPUT);
  digitalWrite(Yn, LOW);
  pinMode(Xp, INPUT);
  
  pinMode(Xn, INPUT);
  digitalWrite(Xn, LOW);
 // digitalWrite(Xp, HIGH);
 // pinMode(Xn, OUTPUT);
 // digitalWrite(Xn, LOW);
  analogValue1 = analogRead(Xp);
  Serial.print("  Y = ");
   Serial.println(analogValue1);

}
