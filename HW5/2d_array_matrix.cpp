#include <iostream>
using namespace std;

void main() {
	// A(N*K), B(K*M), C(N*M)
	int N = 2, K = 3, M = 2;
	float** A, ** B, ** C;
	A = new float* [N]; 
	B = new float* [K]; 
	C = new float* [N];
	for (int n = 0; n < N; n++) A[n] = new float[K]; // 2x3
	for (int k = 0; k < K; k++) B[k] = new float[M]; // 3x2
	for (int n = 0; n < N; n++) C[n] = new float[M]; // 2x2
	A[0][0] = 1; A[0][1] = 2; A[0][2] = 3;
	A[1][0] = 3; A[1][1] = 2; A[1][2] = 1;
	B[0][0] = 1; B[0][1] = 1;
	B[1][0] = 3; B[1][1] = 4;
	B[2][0] = 4; B[2][1] = 5;
	// C = A * B
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			C[n][m] = 0; // C[n][m] 초기화
			for (int k = 0; k < K; k++) {
				C[n][m] += A[n][k] * B[k][m]; // k번째끼리 계산한 거 합
			}
		}
	}
	// 결과 출력
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cout << C[n][m] << " ";
		}
		cout << endl;
	}
	// new의 역순으로 delete
	for (int n = 0; n < N; n++) {
		delete[] A[n]; delete[] C[n];
	}
	for (int k = 0; k < K; k++) delete[] B[k];
	delete[] A;
	delete[] B;
	delete[] C;
}
