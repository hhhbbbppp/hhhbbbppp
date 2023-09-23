#include <iostream>
using namespace std;

// 멤버 변수 int형 bust 추가
struct student {
	short age;
	int height;
	float weight;
	int bust;
};

void main() {
	student doug, young;

	doug.age = 15;
	doug.height = 160;
	doug.weight = 48.5;

	young.age = doug.age + 50;
	young.height = doug.height + 14;
	young.weight = doug.weight + 30;

	// sizeof(student) = 2+(2)+4+4+4 = 16
	cout << " " << sizeof(student) << endl;
	cout << " " << young.weight << endl;
}
