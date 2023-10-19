#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int a;
	int b[5];
	float c[3];

	// out file
	ofstream aa;
	aa.open("mybin1.dat", ios::binary | ios::out);
	a = 1234;
	aa.write((char*)&a, sizeof(a));
	for (int i = 0; i < 5; i++) {
		b[i] = 1000 * (i + 1);
	}
	aa.write((char*)&b, sizeof(b));
	for (int i = 0; i < 3; i++) {
		c[i] = ((-0.5 + 0.5 * (i + 1)) * (-0.5 + 0.5 * (i + 1)));
	}
	aa.write((char*)&c, sizeof(c));
	aa.close();
}
