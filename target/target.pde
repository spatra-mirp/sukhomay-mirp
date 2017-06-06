int displayWidth = 1000;
int displayHeight = 1000;
int radius= 5;
void setup (){
   size(displayWidth, displayHeight);
}

void draw()
{
    background(255);
    if(mousePressed)
     drawTarget(500, 500);
     delay(200);
}