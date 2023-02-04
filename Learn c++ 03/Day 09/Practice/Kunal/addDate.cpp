#include<iostream>

struct Date
{
	int d;
	int m;
	int y;
};

Date addDate(const Date &date, int n);

int main()
{
	Date d = { 15, 1, 2018 };
	Date newDate = addDate(d, 100);

}

Date addDate(const Date &date, int n)
{
	Date temp = date;
	if (n > 30)
	{
		Date d = temp;
		int rem = n % 30;
		int thirtyMultiple = n - rem;
		int loopCount = thirtyMultiple / 30;
		for (int i = 0; i < loopCount; i++)
		{
			d = addDate(d, 30);
		}
		d = addDate(d, rem);
		return d;
	}
	else
	{
		if (temp.m < 8) //before August
		{
			if ((temp.m % 2) != 0) //All moths with 31 days
			{
				int diff = 31 - temp.d;
				if (diff < n)
				{
					temp.m = temp.m + 1;
					temp.d = n - diff;
					return temp;
				}
				else
				{
					temp.d = temp.d + n;
					return temp;
				}

			}
			else
			{
				if (temp.m == 2)
				{
					if ((temp.y % 4) == 0)
					{
						int diff = 29 - temp.d;
						if (diff < n)
						{
							temp.m = temp.m + 1;
							temp.d = n - diff;
							return temp;
						}
						else
						{
							temp.d = temp.d + n;
							return temp;
						}
					}
					else
					{
						int diff = 28 - temp.d;
						if (diff < n)
						{
							temp.m = temp.m + 1;
							temp.d = n - diff;
							return temp;
						}
						else
						{
							temp.d = temp.d + n;
							return temp;
						}
					}
				}
				else
				{
					int diff = 30 - temp.d;
					if (diff < n)
					{
						temp.m = temp.m + 1;
						temp.d = n - diff;
						return temp;
					}
					else
					{
						temp.d = temp.d + n;
						return temp;
					}
				}
			}

		}
		else //after August
		{
			if ((temp.m % 2) == 0)//All months with 31 days.
			{
				int diff = 31 - temp.d;
				if (diff < n)
				{
					if (temp.m == 12)
					{
						temp.m = 1;
						temp.y = temp.y + 1;
					}
					else
					{
						temp.m = temp.m + 1;
					}
					temp.d = n - diff;
					return temp;
				}
				else
				{
					temp.d = temp.d + n;
					return temp;
				}
			}
			else
			{
				int diff = 30 - temp.d;
				if (diff < n)
				{
					temp.m = temp.m + 1;
					temp.d = n - diff;
					return temp;
				}
				else
				{
					temp.d = temp.d + n;
					return temp;
				}
			}
		}
	}
}