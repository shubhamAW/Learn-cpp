class Dummy {
public:
	~Dummy();
	~Dummy(int n);
};

Dummy::~Dummy() {}

Dummy::~Dummy(int n) {}

int main() {
	Dummy obj;
}

/*
- Parameterized destructor is not allowed hence
  destructor overloading is not possible.
*/
