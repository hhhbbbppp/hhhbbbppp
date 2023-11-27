#include <iostream>
#include <Windows.h>
#include <vector>
#include <fstream>
using namespace std;

// sprint 4
class qq {
public:
	// constructor
	qq() {}
	qq(int i, int o, int c) {
		NI = i; NO = o; capacity = c;
		loss = 0; full = 0;
	}

	// member variables
	int NI, NO, capacity;
	int loss; // Packet loss rate
	float full; // Queue fullness

	// member function
	void FIFO() {
		vector <int> q;

		int elapsedSeconds = 0, T = 1;
		int ni, no;
		int lost = 0;
		int overflow = 0;
		int underflow = 0;
		int NofPackets[120];
		int avg = 0;
		int max = 0;

		while (elapsedSeconds < 120) {
			Sleep(T * 10);
			elapsedSeconds += T;
			cout << "Elapsed time[sec] = " << elapsedSeconds << endl;

			ni = rand() % NI;
			if (capacity < q.size() + ni) {
				lost += q.size() + ni - capacity;
				ni = capacity - q.size();
				cout << "overflow, size = " << q.size() + ni << endl;
				overflow += 1;
			}
			for (int i = 0; i < ni; i++) {
				q.push_back(rand() % 20);
			}

			no = rand() % NO;
			for (int i = 0; i < no; i++) {
				if (q.size() != 0) {
					q.erase(q.begin());
				}
				else {
					cout << "underflow, size = " << q.size() << endl;
					underflow += 1;
					break;
				}
			}

			NofPackets[elapsedSeconds - 1] = q.size();
			cout << NofPackets[elapsedSeconds - 1] << endl;

			loss = lost / elapsedSeconds;
			avg += NofPackets[elapsedSeconds - 1];
			full = (avg / 120.0 / capacity) * 100;
		}
	}

	int getLoss() const {
		return loss;
	}

	float getFull() const {
		return full;
	}
};

void main() {
	qq qq1(35, 30, 100);
	qq1.FIFO();

	cout << qq1.getLoss() << endl;
	cout << qq1.getFull() << endl;
}
