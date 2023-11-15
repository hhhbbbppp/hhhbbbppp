#include <iostream>
#include "health.h"
using namespace std;
int main() {
	CHealth VIP(65), * mario, VIP2(40), * mickey; //VIP2, mickey 추가
	mario = new CHealth(70);
	mickey = new CHealth(20); //mickey age 20

	cout << VIP.age << " " << mario->age << endl;
	cout << VIP2.age << " " << mickey->age << endl;

	VIP.measureCel();
	mario->measureCel();
	VIP2.measureCel();
	mickey->measureCel();

	cout << VIP.cel << "C " << mario->faren << "F \n";
	cout << VIP2.faren << "F " << mickey->cel << "C \n";
	cout << "size " << sizeof(CHealth) << "\n";
	return 1;
}
