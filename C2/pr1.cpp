#include <iostream>
using namespace std;
const int INTER = 1, SEOUL = 2, KWANG = 3;
const int WOE = 1, CHE = 2, JUN = 3, GONG = 4, KUK = 5;
const int SW = 1, EE = 2, CE = 3, ME = 5;

void main() {
	short c = 0;
	c = INTER << 6; // 국제캠퍼스
	c |= GONG << 3; // 공대 
	c |= ME; // 기계과

	cout << oct << c << endl;
}
