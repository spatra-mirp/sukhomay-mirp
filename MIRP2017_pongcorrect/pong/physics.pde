void updateBallVelocity() {
  ballVx += acc;
  // Detect Ball collisions with walls or paddles
  // If collide with paddle, or top/bottom wall, then bounce off
  // If collides with left wall, right player gains one point
  // If collides with right wall, left player gains one point
}

void updateBallPosition() {
  ballX += ballVx;
  ballY += ballVy;
}
void resolvecollisions() {
  if (ballY > displayHeight-ballRadius){
    ballY = displayHeight-ballRadius;
    ballVy *= -restitutionCoeff;
  }
  if (ballY<0){
    ballY = 0;
    ballVy *= -restitutionCoeff;
  }
  if (ballX > displayWidth){
    ballX = displayWidth;
    ballVx *= -restitutionCoeff;
  }
  if (ballX < 0){
    ballX = 0;
    ballVx *= -restitutionCoeff;
  }
}
void updatePaddlePositions() {
  if (left_up == true)
     leftPaddle=leftPaddle-1;
  if (left_down == true)
     leftPaddle=leftPaddle+1;
   if (right_up == true)
      rightPaddle=rightPaddle-1;
   if (right_down == true)
      rightPaddle=rightPaddle+1;
    if (leftPaddle < displayHeight/6)
       leftPaddle=displayHeight/6;
    if (leftPaddle > displayHeight-paddleLength/2)
       leftPaddle=displayHeight-paddleLength/2;
    if (rightPaddle < displayHeight/6)
       rightPaddle=displayHeight/6;
    if (rightPaddle > displayHeight-paddleLength/2)
       rightPaddle=displayHeight-paddleLength/2;
    
  // Based on the keys pressedd, move the paddles (update Y position)
  // Make sure the paddles don't leave the screen
}
void detectCollision(){
    if(ballX>displayWidth-(paddleWidth+ballRadius)&&((ballY>=(rightPaddle-paddleLength/2))&&(ballY<=rightPaddle+paddleLength/2))) {
       ballX=displayWidth-(paddleWidth+ballRadius);
        ballVx=-ballVx;
         ballVy=BALL_VELOCITY*(ballY-rightPaddle)/buffer;
         
   }
     if((ballX<ballRadius+paddleWidth)&&(ballY>=(leftPaddle-paddleLength/2))&&(ballY<=leftPaddle+paddleLength/2)) {
         ballX=ballRadius+paddleWidth;
          ballVx=-ballVx;
          ballVy=BALL_VELOCITY*(ballY-leftPaddle)/buffer;
   }
 }