#include<cmath>
using namespace std;

#include"Header.h"

#define PI 3.14
#define G 9.8

double CalculatePeriodPendulum(Pendulum& p) {
	return 2 * PI * sqrt(p.length / G);
}