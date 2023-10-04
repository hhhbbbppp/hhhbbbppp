#include <iostream>
using namespace std;

void main() {
	// A(N*K), B(K*M), C(N*M)
	int N = 2, K = 3, M = 2;
	float* A, * B, * C;
	A = new float[N * K]; // 2x3
	B = new float[K * M]; // 3x2
	C = new float[N * M]; // 2x2
	A[0] = 1; A[1] = 2; A[2] = 3;
	A[3] = 3; A[4] = 2; A[5] = 1;
	B[0] = 1; B[1] = 2;
	B[2] = 3; B[3] = 4;
	B[4] = 5; B[5] = 6;
	// C = A * B
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			C[n * M + m]=0; // C 초기화
			for (int k = 0; k < K; k++) {
				C[n * M + m] += A[n * K + k] * B[k * M + m];
			}
		}
	}
	// 결과 출력
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cout << C[n * M + m] << " ";
		}
		cout << endl;
	}
	// delete
	delete[] A;
	delete[] B;
	delete[] C;
}
