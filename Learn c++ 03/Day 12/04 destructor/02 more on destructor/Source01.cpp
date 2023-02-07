class Dummy {
public:
	~Dummy();
};

Dummy::~Dummy() {}

int main() {
	Dummy u;
	u.~Dummy();
}

/*
- Explicit call to a destructor is possible.
- Note constructor cannot be called explicitly.
- Usually we donot call destructor explicitly.
*/