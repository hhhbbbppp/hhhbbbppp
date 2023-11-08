class pizza extends character {
  pizza(float p, float q, float r) {
    super(p, q, r);
  }
  void falling() {
    fill(240,192,64);
    stroke(240,192,64);
    triangle(x-7*d,y-3*d,x+d,y+15*d,x+9*d,y-3*d);
    
    fill(150,75,0);
    stroke(150,75,0);
    quad(x-11*d,y-7*d,x-7*d,y-3*d,x+9*d,y-3*d,x+13*d,y-7*d);
  
    fill(150,75,0);
    stroke(150,75,0);
    arc(x+d,y-7*d,24*d,8*d,PI,2*PI);
    
    fill(240,192,64);
    stroke(240,192,64);
    arc(x+d,y-3*d,16*d,6*d,PI,2*PI);
    
    fill(240,192,64);
    line(x-7*d,y-3*d,x+9*d,y-3*d);
    
    fill(255,0,0);
    stroke(255,0,0);
    circle(x-3*d,y-3*d,3*d);
    circle(x+3*d,y+d,3*d);
    circle(x+d,y+9*d,3*d);
    circle(x-d,y+3*d,3*d);
    circle(x+5*d,y-3*d,3*d);
  }
}
