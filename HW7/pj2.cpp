#include <iostream>
#include <fstream>
using namespace std;

void a(int* aa) {
	aa[0] = 1234;
}

void b(int* bb) {
	for (int i = 0; i < 5; i++) {
		bb[i] = 1000 * (i + 1);
	}
}

void c(float* cc) {
	for (int i = 0; i < 3; i++) {
		cc[i] = ((-0.5 + 0.5 * (i + 1)) * (-0.5 + 0.5 * (i + 1)));
	}
}

int main() {
	int aaa[1];
	int bbb[5];
	float ccc[3];

	a(aaa); 
	b(bbb); 
	c(ccc);

	// out file
	ofstream aa;
	aa.open("mybin2.dat", ios::binary | ios::out);
	aa.write((char*)&aaa, sizeof(aaa));
	aa.write((char*)&bbb, sizeof(bbb));
	aa.write((char*)&ccc, sizeof(ccc));
	aa.close();
}
