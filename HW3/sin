	#include <iostream>
	using namespace std;
	void main() {
		float A, B, a, b, N, t, dt, num, anal;
		// differentiation of sin
		cout << " A B ? = ";
		cin >> A >> B;
		cout << " t dt ? = ";
		cin >> t >> dt;
		anal = A * B * cos(B * t);
		num = A * (sin(B * (t + dt)) - sin(B * t)) / dt;
		cout << " num " << num << " anal " << anal << endl;
		cout << " error = " << ((num - anal) / anal) * 100 << "%\n";
		// integration of sin
		cout << " a b N ? = ";
		cin >> a >> b >> N;
		anal = (-A / B) * (cos(B * b)-cos(B * a));
		dt = (b - a) / N;
		num = 0;
		for (int i = 0; i < N; i++) {
			num += A * sin(B * (a + dt * i)) * dt;
		}
		cout << " num " << num << " anal " << anal << endl;
		cout << " error = " << ((num - anal / anal)) * 100 << "%\n";
	}
