#include <iostream>
#include <fstream>

using namespace std;

void m0(int* p) {
    *p = 1234;
}

void m1(int* p) {
    for(int i = 1000; i <= 5000; i++)
        *(p + (i/1000-1)) = i * 5;
}

void m2(float* p) {
    for(int i = 0; i < 3; i++) {
        float f = (i * 0.5) + -0.5;
        *(p + i) = f*f;
    }
}

int main() {
    ofstream fout("mybin.dat", ios::out | ios::binary);
    if (!fout) {
        cout << "Error opening file" << endl;
        return 1;
    }

    char* reader = new char[36];
    m0((int*)(reader));
    m1((int*)(reader + 4));
    m2((float*)(reader + 24));
    fout.write(reader, 36);

    ofstream fout2("mybin.dat", ios::out);
    if (!fout2) {
        cout << "Error opening file" << endl;
        return 1;
    }

    fout2 << *(int*)(reader) << endl;
    fout2 << *(int*)(reader + 4) << *(int*)(reader + 8) << *(int*)(reader + 12) << *(int*)(reader + 16) << *(int*)(reader + 20) << endl;
    fout2 << *(float*)(reader + 24) << *(float*)(reader + 28) << *(float*)(reader + 32) << endl;

    fout.close();
    return 0;
}
