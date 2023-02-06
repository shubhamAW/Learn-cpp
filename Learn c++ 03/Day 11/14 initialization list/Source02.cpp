class Integer {
private:
	int m_i;
public:
	Integer(int i) : m_i(i) {}
public:
	void SetI(int i) : m_i(i) {} // Error: Initialization list cannot be used with setter
};

int main() {
	Integer u(5);
}

/*
- Initialization list can be used only with constructor.
*/
