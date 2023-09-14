void cuby(float x,float y,float d){
  fill(255,0,0);//빨간색
  ellipse(x-2*d,y+4*d,2*d,4*d);//왼다리 
  ellipse(x+2*d,y+4*d,2*d,4*d);//오른다리
  fill(255,192,203);//분홍색
  arc(x-4*d,y-d,4*d,4*d,PI/2,PI);//왼쪽팔
  arc(x+4*d,y+2*d,4*d,4*d,3*PI/2,2*PI);//오른쪽팔
  line(x-6*d,y-d,x-3*d,y-d);//왼쪽팔
  line(x+2*d,y+d*2,x+6*d,y+2*d);//오른쪽팔
  circle(x,y,d*8);//본체
  fill(0,0,0);//검은색
  ellipse(x-d,y-d*2,d,2*d);//왼쪽눈
  ellipse(x+d,y-d*2, d,2*d);//오른쪽눈
  fill(255,255,255);//흰색
  ellipse(x-d,y-d*2.5,d*0.4,d);//왼쪽눈알
  ellipse(x+d,y-d*2.5,d*0.4,d);//오른쪽눈알
  fill(255,51,153);//진한 분홍
  ellipse(x-2*d,y-d,d,0.4*d);//왼쪽홍조
  ellipse(x+2*d,y-d,d,0.4*d);//오른쪽홍조
  line(x-d,y,x+d,y);//입
  line(x-d,y,x,y+d);//입
  line(x+d,y,x,y+d);//입
}
