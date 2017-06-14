float previousPosition = 0.0, currentPosition;
float angleError = 0.0;
int dt = 1;
void solution (){
  currentPosition = desiredX-ballX;
  float Kp = 0.0004;
 
 // float angleValue = Kp*currentPosition;
  //gotoAngle(angleValue);
  float Kd = 0.007;
  float angleValue1 =  Kp*currentPosition + Kd*(currentPosition-previousPosition)/dt;
  previousPosition = currentPosition;
  gotoAngle(angleValue1);
  delay(dt);
}