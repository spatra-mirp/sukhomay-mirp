void keyPressed() {
  if (key == LEFT_UP)       left_up = true;
  if (key == LEFT_DOWN)     left_down = true;
  if (key == RIGHT_UP)      right_up = true;
  if (key == RIGHT_DOWN)    right_down = true;
  if (key == RESET)         gameState = 0;
  if (key == PAUSE)         pause = true;
  if (key == START)         gameState = 1;
}

void keyReleased() {
  if (key == LEFT_UP)       left_up = false;
  if (key == LEFT_DOWN)     left_down = false;
  if (key == RIGHT_UP)      right_up = false;
  if (key == RIGHT_DOWN)    right_down = false;
  if (key == RESET)         reset = false;
  if (key == PAUSE)         pause = false;
  //if (key == START)         start = false;
  }
void startscreen() {
  background(bgColor);
  textSize(70);
  text("PONG", 150, 150);
  textSize(20);
  text("To Start Screen Press 's'", 150, 200);
  if (gameState == 1)
      drawGameScreen(); 
    
  
   
 }

  
  
  
  
  
  