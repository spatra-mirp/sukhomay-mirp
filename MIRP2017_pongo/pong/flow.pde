void rightLose() {
  if (ballX > displayWidth){
    leftScore++;
  }
}

void leftLose() {
  if (ballX < ballRadius){
    rightScore++;
  }
}