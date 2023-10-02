#include <iostream>
using namespace std;

int main() {
	int A[4];
	short* aa;

	cout << "aa 주소 0x" << &aa << endl;
	
	aa = (short*)A;

	for (int i = 0; i < 4; i++) {
		cout << "A[" << i << "]주소 0x" << hex << A + i << endl;
	}

	for (int i = 0; i < 8; i++) {
		cout << "aa[" << i << "]주소 0x" << aa + i << endl;
	}

	for (int i = 0; i < 8; i++) {
		aa[i] = i * 5;
	}

	for (int i = 0; i < 4; i++) {
		cout << "0x" << A[i] << endl; // litte-endian 표준
	}

	for (int i = 0; i < 8; i++) {
		cout << "0x" << aa[i] << endl;
	}
}
