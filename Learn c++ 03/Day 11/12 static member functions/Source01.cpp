class Calc {
public:
	 int Add(int u, int v) ;

};

int Calc::Add(int u, int v)  {
	return u + v;
}

int main() {
	Calc calc;
	int result = calc.Add(1, 2);
	result = Calc::Add(1, 3);//Error : You cannot call using class..
}

/*
* A non-static function can be called only using an object of the class.
*/