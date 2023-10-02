#include <iostream>
using namespace std;

void main() {
	int i;
	short *sa;

	cout << "i의 주소 = 0x" << & i << endl;
	cout << "sa의 주소 = 0x" << & sa << endl;
	i = 0x12345678;
	cout << "i = 0x" << hex << i << endl;
	
	sa = (short *)&i;
	cout << "sa[0]의 주소 = 0x" << sa << endl; // i의 주소로 바뀜
	cout << "sa[1]의 주소 = 0x" << sa + 1 << endl;
	*sa = 0xabcd; // sa[0] = 0xabcd;
	*(sa + 1) = 0x9876; // sa[1] = 0x9876;

	cout << "i = 0x" << hex << i << endl;
	cout << "sa[0] = 0x" << hex << sa[0] << endl;
	cout << "sa[1] = 0x" << hex << sa[1] << endl;
}
