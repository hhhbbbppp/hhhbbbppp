#include <iostream>
using namespace std;

int main() {
	int a = 5, b = 6, c = 2;
	// 3:3:2 비트로 넣기
	int d = (a << 6) | (b << 3) | c;
	cout << oct << a << " " << b << " " << c << endl;
	cout << d << endl;

	a = b = c = 0;
	// octal 111 000 000
	a = (d & 0700) >> 6;
	// octal 111 000
	b = (d & 070) >> 3;
	// 11
	c = (d & 3);
	cout << a << " " << b << " " << c << endl;

	return 0;
}
