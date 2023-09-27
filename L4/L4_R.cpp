#include <iostream> // cout cin
#include <fstream>  // ifstream ofstream
using namespace std;

int main() {
	ifstream betha("ABC.txt");
	if (!betha) {
		cout << " cant open file\n";
		return 333;
	}
	int A;
	float B, C;
	char D[10], E[10];

	betha >> A >> D >> E;
	cout << A << " " << D << " " << E << endl;
	betha >> B >> D >> E;
	cout << B << " " << D << " " << E << endl;
	betha >> B >> D;
	cout << B << " " << D;

	betha.close();
	return 123;
}
