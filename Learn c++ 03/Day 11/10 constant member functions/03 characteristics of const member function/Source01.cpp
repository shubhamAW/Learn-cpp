class Dummy {
public:
	void F();
	void G() const;
};

void Dummy::F() {}

void Dummy::G() const {}

int main() {
	Dummy u;
	u.F();
	u.G();

	const Dummy v;
	v.F();
	v.G();
}

/*
- A const function can be called on const and non-const object.
- A non-const function can be called only on non-const object.
- Thus, const member functions are versatile functions than non-const member functions.
- While declaring new class, try to declare member functions const wherever possible.
  If the purpose of the function is to allow mutation to data members then
  such function cannot be declared as const member function.
*/