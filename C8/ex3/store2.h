#pragma once
#include "fruit.h"
class store {
public:
	store() {};
	store(int a, int b, int c, float d, float e, float f) {
		apple = fruit(a, d);
		pear = fruit(b, e);
		peach = fruit(c, d);
	}
	fruit apple, pear, peach;
	float total();
	void operator *=(int);
};
