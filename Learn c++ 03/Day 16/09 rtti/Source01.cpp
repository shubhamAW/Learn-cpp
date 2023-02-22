#include <typeinfo>

class Base {
public:
	virtual ~Base() {}
};

class Derived : public Base {
public:
	void F() {} // 'F' is a special member function of Derived
};

class Derived2 : public Base {
public:
	void G() {} // 'G' is a special member function of Derived2
};

void k(Base& base) {
	if (typeid(base) == typeid(Derived)) {
		(dynamic_cast<Derived*>(&base))->F();
	}
	else if (typeid(base) == typeid(Derived2)) {
		(dynamic_cast<Derived2*>(&base))->G();
	}
}

int main() {
	Derived u;
	k(u);

	Derived2 v;
	k(v);
}


/*
- RTTI stands for Runtime Type Information.
- typeid is an operator.
- The argument to typeid can be an object or a data type.
- It returns an object of type_info type.
- If 'n' is a variable of 'int' type, both typeid(n) and typeid(int) returns
  same type_info object. Hence expression such as typeid(n) == typeid(int)
  turns true. Expression such as typeid(n) == typeid(double) would turn false
  since typeid(double) would return a different type_info object which doesn't
  match with type_info object returned by typeid(n).
*/
