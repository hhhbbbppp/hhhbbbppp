#include <iostream>
using namespace std;

void main() {
	int sum[10], N, * xxx;

	for (int i = 0; i < 10; i++) {
		N = i + 1;
		sum[i] = N * (N + 1) / 2;
	}
	xxx = sum + 6;
	xxx[-1] = 999; // sum[5] = 999;

	// xxx의 주소
	// xxx의 주소는 sum[6]의 주소와 같음
	cout << hex << "0x" << xxx << endl;
	cout << hex << "0x" << xxx - 1 << endl;

	// sum의 10개 주소와 sum[i] 값
	for (int i = 0; i < 10; i++) {
		cout << "0x" << sum + i << 
			dec << " " << sum[i] << endl;
	}
}
