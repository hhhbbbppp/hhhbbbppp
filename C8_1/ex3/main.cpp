#include <iostream>
#include "CHealth.h"
using namespace std;
int main() {
	CHealth* students = new CHealth[5];

	for (int i = 0; i < 4; i++) {
		students[i].measure(20 + rand() % 4);
		(students + i)->run5min();
	}

	delete[] students;  // delete objects
	return 123;
}
