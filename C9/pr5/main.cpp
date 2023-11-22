#include "Car.h"
#include <iostream>

int main() {
    Car A(100.0, 4, 4500.0);
    Car B(120.0, 6, 8000.0);
    Car C = A + B;

    // 결과 출력
    std::cout << "C.speed = " << C.speed << std::endl;
    std::cout << "C.wheels = " << C.wheels << std::endl;

    return 0;
}
