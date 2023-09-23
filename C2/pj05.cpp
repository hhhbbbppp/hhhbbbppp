#include <iostream>
using namespace std;

int main() {
	// a, b, d에 다른 숫자 넣고 확인해보기
	unsigned short a = 0xab23, b = 0x6ef, d = 0xf9;
	unsigned int c;

	c = a << 16 | b;
	cout << hex << "0x" << a << " 0x" << b << endl;
	cout << "0x" << c << endl << endl;

	c = a << 16 | d;
	cout << hex << "0x" << a << " 0x" << d << endl;
	cout << "0x" << c << dec << " " << d << endl;

	return 100;
}
