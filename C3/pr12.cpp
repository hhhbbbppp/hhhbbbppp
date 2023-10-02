#include <iostream>
using namespace std;

int main() {
	int* data;
	data = new int[3];
	for (int i = 0; i < 3; i++) {
		data[i] = i + 10;
	}
	for (int i = 0; i < 3; i++) {
		cout << "0x" << data + i << " " << data[i] << endl;
	}
	delete data;

	data = new int[5];
	for (int i = 0; i < 5; i++) {
		data[i] = (i + 10) * 100;
	}
	for (int i = 0; i < 5; i++) {
		cout << "0x" << data + i << " " << data[i] << endl;
	}
	return 123;
}
