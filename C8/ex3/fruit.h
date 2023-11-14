#pragma once
class fruit {
public:
	fruit() {
		many = 2; price = 200;
	}
	fruit(int n, float p) {
		many = n; price = p;
	}
	int many; float price;
	float show();
};
