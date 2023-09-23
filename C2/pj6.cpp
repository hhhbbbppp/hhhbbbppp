#include <iostream>
using namespace std;

int main() {
	short a = 0x23a, b = 0x6b0, d = 0xf001;
	int c;

	c = a << 16 | b;
	cout << hex << a << " " << b << endl;
	cout << c << endl << endl;

	// short형 d의 첫 bit가 1이므로 d는 음수
	// int형 d로 바꾼 후 2^16만큼 더 해줘야 함
	c = a << 16 | (int)d + 0x10000;
	cout << hex << a << " " << d << endl;
	cout << c << dec << " " << d << endl;

	return 100;
}
