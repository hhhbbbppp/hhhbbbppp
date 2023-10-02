#include <iostream>
using namespace std;

void main() {
	int sum[10], N;
	float root[10];

	for (int i = 0; i < 10; i++) {
		N = i + 1;
		sum[i] = N * (N + 1) / 2;
		root[i] = sqrt((float)N);
	}
	// 다른 위치의 값을 바꾸어 보아라.
	sum[9] = 543; // 10번째 sum값 바꿈
	root[2] = 1.234; // 3번째 root값 바꿈

	for (int i = 0; i < 10; i++) {
		cout << sum[i] << " " << root[i] << endl;
	}
}
