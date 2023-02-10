class Derived {};

int main() {
	Derived d;
}
/*
- List implicitly defined members of the Derived class
  - Because the class Derived is not written with any constructor, there
	exist compiler implemented default constructor. In future, if author of Derived class
	writes a constructor, compiler will stop supplying default constructor.
  - Other implicitly defined members are: copy constructor, copy assignment operator,
	move constructor, move assignment operator and destructor.
*/