#include <iostream>
#include <fstream>
using namespace std;

void main() {
	unsigned short man[5];
	float area[5];

	ifstream yyy;
	yyy.open("eed.bin", ios::binary | ios::in);
	// static memory일 때 &man 가능
	// dynamic memory에서는 &없이 man만 사용해야함
	yyy.read((char*)&man, 10);
	yyy.read((char*)area, 20);

	for (int i = 0; i < 5; i++) {
		cout << man[i] << " " << area[i] << endl;
	}
	yyy.close();
}
