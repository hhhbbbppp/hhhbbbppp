#include <iostream>
#include "health2.h"
using namespace std;
int main() {
	cout << " class size " << sizeof(CHealth) << endl;

	CHealth* students = new CHealth[5];

	cout << " # of customers " << CHealth::nCHealth << endl;

	for (int i = 0; i < 3; i++) {
		students[i].measure(20 + rand() % 4);
		(students + i)->run5min();
	}
	//students[4].GetBMI(); // private member function
	cout << students[1].beat5min[30] << endl;
	//cout << students[5].weight << endl;; // private member data

	delete[] students;  // delete objects
	return 123;
}
