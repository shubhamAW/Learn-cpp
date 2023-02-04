int g = 1;

int& f();

int main() {
	g = 5;
	int& h = f(); // Before call int& h = f(); and after call int& h = t;
	h = 10;
}

int& /* t */ f() {
	int& i = g;
	return i; // int & t = i;
}
