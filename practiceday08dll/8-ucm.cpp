#include<iostream>
#include"Header.h"
#include<cmath>
using namespace std;

void ucm(double m, double r, double omega, double& f, double& v) {
	f = m * pow(omega, 2) * r ;

	v = omega * r;
}