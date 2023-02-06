class A {
public:
	void f() {}
	static void g() {}
public:
	void h() {
		f();
		g();
	}
	static void k() {
		f();
		g();
	}
};

int main() {

}

/*
A non-static member function can call both static and non-static member 
functions.
A static member function can call only static member function.
*/