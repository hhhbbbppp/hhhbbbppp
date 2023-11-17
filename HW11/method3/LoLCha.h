#pragma once
#include <fstream>
using namespace std;
class LoL
{
public:
    LoL(int N1, int N2, float a, float b, float x0, float dx, int m, string ss);
    ~LoL();

    ofstream dd;
    int* _N1, * _N2, * _m;
    float* _a, * _b, * _x0, * _dx;
    string s;

    void f1();
    void f2();
};
