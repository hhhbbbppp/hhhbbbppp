pizza[] aaa; ppuka bbb; smile ccc;
float x, y, d;

void setup() {
  size(1000, 600);
  aaa = new pizza[10];
  for (int i = 0; i < 10; i++) {
    x = random(width); y = 0; d = random(1, 3);
    aaa[i] = new pizza(x, y, d);
  }
  bbb = new ppuka(random(width), 550, 2);
  ccc = new smile(random(width), 550, 4);
}

void draw() {
  background(0, 255, 255);
  for (int i = 0; i < 10; i++) {
    aaa[i].fall(); aaa[i].falling();
    if (frameCount%3==0) {
      bbb.collide(aaa[i]); ccc.collide(aaa[i]);
    }
  }
  if (keyPressed) {
    if (key == 'a')  bbb.move(-10);
    else if (key == 'd') bbb.move(10);
    else if (keyCode == LEFT) ccc.move(-10);
    else if (keyCode == RIGHT) ccc.move(10);
  }
  bbb.moving(); ccc.moving();
  fill(0); textSize(24);
  if (bbb.showText>0 || ccc.showText>0) {
    text("ppuka "+"die "+bbb.showText+"time", 200, 100);
    text("smile "+"die "+ccc.showText+"time", 600, 100);
  }
}
