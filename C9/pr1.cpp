#include<iostream>
using namespace std;

class Person {
public:
    Person(int x) {
        many1 = x + 1; // 값을 추가
        cout << many1 << endl;
    }
    Person() {
        many1 = 11; // 초기값
        cout << many1 << endl;
    }
    // member data 추가
    int many1;
};

class Faculty : virtual public Person {
public:
    Faculty(int x) : Person(x) {
        many2 = x + 2; // 값을 추가
        cout << many2 << endl;
    }
    Faculty() : Person() {
        many2 = 22; // 초기값
        cout << many2 << endl;
    }
    // member data 추가
    int many2;
};

class Student : virtual public Person {
public:
    Student(int x) : Person(x) {
        many3 = x + 3; // 값을 추가
        cout << many3 << endl;
    }
    Student() : Person() {
        many3 = 33; // 초기값
        cout << many3 << endl;
    }
    // member data 추가
    int many3;
};

class TA : public Faculty, public Student {
public:
    TA(int x) : Student(x), Faculty(x) {
        many4 = x + 4; // 값을 추가
        cout << many4 << endl;
    }
    TA() : Student(), Faculty() {
        many4 = 44; // 초기값
        cout << many4 << endl;
    }
    // member data 추가
    int many4;
};

int main() {
    TA ta1(100);
}
