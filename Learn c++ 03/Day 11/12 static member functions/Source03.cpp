class Dummy {
public:
	void f() {}
	static void g() {}
public:
	void h() {
		f();
		g();
	}
	static void k() {
	//	f();
		g();
	}
};

int main() {
	Dummy dummy;
	dummy.h();
	Dummy::k();
	Dummy::g();
}

/*
A non-static member function can access both static and non-static members.
A static member function can access only static member .
*/