#include <iostream>
using namespace std;

int main() {
	// 연습:6개가 아니고, 100개면?
	int x[100];
	float y[100];

	for (int i = 0; i < 100; i++) {
		x[i] = i * 10;
		y[i] = sqrt(x[i]);
		cout << y[i] << " ";
	}
	cout << endl;
}
