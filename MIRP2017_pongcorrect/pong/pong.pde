float acc = 0.1;
float restitutionCoeff = 1;
void setup() {
  size(displayWidth, displayHeight);
  resetGame();
  textFont(createFont("Arial Bold", 50));
  ballX=displayWidth/2;
  ballY=displayHeight/2;
  ballVx = BALL_VELOCITY;
  ballVy = 0;
}

void draw() {
  drawGameScreen();
}

void drawGameScreen() {
  background(bgColor);
  updateBallVelocity();
  resolvecollisions();
  updateBallPosition();
  drawBall();
  drawPaddles();
  updatePaddlePositions();
  detectCollision();
  leftLose();
  rightLose();
  text(leftScore,100,200);
  text(rightScore,300,200);
  
 // Draw background
  // Update Ball Velocity and Resolve Collisions
  // Update Ball and Paddle Positions
  // Draw Ball and Paddles
  // Display Scores
}

void drawBall() {
  fill(ballColor);
  ellipse(ballX, ballY, 2*ballRadius, 2*ballRadius);
  println(ballX, ballY);
  // Display Ball in correct position
}

void drawPaddles() {
  fill(paddleColor);
  rectMode(CENTER);
  rect(0,leftPaddle,paddleWidth,paddleLength,30); 
  fill(paddleColor);
  rectMode(CENTER);
  rect(displayWidth,rightPaddle,paddleWidth,paddleLength,30);
  // Display Left and Right paddles in correct position
}

void resetGame(){
  // Reset Ball and Paddle Positions
  // Reset Ball Velocity
}

void displayScores() {
  // Display Left and Right player Scores
}