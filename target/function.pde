void drawTarget(float X, float Y){
for(int i=6;i>0;i--){
 if (i%2==0){
   fill(0);
   ellipse(mouseX,mouseY,radius*i,radius*i);
 }else
    fill(255);
    ellipse(mouseX,mouseY,radius*i,radius*i);
 }
}