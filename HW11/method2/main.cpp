#include <iostream>
#include <fstream>
#include "LoLCha.h"
using namespace std;
int main()
{
   LoL* l1 = new LoL(5, 10, 2, 3, -5, 0.1, 10);
   LoL* l2 = new LoL(7, 100, -3.5, 4, 100, 10, 15);
   LoL* l3 = new LoL(12, 17, 0.01, 0.2, 1.5, 0.08, 20);
   LoL* l4 = new LoL(10, 20, 4.2, -5.3, 2.1, 0.2, 5);

   l1->f0("alkali.dat"); l1->f1(); l1->f2();
   l2->f0("amumu.dat"); l2->f1(); l2->f2();
   l3->f0("annie.dat"); l3->f1(); l3->f2();
   l4->f0("ashe.dat"); l4->f1(); l4->f2();

   delete l1, l2, l3, l4;

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
