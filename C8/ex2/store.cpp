#include "store.h"
float store::total() {
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	x += mango.show(); // mango 추가
	return x;
}
