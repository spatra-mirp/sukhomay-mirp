#include<Servo.h>
#include"TouchScreen.h"
#include<PID_v1.h> 

Servo ServoX, ServoY;
 int yServoPin = 2;
 int xServoPin = 3;

 


int XP = A0;
int YP = A1;
int XM = A2;
int YM = A3;
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 711);

double Input1;
double Output1;
double Setpoint1;
float Kp1 = 0.05;
float Ki1 = 0.02;
float Kd1 = 0.03;
double Input2;
double Output2;
double Setpoint2;
float Kp2 = 0.05;
float Ki2 = 0.02;
float Kd2 = 0.03;

PID PID1(&Input1, &Output1, &Setpoint1, Kp1, Ki1, Kd1, REVERSE);

PID PID2(&Input2, &Output2, &Setpoint2, Kp2, Ki2, Kd2, REVERSE);
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
ServoX.attach(xServoPin);
ServoY.attach(yServoPin);
Output1=90;
Output2=90;

PID1.SetMode(AUTOMATIC);
PID1.SetOutputLimits(70, 110);
PID1.SetSampleTime(40);


PID2.SetMode(AUTOMATIC);
PID2.SetOutputLimits(70, 110);
PID2.SetSampleTime(40);
}
void loop() {
  // put your main code here, to run repeatedly:
TSPoint p = ts.getPoint();
//TSPoint p = ts.pressureThreshhold();
if(p.z > 1){
Input1 = p.x;
Setpoint1 = 520;
PID1.Compute();
ServoX.write(Output1);
}

if(p.z>0){
Setpoint2 = 520;
Input2 = p.y;
 PID2.Compute();

  ServoY.write(Output2);
Serial.println(p.x);
Serial.println(p.y);
//Serial.println(Input1);
//Serial.println(Output1);
//Serial.println(Input2);
//Serial.println(Output2);
 
 delay(50);
}
 }
