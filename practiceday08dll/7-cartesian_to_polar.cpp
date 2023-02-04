#include "Header.h"
#include<cmath>
using namespace std;

const double PI = 3.1415929;

void cartesian_to_polar(double x, double y, double& r, double& theta) {
	r = sqrt(pow(x, 2) + pow(y, 2));

	theta = atan(y / x);
	theta = theta * (180.0 / PI);
}