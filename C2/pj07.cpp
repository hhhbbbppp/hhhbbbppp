#include <iostream>
using namespace std;

// struct이름과 멤버 변수명을 바꾸어도 같은지 확인
struct stud {
	short ag;
	int hei;
	float wei;
};

void main() {
	stud doug, young;

	doug.ag = 15;
	doug.hei = 160;
	doug.wei = 48.5;

	young.ag = doug.ag + 50;
	young.hei = doug.hei + 14;
	young.wei = doug.wei + 30;

	cout << " " << sizeof(stud) << endl;
	cout << " " << young.wei << endl;
}
