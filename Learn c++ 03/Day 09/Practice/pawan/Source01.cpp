#include<iostream>
#include<conio.h>

struct Date {
	int m_dd;
	int m_mm;
	int m_yy;
};
void print(const Date &ndt);
Date add_date(const Date &dt, int day);

int main()
{
	Date date = {16,2,2018};
	int n = 0;
	std::cout << "Enter days: ";
	std::cin >> n;
	Date ndate = add_date(date, n);
	print(ndate);
	_getch();
}

void print(const Date &ndt) {
	std::cout << "Date is = " << ndt.m_dd << " " << ndt.m_mm << " " << ndt.m_yy << std::endl;
}

Date add_date(const Date &dt, int day)
{
	Date d = { 0,0,0 };
	d.m_dd = dt.m_dd + day;
	d.m_mm = dt.m_mm ;
	d.m_yy = dt.m_yy ;
	int t = 1;
	for (int i = 0; i < t; i++)
	{
		if (d.m_mm == 1 && d.m_dd > 31)
		{
			d.m_mm = d.m_mm + 1;
			d.m_dd = d.m_dd - 31;
		}

		if (d.m_mm == 2 && d.m_dd > 28)
		{
			d.m_mm = d.m_mm + 1;
			d.m_dd = d.m_dd - 28;
		}

		if (d.m_mm == 3 && d.m_dd > 31)
		{
			d.m_mm = d.m_mm + 1;
			d.m_dd = d.m_dd - 31;
		}

		if (d.m_mm == 4 && d.m_dd > 30)
		{
			d.m_mm = d.m_mm + 1;
			d.m_dd = d.m_dd - 30;
		}
		if (d.m_mm == 5 && d.m_dd > 31)
		{
			d.m_mm = d.m_mm + 1;
			d.m_dd = d.m_dd - 31;
		}
		if (d.m_mm == 6 && d.m_dd > 30)
		{
			d.m_mm = d.m_mm + 1;
			d.m_dd = d.m_dd - 30;
		}
		if (d.m_mm == 7 && d.m_dd > 31)
		{
			d.m_mm = d.m_mm + 1;
			d.m_dd = d.m_dd - 31;
		}
		if (d.m_mm == 8 && d.m_dd > 31)
		{
			d.m_mm = d.m_mm + 1;
			d.m_dd = d.m_dd - 31;
		}
		if (d.m_mm == 9 && d.m_dd > 30)
		{
			d.m_mm = d.m_mm + 1;
			d.m_dd = d.m_dd - 30;
		}
		if (d.m_mm == 10 && d.m_dd > 31)
		{
			d.m_mm = d.m_mm + 1;
			d.m_dd = d.m_dd - 31;
		}
		if (d.m_mm == 11 && d.m_dd > 30)
		{
			d.m_mm = d.m_mm + 1;
			d.m_dd = d.m_dd - 30;
		}
		if (d.m_mm == 12 && d.m_dd > 31)
		{
			d.m_mm = 1;
			d.m_dd = d.m_dd - 31;
			d.m_yy = d.m_yy + 1;
			t++;
		}
	}
		return d;
	
	
}