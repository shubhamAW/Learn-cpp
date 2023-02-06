class A {
public:
	void f() const {}
	static void g() const {}
};

/*
static member functions cannot be const functions.
Non-static member functions however can be.
*/