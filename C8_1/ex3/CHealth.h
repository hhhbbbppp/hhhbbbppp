#pragma once
using namespace std;
class CHealth {
public:
	CHealth();
	CHealth(int a);
	~CHealth();

	static int nCHealth;
	float height, cel, faren, beat, pressure;
	float BMIvalue, healthAge;
	float* beat5min, * temp5min;
	int many; // new public member data 추가

	void measure();
	void measure(int);
	int  run5min();

private:
	int age;
	float weight;

	void cel2faren();
	void faren2cel();
	void GetHealthAge();
	void GetBMI();
};
