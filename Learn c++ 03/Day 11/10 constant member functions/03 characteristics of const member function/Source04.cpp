class Dummy {
public:
	void F();
	void G() const;
public:
	void H();
	void K() const;
};

void Dummy::F() {}

void Dummy::G() const {}

void Dummy::H() {
	F();
	G();
}

void Dummy::K() const {
	F();
	G();
}

int main(){}

/*
- A non-const member function can call const as well as non-const member functions.
- A const member function can call only const member functions.
*/
