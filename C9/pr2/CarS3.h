#pragma once
class Car {
public:
	//constructor
	Car();
	Car(float, int, float);
	//member data
	float speed; int wheels;
	//새로운 member data
	int public_test;
	//member function
	void setPrice(float);
	float getPrice();
	void speedChange(float);
	void setWheels(int);
	int getWheels();
	void klaxon(int);
protected:
	//member data
	float price;
	//새로운 member data
	int protected_test;
	//member function
	void speedUp(float);
	void speedDown(float);
private:
	//새로운 member data
	int private_test;
};
