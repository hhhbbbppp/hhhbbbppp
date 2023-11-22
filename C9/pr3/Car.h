#pragma once
class Car {
public:
	Car();
	Car(float, int, float);
	float speed;

	friend class Engineer;
protected:
	int wheels;
private:
	float price;
};
