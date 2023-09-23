#include <iostream>
using namespace std;

void main() {
	int ii;
	short jj;
	ii = -1234;
	jj = -1234;
	// int는 4bytes(32bits)이므로 16진수로 8자리
	cout << hex << " 0x" << ii << endl;
	// short는 2bytes(16bits)이므로 16진수로 4자리
	cout << hex << " 0x" << jj << endl;
}
