#include <iostream>
using namespace std;

struct student {
	short age;
	int height;
	float weight;
	short bust;
};
// 다른 struct 만들기

struct boy {
	int yy;
	short mm;
	short dd;
};

void main() {
	student doug, young;
	boy choi, kim;

	doug.age = 15;
	doug.height = 160;
	doug.weight = 48.5;

	young.age = doug.age + 50;
	young.height = doug.height + 14;
	young.weight = doug.weight + 30;

	choi.yy = 1999;
	choi.mm = 10;
	choi.dd = 15;

	kim.yy = choi.yy + 1;
	kim.mm = choi.mm + 2;
	kim.dd = choi.dd + 12;

	cout << " " << sizeof(student) << endl;
	cout << " " << sizeof(boy) << endl;
	cout << " " << kim.yy << endl;
}
