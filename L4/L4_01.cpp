#include <iostream> // cout cin
#include <fstream>  // ifstream ofstream
using namespace std;

int main() {
	ofstream gg("gg.txt");
	
	for (int i = 1; i < 20; i++) {
		gg << " 11 X " << i << " = " << 11 * i << endl;
	}

	gg.close();

	return 123;
}
