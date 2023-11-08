class ppuka extends character {
  ppuka(float p, float q, float r) {
    super(p, q, r);
  }
  void moving() {
    fill(0, 0, 0);
    stroke(0, 0, 0);
    ellipse(x, y, d*25, d*15);

    fill(255, 204, 153);
    stroke(255, 204, 153);
    ellipse(x, y, d*18, d*12);

    fill(0, 0, 0);
    stroke(0, 0, 0);
    circle(x-d*10, y-d*8, d*10);
    circle(x+d*10, y-d*8, d*10);

    stroke(0);
    strokeWeight(5);
    line(x-d*5, y-4*d, x-3*d, y-3*d);
    line(x+d*3, y-3*d, x+5*d, y-4*d);

    stroke(0);
    strokeWeight(5);
    line(x-d*7, y-d, x-3*d, y+d);
    line(x+d*7, y-d, x+3*d, y+d);

    arc(x, y+4*d, 3*d, 3*d, 0, PI);

    fill(255, 255, 0);
    stroke(255, 255, 0);
    circle(x-d*5, y+d*3, d);
    circle(x+d*5, y+d*3, d);
  }
}
