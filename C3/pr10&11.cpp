#include <iostream>
using namespace std;

int main() {
	// static memory
	int data[10];
	cout << data << " " << &data << endl;

	// dynamic memory
	int* d1, * d2;
	cout << &d1 << endl;
	cout << &d2 << endl;

	d1 = new int[5];
	cout << d1 << " " << &d1 << endl; // 두 주소 다름

	for (int i = 0; i < 5; i++) {
		d1[i] = (i + 1) * 10;
	}
	d2 = d1 + 2 ;
	cout << d2 << " " << &d2 << endl;

	cout << d1 << " " << d2 - 2 << endl;

	// d2[-2] = d1[0], d2[0] = d1[2]
	cout << d2[0] << " " << d1[2] << endl;
	cout << d2[-2] << " " << d1[0] << endl;
}
