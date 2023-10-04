#include <iostream>
#include <fstream>
#include <cmath> 
#include <cstdlib> 
using namespace std;

int main() {
    float p, * geometric, * geometric_theory;
    int k, N = 100, count; 
    p = 1.0 / 6.0; 
    geometric = new float[20 + 1];
    geometric_theory = new float[20 + 1];

    for (k = 1; k <= 20; k++) geometric[k] = 0;

    for (int nn = 0; nn < N; nn++) {
        count = 0;
        while (true) {
            count++;
            if ((rand() / (float)RAND_MAX) < p) break;
        }
        if (count <= 20) geometric[count]++;
    } 
    for (int k = 1; k <= 20; k++) geometric[k] /= (float)N;
    ofstream xxx("geometric.txt");
    for (int k = 1; k <= 20; k++) {
        geometric_theory[k] = (p) * pow(1-p, k - 1);
        xxx << k << " " << geometric_theory[k] << " " << geometric[k] << endl;
    }
    xxx.close();
    return 1;
}
