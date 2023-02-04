#include "header.h"

int dow(int day, int month, int year) {
	static int t[] = { 0,3,2,5,1,4,6,2,4 };
	year -= month < 3;
	return static_cast<DayNumber>((year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7);

}