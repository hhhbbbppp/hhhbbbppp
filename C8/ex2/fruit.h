#pragma once
class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2; // default values
	}
	fruit(int n, float p) {
		many = n;
		price = p;
	}
	// member data
	int many;
	float price;
	// member function
	float show();
};
