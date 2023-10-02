#include <iostream>
using namespace std;

void main() {
	int *sum, *mu10, N; // * = pointer
	float *root;
	sum = new int[10]; // new로 선언
	root = new float[10];
	mu10 = new int[10];

	for (int i = 0; i < 10; i++) {
		N = i + 1;
		sum[i] = N * (N + 1) / 2;
		root[i] = sqrt((float)N);
		mu10[i] = N * 10;
	}
	*(sum + 3) = 1122;
	*(root + 5) = 5.555;
	*(mu10 + 7) = 999;

	for (int i = 0; i < 10; i++) {
		cout << sum[i] << " " << root[i] << " " << mu10[i] << endl;
	}
	delete sum; // delete로 반환
	delete root;
	delete mu10;
}
