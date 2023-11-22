#pragma once
#include "CarS3.h"
//inheritance class 'Car'
class SUV : public Car {
public:
	//member function
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
	void klaxon(int);
	//새로운 test function
	void test_function();
private:
	//member data
	int spareWheels;
};
