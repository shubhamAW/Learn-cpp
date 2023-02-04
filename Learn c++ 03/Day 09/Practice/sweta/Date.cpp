#include<iostream>
struct Date {
	int dd;
	int mm;
	int yy;
};
void printDate(const Date &date);
Date addDate(const Date &date, int n);

int main() {
	int n = 0;
	std::cout << "current date is 16/02/2018-" << std::endl;
	std::cout << "enter the no of days:-";
	std::cin >> n;
	
	Date d1 = { 16,02,2018 };
	Date nd = addDate(d1, n);
	printDate(nd);
}
void printDate(const Date &date) {
	std::cout << "day= " << date.dd << std::endl;
	std::cout << "month= " << date.mm << std::endl;
	std::cout << "year= " << date.yy << std::endl;
}



Date addDate(const Date &date, int n) {
	Date newdate = { n,0,0 };
	newdate.dd = date.dd + newdate.dd;
	newdate.mm = date.mm + newdate.mm;
	newdate.yy = date.yy + newdate.yy;
	if (newdate.dd > 31 && (newdate.mm == 1 || 3 || 5 || 7 || 8 || 10 || 12))
	{
		int temp_d = newdate.dd % 31;
		int temp_m = newdate.dd / 31;
		newdate.dd = temp_d;
		newdate.mm = newdate.mm + temp_m;

		if (newdate.mm > 12) {
			int temp_m = newdate.mm % 12;
			int temp_y = newdate.dd / 12;
			newdate.mm = temp_m;
			newdate.yy = newdate.yy + temp_y;

		}

	}


	if (newdate.dd > 27 && (newdate.mm == 2 || 4 || 6 || 11 || 11 ))
	{
		if (newdate.mm == 2) {
			if (newdate.yy % 4 == 0) {
				if (newdate.dd > 29) {
					int temp_d = newdate.dd % 29;
					int temp_m = newdate.dd / 29;
					newdate.dd = temp_d;
					newdate.mm = newdate.mm + temp_m;
				}

			}
			else {
				if (newdate.dd > 28) {
					int temp_d = newdate.dd % 28;
					int temp_m = newdate.dd / 28;
					newdate.dd = temp_d;
					newdate.mm = newdate.mm + temp_m;
				}
			}

		}
		int temp_d = newdate.dd % 30;
		int temp_m = newdate.dd / 30;
		newdate.dd = temp_d;
		newdate.mm = newdate.mm + temp_m;

		if (newdate.mm > 12) {
			int temp_m = newdate.mm % 12;
			int temp_y = newdate.dd / 12;
			newdate.mm = temp_m;
			newdate.yy = newdate.yy + temp_y;

		}

	}


	return newdate;
}
