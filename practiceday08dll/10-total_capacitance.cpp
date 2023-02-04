#include<iostream>

#include "Header.h"
using namespace std;

void total_capacitance(double c1, double c2, double& cs, double& cp) {
	cp = c1 + c2;
	cs = (c1 * c2) / (c1 + c2);
}