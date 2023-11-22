#include "CarS3.h"
#include <iostream>
//default constructor
Car::Car() :speed(0.1), wheels(0), price(0.2) {}
//constructor1
Car::Car(float ss, int ww, float pp) {
	speed = ss; wheels = ww; price = pp;
	std::cout << " new Car \n";
}
//public member function
void Car::setPrice(float x) { price = x; }
float Car::getPrice() { return price; }
void Car::speedChange(float x) {
	if (x > 0) speedUp(x);
	else speedDown(-x);
}
void Car::setWheels(int n) { wheels = n; }
int Car::getWheels() { return wheels; }
void Car::klaxon(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "  no horn \n";
	}
}
//private member function
void Car::speedUp(float x) { speed += x; }
void Car::speedDown(float x) { speed -= x; }
