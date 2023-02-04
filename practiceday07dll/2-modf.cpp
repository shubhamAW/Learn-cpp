#include "Header.h"
#include<cmath>

double modf(double num, double* integer) {
	*integer = floor(num);
	return num - *integer;
}