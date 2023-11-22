#include "SUVS3.h"
#include <iostream>
//public member function
void SUV::setSparewheels(int ii) {
	spareWheels = ii;
}
int SUV::getSparewheels() {
	return spareWheels;
}
float SUV::getTotalPrice() {
	return (this->wheels * 100.0 + this->price);
}
void SUV::klaxon(int ii) {
	for (int i = 0; i < ii; i++) {
		std::cout << "Beep\n";
	}
}
void SUV::test_function() {
	std::cout << public_test << std::endl;
	std::cout << protected_test << std::endl;
	std::cout << private_test << std::endl;
}
