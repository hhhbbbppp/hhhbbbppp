#include <iostream>
using namespace std;
void main() {
	float A, B, a, b, N, t, dt, num, anal;
	// differentiation of cos
	cout << " A B ? = ";
	cin >> A >> B;
	cout << " t dt ? = ";
	cin >> t >> dt;
	anal = A * B * (-sin(B * t));
	num = A * (cos(B * (t + dt)) - cos(B * t)) / dt;
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << ((num - anal) / anal) * 100 << "%\n";
	// integration of cos
	cout << " a b N ? = ";
	cin >> a >> b >> N;
	anal = (A / B) * (sin(B * b) - sin(B * a));
	dt = (b - a) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += A * cos(B * (a + dt * i)) * dt;
	}
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << ((num - anal / anal)) * 100 << "%\n";
}
