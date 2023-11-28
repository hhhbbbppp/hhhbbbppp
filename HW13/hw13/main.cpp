#include "FIFO.h"

void main() {
	qq qq(90, 85, 150);
	qq.FIFO();

	cout << "Overflow = " << qq.getOverflow() << endl;
	cout << "Underflow = " << qq.getUnderflow() << endl;
	cout << "Maximum = " << qq.getMax() << endl;
	cout << "Average = " << qq.getAvg() << endl;
	cout << "Lost = " << qq.getLost() << endl;
	cout << "Loss Rate = " << qq.getLoss() << endl;
	cout << "Queue Fullness = " << qq.getFull() << "%" << endl;
}
