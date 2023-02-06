class Math {
public:
	static int Add(int a, int b) {
		return a + b;
	}
};

int main() {
	Math m;
	int result = m.Add(1, 2);
	result = Math::Add(3, 4);
}

/*
- Static member function can be called using class name.
  It can also be called using object.
- 'this' pointer is absent in static member function.
- Static member function cannot be a constant member function.
*/