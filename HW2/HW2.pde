int showText1=0;
int showText2=0;
float [] x,y,d,vx,vy;

void setup() {
  size(1000,600);
  x = new float[12]; y = new float[12]; d = new float[12];
  vx = new float[12]; vy = new float[12];
  for(int i = 0; i < 10; i++) {
    x[i] = random(width); y[i] = 0; d[i] = random(1,3); vy[i] = random(5,10);
  }
  x[10] = random(width); y[10] = 550; d[10] = 5;
  x[11] = random(width); y[11] = 550; d[11] = 0.07;
}

void draw() {
  background(0, 255, 255);
  for(int i = 0; i < 10; i++) {
    y[i] += vy[i];
    if(y[i] > height) {
     x[i] = random(width); y[i] = 0; d[i] = random(1,3);
   }
    pizza(x[i], y[i], d[i]);
  }
  if(keyPressed) {
    if(key == 'a') x[10] -= 10;
    else if(key == 'd') x[10] += 10;
  }
  if(keyPressed) {
    if(keyCode == LEFT) x[11] -= 10;
    else if(keyCode == RIGHT) x[11] += 10;
  }
  for(int i = 10; i < 12; i++) {
    if(x[i] < 0) x[i] = width;
    if(x[i] > width) x[i] = 0;
  }
  cuby(x[10], y[10], d[10]);
  fish(x[11], y[11], d[11]);
  fill(0);
  textSize(24);
  if (showText1>0) {
    text("cuby"+"die"+showText1+"time", 200, 100);    
  }
  if (showText2>0) {
    text("shrak"+"die"+showText2+"time", 600, 100);    
  }
  if(frameCount%3==0){   
   collide1();
   collide2();
 }
}

void collide1() {
  for (int i = 0; i < 10; i++) {
    if ((x[10] - 15< x[i] && x[i] < x[10] + 15) && (y[10] -15< y[i] && y[i] < y[10] + 15)) {
      showText1++; 
    }
  }
}
void collide2() {
  for (int i = 0; i < 10; i++) {
    if ((x[11] - 15< x[i] && x[i] < x[11] + 15) && (y[11] -15< y[i] && y[i] < y[11] + 15)) {
      showText2++;
    }
  }
}
