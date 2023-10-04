#include <iostream>
#include <fstream>
using namespace std;

void main() {
	unsigned short man[] = {
		50230, 10030, 6005, 18070, 9004 };
	float area[5];

	area[0] = 220000.0;
	area[1] = 100100.0;
	area[2] = 90232.0;
	area[3] = 31111.0;
	area[4] = 150105.0;

	ofstream khu;
	khu.open("eed.bin", ios::binary | ios::out);
	khu.write((char*)man, 10); // sizeof(short) * 5 = 10
	// man을 쓰면 제일 앞 주소로 자동할당, &man을 써도 무방
	khu.write((char*)&area, 20); // sizeof((area)) = 20
	khu.close();

	cout << man[3] << endl;
}
