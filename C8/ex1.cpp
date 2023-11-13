#include <iostream>
using namespace std;

class fruit {
public:
	//constructor
	fruit() {
		price = 200; many = 2; day = 12; //'day' default value = 12
	}
	fruit(float p, int n) {
		price = p; many = n; day = 12;
	}
	fruit(float p, int n, int d) { //'day'가 들어가는 constructor
		price = p; many = n; day = d;
	}

	//member data
	int many; float price; int day; //new member data 'day'

	//member function
	float show() {
		return price * many;
	}
	void show_all() { //new member function 'show_all'
		cout << price << " " << many << " " << day << endl;
	}
};

int main() {
	fruit apple, pear, peach, mango; // mango object 추가
	pear = fruit(300, 5);
	peach = fruit(1000, 5, 15);
	mango = fruit(700, 8); // price = 700, many = 8
	mango.show_all();
	apple.show_all();
	peach.show_all();
}
