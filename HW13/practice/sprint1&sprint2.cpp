#include <iostream>
#include <Windows.h> // Sleep()
#include <vector>
using namespace std;

int main() {
	// sleep(), rand() test
	int elapsedSeconds = 0, x, T = 3;
	cout << "RANDMAX " << RAND_MAX << endl;
	while (elapsedSeconds < 18) {
		Sleep(T * 1000); // milliseconds
		x = rand() % 100; // 0~99 random
		elapsedSeconds += T;
		cout << "Elapsed time[sec] = " << elapsedSeconds << " " << x << endl;
	}

	// vector test
	int NI = 7, NO = 15, ni, no;
	vector <int> q;
	ni = rand() % NI;
	for (int i = 0; i < ni; i++) {
		q.push_back(rand() % 20);
		cout << q[q.size() - 1] << " in " << q.size() << endl;
	}
	no = rand() % NO;
	for (int i = 0; i < no; i++) {
		int ii = q[0];
		if (q.size() != 0) {
			cout << ii << " out " << q.size() << endl;
			q.erase(q.begin());
		}
	}

	return 123;
}
