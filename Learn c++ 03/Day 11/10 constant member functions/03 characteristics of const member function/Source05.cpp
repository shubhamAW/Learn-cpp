class Dummy {
public:
	void F();
	void F() const;
};

void Dummy::F() {}

void Dummy::F() const {}

int main() {
	Dummy u;
	u.F();

	const Dummy v;
	v.F();
}

/*
- Function overloading is possible between const and non-const non-static member functions.
*/