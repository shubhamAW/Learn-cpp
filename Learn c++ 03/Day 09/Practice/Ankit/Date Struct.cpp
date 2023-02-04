#include<iostream>

struct Date {
	int dd;
	int mm;
	int yy;
};

void print(const Date &_new);
Date adddate(const Date &date, int n);

int main() {
	Date today{ 16,2,18 };
	int n;
	std::cout << "Enter the number of days you want to add" << std::endl;
	std::cin >> n;
	Date new_date = adddate(today, n);
	print(new_date);
}

void print(const Date &_new) {
	std::cout << _new.dd << std::endl;
	std::cout << _new.mm << std::endl;
	std::cout << _new.yy << std::endl;
}

Date adddate(const Date &date, int n) {
	Date t = date;
	int i = 0;
	while (n)
	{
		if (t.mm == 1 || t.mm == 3 || t.mm == 5 || t.mm == 7 || t.mm == 8 || t.mm == 10)
		{
			i = 31 - t.dd;
			n = n - i;
			if (n <= 0)
			{
				t.dd = 31 + n;
				n = 0;
			}
			else
			{
				n = n - 1;
				t.mm++;
				t.dd = 1;
			}
		}
		if (t.mm == 4 || t.mm == 6 || t.mm == 9 || t.mm == 11)
		{
			i = 30 - t.dd;
			n = n - i;
			if (n <= 0)
			{
				t.dd = 30 + n;
				n = 0;
			}
			else
			{
				n--;
				t.mm++;
				t.dd = 1;
			}
		}
		if (t.mm == 2 && t.yy % 4 == 0)
		{
			i = 29 - t.dd;
			n = n - i;
			if (n <= 0)
			{
				t.dd = 29 + n;
				n = 0;
			}
			else
			{
				n--;
				t.mm++;
				t.dd = 1;
			}
		}
		else if (t.mm == 2)
		{
			i = 28 - t.dd;
			n = n - i;
			if (n <= 0)
			{
				t.dd = 28 + n;
				n = 0;
			}
			else
			{
				n--;
				t.mm++;
				t.dd = 1;
			}
		}
		if (t.mm == 12)
		{
			i = 31 - t.dd;
			n = n - i;
			if (n <= 0)
			{
				t.dd = 31 + n;
				n = 0;
			}
			else
			{
				n--;
				t.yy++;
				t.mm = 1;
				t.dd = 1;
			}

		}
	}
	return t;
}