#include"Header.h"

void convert(int& hh, int& mm, int& ss) {
	while (ss > 60) {
		ss -= 60;
		mm++;
	}
	while (mm > 60) {
		mm -= 60;
		hh++;
	}
}