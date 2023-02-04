#include "Header.h"
#include<iostream>
#include<utility>
#include<cmath>
using namespace std;

void roots(double a, double b, double c , double &root1 , double &root2) {
	double discriminant = (b * b) - 4 * a * c;

	if (discriminant < 0) {
		cout << "No Real roots" << endl;
		return;
	}

	root1 = (-b + sqrt(discriminant)) / (2 * a);
	root2 = (-b - sqrt(discriminant)) / (2 * a);
}