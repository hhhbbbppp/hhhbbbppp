class smile {
  smile() {
    x = 0; y = 0; d = 1.0; showText = 0;
  }
  smile(float p, float q, float r) {
    x = p; y = q; d = r; showText = 0;
  }
  float x, y, d; int showText;
  void move(float dx) {
    x += dx; if (x < 0) x = width; if (x > width) x = 0;
  }
  void collide(pizza p) {
    if ((x - 15< p.x && p.x < x + 15) && (y -15< p.y && p.y < y + 15)) showText++;
  }
  void moving() {
    fill(255, 214, 56);
    stroke(255, 214, 56);
    circle(x, y, 10*d);
    fill(177, 139, 39);
    stroke(177, 139, 39);
    rect(x-5*d, y, 10*d, 4*d);
    ellipse(x, y+4*d, 10*d, 4*d);
    fill(255, 214, 56);
    stroke(255, 214, 56);
    ellipse(x, y, 10*d, 6*d);

    fill(177, 139, 39);
    stroke(177, 139, 39);
    arc(x-2*d, y-d, 2*d, 4*d, PI, 2* PI);
    arc(x+2*d, y-d, 2*d, 4*d, PI, 2* PI);
    fill(255);
    stroke(255);
    circle(x-2*d, y-d, 2*d);
    circle(x+2*d, y-d, 2*d);
    fill(0);
    stroke(0);
    circle(x-2*d, y-d, d);
    circle(x+2*d, y-d, d);
    fill(255, 214, 56);
    stroke(255, 214, 56);
    ellipse(x-2*d, y, 2*d, d);
    ellipse(x+2*d, y, 2*d, d);

    fill(177, 139, 39);
    stroke(177, 139, 39);
    arc(x, y, 6*d, 2*d, 0, PI);
    fill(255, 214, 56);
    stroke(255, 214, 56);
    ellipse(x, y, 6*d, d);
    stroke(70, 54, 15);
    strokeWeight(d);
    arc(x, y, 6*d, d, 0, PI);
    fill(205, 45, 103);
    stroke(205, 45, 103);
    strokeWeight(1);
    circle(x, y-d/2, d);
    circle(x+3*d, y, 2*d);
    circle(x-3*d, y, 2*d);
  }
}
