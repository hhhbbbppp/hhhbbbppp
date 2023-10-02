#include <iostream>
using namespace std;

int main() {
	//static
	int data[2][4] = { {1,2,3,4},{5,6,7,8} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "&data[" << i << "]" << "[" << j<< "] = 0x" << hex << &data[i][j] << endl;
		}
	}
	cout << endl;


	//dynamic
	int** dat2;
	dat2 = new int* [2];
	// dat2에는 dat2[0]의 주소가 저장됨

	cout << "&dat2 = 0x" << &dat2 << endl
    << "dat2 = 0x" << dat2 << endl << endl;

	for (int i = 0; i < 2; i++) {
		dat2[i] = new int[4];
	}
	// dat2[0]에는 dat2[0][0]의 주소가 저장됨
	// dat2[1]에는 dat2[1][0]의 주소가 저장됨

	for (int i = 0; i < 2; i++) {
		cout << "&dat2[" << i << "] = 0x" << &dat2[i] << endl;
	}

	for (int i = 0; i < 2; i++) {
		cout << "dat2[" << i << "] = 0x" << dat2[i] << endl;
	}
	cout << endl;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "&dat2[" << i << "]" << "[" << j << "] = 0x" << &dat2[i][j] << endl;
		}
	}
}
