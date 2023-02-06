class X {
public:
	void f() {

	}

	static void g() {

	}
public:
	void h() { // Non-static member can access both static and non-static members.
		f();
		g();
	}

	static void k() { // Static member function can access another static member.
		f();
		g();
	}
};

