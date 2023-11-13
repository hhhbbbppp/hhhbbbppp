#include <iostream>
#include "store.h"
using namespace std;
int main() {
	store A, B;
	B = store(3, 4, 5, 6, 100, 200, 300, 400);
	cout << A.total() << endl; // A store의 total price
	cout << B.total() << endl; // B store의 total price
	cout << " A peach " << A.peach.price << endl; // A store에서 peach의 price
	cout << " B peach " << B.peach.price << endl; // B store에서 peace의 price
	return 123;
}
