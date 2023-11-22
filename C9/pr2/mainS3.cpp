#include <iostream>
using namespace std;

#include "CarS3.h"
#include "SUVS3.h"

int main() {
	SUV* newSUV = new SUV();

	newSUV->setPrice(5000);
	newSUV->setSparewheels(2);

	cout << newSUV->public_test << endl;
	cout << newSUV->protected_test << endl;
	cout << newSUV->private_test << endl;

	delete newSUV;
	return 0;
}
