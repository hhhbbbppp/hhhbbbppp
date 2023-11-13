#pragma once
#include "fruit.h"
class store {
public:
	store() {};
	store(int a, int b, int c, int d, float e, float f, float g, float h) { // int d, float h 추가
		apple = fruit(a, e);
		pear = fruit(b, f);
		peach = fruit(c, g);
		mango = fruit(d, h); // mango 추가
	}
	fruit apple, pear, peach, mango; // mango 추가
	float total();
};
