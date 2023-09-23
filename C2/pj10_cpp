#include <iostream>
using namespace std;
struct triangle {
    float a, b, c, d, e;
    triangle(float aa, float bb) :a(aa), b(bb) {
        c = sqrt(a * a + b * b); // 빗변 길이
        d = a + b + c; // 세 변 길이의 합
        e = 0.5 * a * b; // 면적
    }
};
void main() {
    float l1, l2;
    cout << "삼각형의 두변의 길이를 각각 입력하시오" << endl;
    cin >> l1 >> l2;
    triangle aaa(l1, l2);
    cout << "빗변의 길이는 " << aaa.c << endl;
    cout << "세변의 합은 " << aaa.d << endl;
    cout << "삼각형의 넓이는 " << aaa.e << endl;
    //float에는 4바이트가 할당되므로 a,b,c,d,e 5개의 변수에 총 20 바이트가 할당됨
    cout << "struct의 크기는 " << sizeof(triangle);
}
