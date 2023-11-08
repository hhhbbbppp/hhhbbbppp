class character{
  character() {
    x = 0; y = 0; d = 1.0; vy = random(5, 10); showText = 0;
  }
  character(float p, float q, float r) {
    x = p; y = q; d = r; vy = random(5, 10); showText = 0;
  }
  float x, y, d, vy;  int showText;
  void fall() {  
    y += vy;
    if(y > height) {
      x = random(width); y = 0; d = random(1,3);
    }
  }
  void move(float dx) {
    x += dx; if (x < 0) x = width; if (x > width) x = 0;
  }
  void collide(pizza p) {
    if ((x - 15< p.x && p.x < x + 15) && (y -15< p.y && p.y < y + 15)) showText++;
  }
}
