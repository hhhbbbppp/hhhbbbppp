#include <iostream>
#include <Windows.h> // Sleep()
#include <vector> // vector
#include <fstream> // file
using namespace std;

class qq {
public:
	// constructor
	qq(int i, int o, int c) {
		NI = i; // ni의 max
		NO = o; // no의 max
		capacity = c; // q 용량
		loss = 0; full = 0; // 초기화
		max = 0; avg = 0; lost = 0; // 초기화
	}

	// member variables
	int NI, NO, capacity;
	float loss; // Packet loss rate
	float full; // Queue fullness
	int max; // maximum
	int avg; // average
	int lost; // 손실된 패킷 수

	// member function
	void FIFO() {
		vector <int> q;

		float elapsedSeconds = 0.0, T = 1.0; // 1초
		int ni, no; // 패킷 생성, 제거 개수 랜덤
		int overflow = 0;
		int underflow = 0;
		int NofPackets[120]; // 시간에 따른 패킷 수 저장할 array
		int acc = 0; // accumulate lost

		while (elapsedSeconds < 120) { // 120초 = 2분
			Sleep(T * 10); // 1초마다 대기
			elapsedSeconds += T; // 1초씩 증가
			cout << "Elapsed time[sec] = " << elapsedSeconds << endl;

			ni = rand() % NI; // random ni
			if (capacity < q.size() + ni) { // overflow
				lost += q.size() + ni - capacity; // lost count
				ni = capacity - q.size();
				cout << "overflow, size = " << q.size() + ni << endl;
				overflow += 1; // overflow count
			}
			for (int i = 0; i < ni; i++) { // packet 생성
				q.push_back(rand() % 20);
			}

			no = rand() % NO; // randomw no
			for (int i = 0; i < no; i++) {
				if (q.size() != 0) { // packet 제거
					q.erase(q.begin());
				}
				else { // underflow
					cout << "underflow, size = " << q.size() << endl;
					underflow += 1; // underflow check
					break;
				}
			}

			NofPackets[static_cast<int>(round(elapsedSeconds)) - 1] = q.size();
			cout << NofPackets[static_cast<int>(round(elapsedSeconds)) - 1] << endl;

			for (int i = 0; i < elapsedSeconds; i++) {
				if (max < NofPackets[i]) { // max size 측정
					max = NofPackets[i]; // 새로운 max 갱신
				}
			}

			acc += NofPackets[static_cast<int>(round(elapsedSeconds)) - 1]; // size 계속해서 누적
			avg = acc / elapsedSeconds;
			loss = lost / elapsedSeconds;
			full = (acc / elapsedSeconds / capacity) * 100;

			ofstream out("data.txt");
			for (int i = 0; i < elapsedSeconds; i++) {
				out << NofPackets[i] << endl;
			}
		}
	}

	int getMax() const {
		return max;
	}

	int getAvg() const {
		return avg;
	}
	
	int getLost() const {
		return lost;
	}

	float getLoss() const {
		return loss;
	}

	float getFull() const {
		return full;
	}
};

void main() {
	qq qq(90, 5, 100);
	qq.FIFO();

	cout << "Maximum = " << qq.getMax() << endl;
	cout << "Average = " << qq.getAvg() << endl;
	cout << "Lost = " << qq.getLost() << endl;
	cout << "Loss Rate = " << qq.getLoss() << "%" << endl;
	cout << "Queue Fullness = " << qq.getFull() << "%" << endl;
}
