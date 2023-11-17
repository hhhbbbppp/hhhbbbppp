#include <iostream>
#include <fstream>
#include "LoLCha.h"
using namespace std;
int main() {
	LoL l1, l2, l3, l4;
	l1.N1 = 5;l1.N2 = 10;
	l1.a = 2;l1.b = 3;
	l1.x0 = -5;l1.dx = 0.1;
	l1.m = 10;

	l2.N1 = 7;  l2.N2 = 100;
	l2.a = -3.5;   l2.b = 4;
	l2.x0 = 100; l2.dx = 10;
	l2.m = 15;

	l3.N1 = 12;l3.N2 = 17;
	l3.a = 0.01;l3.b = 0.2;
	l3.x0 = 1.5;l3.dx = 0.08;
	l3.m = 20;

	l4.N1 = 10;l4.N2 = 20;
	l4.a = 4.2;l4.b = -5.3;
	l4.x0 = 2.1;l4.dx = 0.2;
	l4.m = 5;


	l1.f0("alkali.dat");
	l1.f1();  l1.f2();
	l2.f0("amumu.dat");
	l2.f1();   l2.f2();
	l3.f0("annie.dat");
	l3.f1();  l3.f2();
	l4.f0("ashe.dat");
	l4.f1();   l4.f2();
	
	int A, B, C;
	float D, E, F, G;
	int MM[6];
	float NN[10];
	ifstream yy;
	yy.open("annie.dat", ios::binary | ios::in);
	yy.read((char*)&A, sizeof(int));
	yy.read((char*)&B, sizeof(int));
	yy.read((char*)&D, sizeof(float));
	yy.read((char*)&E, sizeof(float));
	yy.read((char*)&F, sizeof(float));
	yy.read((char*)&G, sizeof(float));
	yy.read((char*)&C, sizeof(int));
	yy.read((char*)MM, sizeof(int) * 6);
	yy.read((char*)NN, sizeof(float) * 10);
	yy.close();
	cout << "N1 : " << A << "   " << "N2 : " << B << "   " << "a : " << D << endl;
	cout << "b : " << E << "    " << "x0 : " << F << "    " << "dx : " << G << "   " << "m : " << C << endl;
	for (int i = 0; i < 6; i += 1) {
		cout << "i" << i << " : " << MM[i] << endl;
	}
	for (int j = 0; j < 10; j += 1) {
		cout << "j" << j << " : " << NN[j] << endl;
	}
	cout << sizeof(LoL);
	return 10;
}
	
