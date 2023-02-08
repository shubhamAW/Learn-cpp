class Dummy {
public:
	Dummy();
	~Dummy();
};
Dummy::Dummy(){}
Dummy::~Dummy() {}

int main() {
	Dummy u;
	u.Dummy(); // constructor never will be called explicitly...
	u.~Dummy(); // ok.. explicit call to destructor..
}

/*
- Explicit call to a destructor is possible.
- Note constructor cannot be called explicitly.
- Usually we donot call destructor explicitly.
*/