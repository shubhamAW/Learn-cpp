class Calc {
public:
	static int Add(int u, int v);

};

int Calc::Add(int u, int v) {
	return u + v;
}

int main() {
	Calc calc;
	int result = calc.Add(1, 2);
	result = Calc::Add(1, 3);
}

/*
A static member function can only be called using both
	object of class & class name..

    When to declare member function as static?
  When implmentation of member function doesn't depends upon data members (state variables).
*/