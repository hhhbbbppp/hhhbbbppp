#include <iostream>
using namespace std;

void main() {
	// float, double array 추가해서 확인
	int sum[5];
	short root[5];
	float fff[5];
	double ddd[5];
	// int:4byte, short:2byte
	// float:4byte, double:8byte
	// sum을 출력하면 sum array의 첫번째의 주소가 나옴
	cout << hex << "sum 0x" << sum << endl;
	cout << "root 0x" << root << endl;
	cout << "float 0x" << fff << endl;
	cout << "double 0x" << ddd << endl;

	// 변수형의 크기만큼 주소가 증가함을 확인
	for (int i = 0; i < 5; i++) {
		cout << "0x" << sum + i <<
			" 0x" << root + i<<
			" 0x" << fff + i<<
			" 0x" << ddd + i<< endl;
	}
}
