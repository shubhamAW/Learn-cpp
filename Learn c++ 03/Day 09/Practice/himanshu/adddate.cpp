struct Date {
	int dd;
	int mm;
	int yy;
};

Date adddate(const Date & date, int n);

int main() {
	Date a = { 28,12,2100 };
	int n = 10;
	Date b = adddate(a, n);
	a = { 28,2,2014 };
	Date c = adddate(a, n);
}

Date adddate(const Date & date, int n) {
	int m = date.mm;
	int y = date.yy;
	int d = date.dd;

	if (n == 0) return date;
	d += n;
	if (m == 2 && d > 28) {
		if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {		//leap year
			d -= 29; 
			m++; 
			if (m > 12) { 
				m = 1; 
				y++; 
			}
		}
		else {
			d -= 28; m++; 
			if (m > 12) { 
				m = 1; 
				y++; 
			}
		}
	}

	else if (d > 30 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)) {	//month of 31 days
		d -= 31; 
		m++; 
		if (m > 12) { 
			m = 1; 
			y++; 
		}
	}
	else if (d > 30 && (m == 4 || m == 6 || m == 9 || m == 11)) {	//month of 30 days
		d -= 30; 
		m++; 
		if (m > 12) { 
			m = 1; 
			y++; 
		}
	}
	Date a = { d,m,y };
	return a;
}