#include <iostream>
using namespace std;

void main() {
	// N=15까지 해보기
	int sum[15], N;
	float root[15];

	for (int i = 0; i < 15; i++) {
		N = i + 1;
		sum[i] = N * (N + 1) / 2;
		root[i] = sqrt((float)N);
	}
	*(sum + 12) = 1122; // sum[12] = 1122;
	*(root + 10) = 5.555; // root[10] = 5.555;

	for (int i = 0; i < 15; i++) {
		cout << sum[i] << " " << root[i] << endl;
	}
}
