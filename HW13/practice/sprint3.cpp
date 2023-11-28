#include <iostream>
#include <Windows.h> // Sleep()
#include <vector> // vector
#include <fstream> // file
using namespace std;

void main() {
	// sprint 1
	int elapsedSeconds = 0, T = 1; // 1초
	// sprint 2
	int NI = 90, NO = 90, ni, no; // 패킷 최대 생성,제거 개수
	vector <int> q;
	// sprint 3-1
	int capacity = 100; // q 용량
	int lost = 0; // 손실된 패킷 수
	int overflow = 0;
	int underflow = 0;
	// sprint 3-2
	int NofPackets[120]; // 시간에 따른 패킷 수 저장할 array
	int avg = 0; // average
	int max = 0; // maximum

	while (elapsedSeconds < 120) { // 120초 = 2분
		Sleep(T * 10); // 1초마다 대기
		elapsedSeconds += T; // 1초씩 증가
		cout << "Elapsed time[sec] = " << elapsedSeconds << endl;

		// ni만큼 packet 넣기
		ni = rand() % NI;
		if (capacity < q.size() + ni) { // overflow
			lost += q.size() + ni - capacity; // lost
			ni = capacity - q.size();
			cout << "overflow, size = " << q.size() + ni << endl;
			overflow += 1; // overflow count
		}
		for (int i = 0; i < ni; i++) {
			q.push_back(rand() % 20);
		}

		// no만큼 packet 빼기
		no = rand() % NO;
		for (int i = 0; i < no; i++) {
			if (q.size() != 0) {
				q.erase(q.begin());
			}
			else { // underflow
				cout << "underflow, size = " << q.size() << endl;
				underflow += 1; // underflow count
				break;
			}
		}

		// q.size
		NofPackets[elapsedSeconds - 1] = q.size();
		cout << NofPackets[elapsedSeconds - 1] << endl;
	}

	// confirm overflow, underflow, lost
	cout << "overflow = " << overflow << endl;
	cout << "underflow = " << underflow << endl;
	cout << "lost packet = " << lost << endl;

	// check average, maximum
	for (int i = 0; i < 120; i++) {
		avg += NofPackets[i]; // q.size 계속해서 누적

		if (max < NofPackets[i]) { // max packet 측정
			max = NofPackets[i]; // 새로운 max 값 갱신
		}
	}
	avg /= 120; // average 구하기

	// confirm average, maximum
	cout << "average = " << avg << endl;
	cout << "maximum = " << max << endl;

	// text file
	ofstream out("data.txt");
	for (int i = 0; i < 120; i++) {
		out << NofPackets[i] << endl; // q.size out
	}
}
