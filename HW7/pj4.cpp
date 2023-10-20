#include <fstream>
#include <iostream>
using namespace std;


void a(int* aa) {
    *aa = 1234;
}

void b(int* bb) {
    for (int i = 1000; i <= 5000; i += 1000) {
        int a = (i - 1000) / 1000;
        *(bb + a) = i * 5;
    }
}


void c(float* cc) {
    for (int a = 0; a < 3; a++) {
        float f = -0.5 + 0.5 * a;
        *(cc + a) = f * f;
    }
}


int All(char* file) {
    ofstream aa;
    char* A;
    A= new char[36];

    a((int*)A);
    b((int*)A + 1);
    c((float*)A + 6);

    // 값 쓰기
    aa.write((char*)A, 36);

    // 파일 닫기
    aa.close();
    return 0;
}

int main() {
    All((char*)"mybin3.dat");
    return 0;
}
