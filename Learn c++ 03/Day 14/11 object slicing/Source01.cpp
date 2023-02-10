class Base {
private:
	int m_i;
};

class Derived : public Base {
private:
	int m_j;
};

int main() {
	Base base1, base2;
	Derived derived1, derived2;

	base1 = base2;

	derived1 = derived2;

	base1 = derived2; // object slicing

	derived1 = base2;
}