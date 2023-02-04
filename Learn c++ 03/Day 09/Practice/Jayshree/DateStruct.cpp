#include<iostream>

struct Date
{
	int dd;
	int mm;
	int yy;
};

Date addDate(const Date &date, int n);

int main()
{
	int days;
	Date Newdate, CurrentDate;
	std::cout << "Enter current date: dd mm yy " << std::endl;
	std::cin >> CurrentDate.dd >> CurrentDate.mm >> CurrentDate.yy;
	std::cout << "Enter number of days: " << std::endl;
	std::cin >> days;
	Newdate = addDate(CurrentDate, days);
	std::cout << "New date: " << Newdate.dd << "\t" << Newdate.mm << "\t" << Newdate.yy << std::endl;
}

Date addDate(const Date &date, int n)
{
	Date newDate = date;
	newDate.dd = date.dd + n;
	if (date.mm == 2)
	{
		if ((newDate.yy % 4) == 0)
		{
			if (newDate.dd > 29)
			{
				newDate.dd = newDate.dd % 29;	//newDate.mm = newDate.mm + 1;
				newDate.mm = newDate.mm + 1 + (n / 29);
				newDate.yy = newDate.yy + (n / 366);
			}
		}
		else
		{
			if (newDate.dd > 28)
			{
				newDate.dd = newDate.dd % 28;
				newDate.mm = newDate.mm + 1 + (n / 28);
				newDate.yy = newDate.yy + (n / 365);
			}
		}
	}
	else if (date.mm == 01 || date.mm == 03 || date.mm == 05 || date.mm == 07 || date.mm == 8 || date.mm == 10 || date.mm == 12)
	{
		if (newDate.dd > 31)
		{
			newDate.dd = newDate.dd % 31;
			newDate.mm = newDate.mm + 1 + (n / 31);
			newDate.yy = newDate.yy + (n / 365);
		}
	}
	else if (date.mm == 04 || date.mm == 06 || date.mm == 9 || date.mm == 11)
	{
		if (newDate.dd > 30)
		{
			newDate.dd = newDate.dd % 30;
			newDate.mm = newDate.mm + 1 + (n / 30);
			newDate.yy = newDate.yy + (n / 365);
		}
	}
	return newDate;
}