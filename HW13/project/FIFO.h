#include <iostream>
#include <Windows.h> // Sleep()
#include <vector> // vector
#include <fstream> // file
using namespace std;

class qq {
public:
	// constructor
	qq(int, int, int);

	// member variables
	int NI, NO, capacity; // max in, max out, capacity
	float loss, full; // Packet loss rate, Queue fullness
	int max, avg, lost; // maximum, average, 손실된 패킷 수
	int overflow, underflow;

	// member function
	void FIFO();
	int getOverflow() const;
	int getUnderflow() const;
	int getMax() const;
	int getAvg() const;
	int getLost() const;
	float getLoss() const;
	float getFull() const;
};
