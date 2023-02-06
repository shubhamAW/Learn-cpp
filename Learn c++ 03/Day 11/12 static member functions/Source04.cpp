class A {
public:
	void f() { this; }
	static void g() { this; }
};

/*+
The 'this' pointer doesn't exist in static member function.
It exist only in non-static member functions.
*/