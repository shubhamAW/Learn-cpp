#include<iostream>

struct Date {
	int dd;
	int mm;
	int yy;
};

Date adddate(const Date &date, int n) {
	
	Date datec = date;
	while(n!=0) {
		if (datec.mm == 1) {
			int c = 31 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 2;
				datec.dd = 0;
			}else {
				datec.dd += n;
				return datec;
			}
		}
		if (datec.mm == 2) {
			int c = 28 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 3;
				datec.dd = 0;
			}else {
				datec.dd += n;
				return datec;
			}
		}
		if (datec.mm == 3) {
			int c = 31 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 4;
				datec.dd = 0;
			}else {
				datec.dd += n;
				return datec;
			}
		}
		if (datec.mm == 4) {
			int c = 30 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 5;
				datec.dd = 0;
			}else {
				datec.dd += n;
				return datec;
			}
		}
		if (datec.mm == 5) {
			int c = 31 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 6;
				datec.dd = 0;
			}else {
				datec.dd += n;
				return datec;
			}
		}
		if (datec.mm == 6) {
			int c = 30 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 7;
				datec.dd = 0;
			}
			else {
				datec.dd += n;
				return datec;
			}
		}
		if (datec.mm == 7) {
			int c = 31 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 8;
				datec.dd = 0;
			}
			else {
				datec.dd += n;
				return datec;
			}
		}
		if (datec.mm == 8) {
			int c = 31 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 9;
				datec.dd = 0;
			}
			else {
				datec.dd += n;
				return datec;
			}
		}
		if (datec.mm == 9) {
			int c = 30 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 10;
				datec.dd = 0;
			}
			else {
				datec.dd += n;
				return datec;
			}
		}
		if (datec.mm == 10) {
			int c = 31 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 11;
				datec.dd = 0;
			}
			else {
				datec.dd += n;
				return datec;
			}
		}
		if (datec.mm == 11) {
			int c = 30 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 12;
				datec.dd = 0;
			}
			else {
				datec.dd += n;
				return datec;
			}
		}
		if (datec.mm == 12) {
			int c = 31 - datec.dd;
			if (n > c) {
				n -= c;
				datec.mm = 1;
				datec.dd = 0;
				datec.yy += 1;
			}
			else {
				datec.dd += n;
				return datec;
			}
		}
		
	}
}

int main() {
	Date d = { 12,4,2018 };
	int days = 200;
	Date e=adddate(d, days);
	std::cout <<e.dd << " " << e.mm << " " << e.yy;
}