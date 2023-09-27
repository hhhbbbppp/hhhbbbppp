#include <iostream> // cout cin
#include <fstream>  // ifstream ofstream
using namespace std;
int main() {
	ofstream alpha("ABC.txt");
	if (!alpha) {
		cout << " cant open file\n";
		return 666;
	}
	int A;
	float B, C;
	A = 123;
	B = 4.56;
	C = 7.89;
	alpha << A << " AAA AA\n";
	alpha << B << " BBB B\n";
	alpha << C << " CCC\n";
	alpha.close();
	return 123;
}
