void rightLose() {
  if (ballX > displayWidth){
    leftScore++;
  }
}

void leftLose() {
  if (ballX <= 0){
    rightScore++;
  }
}