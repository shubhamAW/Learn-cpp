class Base {
public:
	virtual void f() = 0; // pure virtual function
};

class Derived : public Base {
public:
	void f() override {

	}
};

class Derived2 : public Base {

};

int main() {
	Base base; // An abstract cannot be instatiated
	Derived derived;
	Derived2 derived2;
	Base * pbase = &derived;
	Base & rbase = derived;
}

/*
- 'f' of 'Base' is known as pure virtual or abstract function.
- When we know certain operation exist in the base class but we don't know its
  implementation, then we declare such function as pure virtual or abstract function.
- Having one or more abstract functions in a class, makes that class an abstract class.
- Note 'Base' class is now an abstract class.
- An abstract cannot be instatiated.
- The class which can be instatiated is called as concrete class. For ex. 'Derived' class is a concrete class.
- If abstract function of a base class is not implemented in derived class then that derived class also
  becomes an abstract class. Derived2 is an example of derived class turned abstract class.
- Pointer and reference of an abstract class can be defined.
*/

/*
This program introduces pure virtual function. A pure virtual function is
also known as 'abstract function'. A class which contains an
abstract function is known as 'abstract class'. Note, a single abstract
function is sufficient to turn a class into 'abstract'. Abstract class
cannot be instratiated. Hence we see error when we attempt to instantiate
'Base' class. An abstract class can act as a base class for one or more
derived classes. If a derived class doesn't provide its own overriding
implementation of abstract function then the derived class also turns
into abstract class. In other words, if we don't want derived class
to be abstract then we will have to implement all abstract functions
of base class.
*/