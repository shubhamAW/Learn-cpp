class Integer {
private:
	int m_i;
public:
	Integer(int i) : m_i(i) {}
};

int main() {
	Integer u(5);
}


/*
- Initialization list can be used to initialize data members only.
- It cannot be used to initialize or assign values to local or global variables.
*/