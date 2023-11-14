#include <iostream>
#include "store2.h"
using namespace std;
int main() {
	store A = store(4, 3, 3, 800, 1000, 800);
	A *= 2; // operator overloading *=
	cout << A.total() << endl;
	cout << A.apple.many << " " << A.apple.price << endl;
	cout << A.pear.many << " " <<A.pear.price << endl;
	cout << A.peach.many << " " << A.peach.price << endl;
	return 123;
}
