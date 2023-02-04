#include<iostream>
#include<conio.h>
struct date {
	int dd;
	int mm;
	int yy;
};
date adddate(const date &dt, int n);

void main() {
	int a, n;
	date td, nd;
	std::cout << "Enter todays date as dd mm yy = " << std::endl;
	std::cin >> td.dd >> td.mm >> td.yy;
	std::cout << "Enter the days by which required day to be evaluated = " << std::endl;
	std::cin >> n;
	nd = adddate(td, n);
	std::cout << "The date will be =  " << nd.dd << "\t" << nd.mm << "\t" << nd.yy << std::endl;
	_getch();
}

date adddate(const date &dt, int n) {
	date nd;
	int tt, ods, ly, t[12];
	if ((dt.yy % 4) == 0)
		ly = (dt.yy / 4) - 1;
	else
		ly = (dt.yy / 4);
	ods = ((dt.yy - 1) * 365) + ly;
	switch ((dt.mm - 1)) {
	case 1:
		ods = ods + 31;
		break;
	case 2:
		if ((dt.yy % 4) == 0)
			ods = ods + 29;
		else
			ods = ods + 28;
		break;
	case 3:
		ods = ods + 31;
		break;
	case 4:
		ods = ods + 30;
		break;
	case 5:
		ods = ods + 31;
		break;
	case 6:
		ods = ods + 30;
		break;
	case 7:
		ods = ods + 31;
		break;
	case 8:
		ods = ods + 31;
		break;
	case 9:
		ods = ods + 30;
		break;
	case 10:
		ods = ods + 31;
		break;
	case 11:
		ods = ods + 30;
		break;
	case 12:
		ods = ods + 31;
		break;
	default:
		break;
	};
	ods = ods + dt.dd;
	ods = ods + n;
	nd.yy = (ods / 1461)*4;
	ods = ods % 1461;
	nd.yy = nd.yy + (ods / 365) + 1;
	ods = ods % 365;
	if ((nd.yy % 4) == 0)
		t[1] = 335, t[2] = 305, t[3] = 274, t[4] = 244, t[5] = 213, t[6] = 182, t[7] = 152, t[8] = 121, t[9] = 91, t[10] = 60, t[11] = 31;

	else
		t[1] = 334, t[2] = 304, t[3] = 273, t[4] = 243, t[5] = 212, t[6] = 181, t[7] = 151, t[8] = 120, t[9] = 90, t[10] = 59, t[11] = 31;
		if (ods > t[1]) {
			nd.mm = 12;
			ods = ods - t[1];
		}
		else if (ods > t[2]) {
			nd.mm = 11;
			ods = ods - t[2];
		}
		else if (ods > t[3]) {
			nd.mm = 10;
			ods = ods - t[3];
		}
		else if (ods > t[4]) {
			nd.mm = 9;
			ods = ods - t[4];
		}
		else if (ods > t[5]) {
			nd.mm = 8;
			ods = ods - t[5];
		}
		else if (ods > t[6]) {
			nd.mm = 7;
			ods = ods - t[6];
		}
		else if (ods > t[7]) {
			nd.mm = 6;
			ods = ods - t[7];
		}
		else if (ods > t[8]) {
			nd.mm = 5;
			ods = ods - t[8];
		}
		else if (ods > t[9]) {
			nd.mm = 4;
			ods = ods - t[9];
		}
		else if (ods > t[10]) {
			nd.mm = 3;
			ods = ods - t[10];
		}
		else if (ods > t[11]) {
			nd.mm = 2;
			ods = ods - t[11];
		}
		else
			nd.mm = 1;
		nd.dd = ods;
		return (nd);
}
