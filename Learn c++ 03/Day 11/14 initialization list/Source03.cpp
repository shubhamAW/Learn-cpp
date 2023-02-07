class Integer {

public:
	Integer(int i);
public:
	void SetI(int i); // Error: Initialization list cannot be used with setter

private:
	int m_i;
};

Integer::Integer(int i):m_i(i){}

void Integer::SetI(int i):m_i(i){}

int main() {
	Integer u(5);
}

/*
- Initialization list can be used only with constructor.
	Not with any other member function..
*/
