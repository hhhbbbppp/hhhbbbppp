#include <iostream>
#include "Car.h"
#include "Engineer.h"

int main() {
	Car* myCar = new Car(100, 4, 4500.0);
	std::cout << myCar->speed << std::endl;
	//std::cout << myCar->wheels << std::endl;
	//std::cout << myCar->price << std::endl;

	//friend class
	Engineer* myEngineer = new Engineer;
	myEngineer->Engineer_A(myCar);
	std::cout << myEngineer->objectcar->speed << std::endl;
	//std::cout << myEngineer->objectcar->wheels << std::endl;
	//std::cout << myEngineer->objectcar->price << std::endl;

	delete myCar;
	delete myEngineer;
}
