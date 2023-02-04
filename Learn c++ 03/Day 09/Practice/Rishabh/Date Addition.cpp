#include<iostream>
struct Date
{   int dd;
	int mm;
	int yy;
};

Date adddate(const Date &date, int n);

int main()
{
	Date a;
	int n;
	std::cout << "Enter the Day: " << std::endl;
	std::cin >> a.dd;
	std::cout << "Enter the Month: " << std::endl;
	std::cin >> a.mm;
	std::cout << "Enter the Year: " << std::endl;
	std::cin >> a.yy;
	std::cout << "Enter the no. of days to be added: " << std::endl;
	std::cin >> n;
	Date b;
	b = adddate(a, n);
	std::cout << "New Day: " << b.dd<<std::endl;
	std::cout << "New Month: " << b.mm<<std::endl;
	std::cout << "New Year: " << b.yy<<std::endl;

}
Date adddate(const Date &date, int n)
{
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
				t.dd = 1;
				t.mm = t.mm + 1;
				n = n - 1;
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
				t.dd = 1;
				t.mm = t.mm + 1;
				n = n - 1;
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
				t.dd = 1;
				t.mm = t.mm + 1;
				n = n - 1;
			}

		}
		if (t.mm == 2 && t.yy % 4 != 0)
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
				t.dd = 1;
				t.mm = t.mm + 1;
				n = n - 1;
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
				t.dd = 1;
				t.mm = 1;
				t.yy = t.yy + 1;
				n = n - 1;
			}

		}
	}
	return t;
}

