#include "Engineer.h"
#include <iostream>
void Engineer::Engineer_A(Car* x) {
	x->wheels = 4;
	x->price = 5000;
	x->speed = 150.0;
	objectcar = x;
}
