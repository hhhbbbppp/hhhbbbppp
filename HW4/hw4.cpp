#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const float PI = 3.141592;
int main() {
   float  S,C,t, f0, T,dt; // A = magnitude, f0 = frequency
   C = 100;
   S = 100;
   f0 = 110;
   T = (1 / f0) * 10; // 10바퀴 그림
   dt = (1 / f0) / 200; // sampling term 을 줄읾으로서 오차를 줄임
   ofstream xxx;
   xxx.open("exptriangular.txt");
   if (!xxx) {
      cout << "cannot find file"; return 666;
   }
   for (t = 0; t < T; t += dt) {
      xxx << t << "          " <<  C*exp(-f0*t)*cos(2 * PI * f0 * t) << "          " << S*exp(-f0 * t)*sin(2 * PI * f0 * t) << endl;
   }
   xxx.close();


   return 123;
}
