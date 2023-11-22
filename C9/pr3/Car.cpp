#include "Car.h"
#include <iostream>
Car::Car() :speed(0.1), wheels(0), price(0.2) {};
Car::Car(float ss, int ww, float pp) {
	speed = ss; wheels = ww; price = pp;
}
