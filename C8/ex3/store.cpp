#include "store2.h"
float store::total() {
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	return x;
}
void store::operator *=(int n) {
	apple.many *= n;
	pear.many *= n;
	peach.many *= n;
}
