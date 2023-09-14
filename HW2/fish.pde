void fish(float x, float y, float k) { // x,y는 중심 좌표, k는 캐릭터의 크기를 다룸
  fin(x,y,k);
  body(x,y,k);
  eyemouth(x,y,k);
  tail(x,y,k);
}

void body(float x, float y, float k) {
  stroke(0, 100, 255);
  fill(0, 100, 255);
  ellipse(x,y,807*k,333*k);
  fill(255);
  circle(x+250*k,y-100*k,70*k);
  fill(0);
  stroke(0,0,0);
  
  circle(x+260*k,y-100*k,40*k);
  strokeWeight(10*k);
  noFill();
  arc(x+50*k,y,50*k,50*k,-PI/2,PI/2);
  arc(x+80*k,y,50*k,50*k,-PI/2,PI/2);
  arc(x+110*k,y,50*k,50*k,-PI/2,PI/2);
  strokeWeight(1);
}

void eyemouth(float x, float y, float k){
    stroke(0, 100, 255);
  fill(200,0,0);
  triangle(x+200*k, y+50*k, x+250*k,y+90*k, x+300*k, y+30*k);
  fill(125);
  circle(x+370*k,y-20*k,20*k);
  
}

void fin(float x, float y, float k){
  fill(0, 100, 255);
  beginShape();
  vertex(x,y);
  vertex(x + 150*k, y - 200*k);
  vertex(x, y - 400*k);
  vertex(x + 75*k, y - 200*k);
  endShape();
  beginShape();
  vertex(x,y);
  vertex(x + 150*k, y + 200*k);
  vertex(x, y + 400*k);
  vertex(x + 75*k, y + 200*k);
  endShape();
  
}

void tail(float x, float y, float k){
  fill(0,100,255);
  triangle(x-200*k,y,x-500*k,y-200*k,x-500*k,y+200*k);
}
