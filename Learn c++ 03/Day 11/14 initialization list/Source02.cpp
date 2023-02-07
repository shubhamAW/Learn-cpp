class Integer {

public:
	Integer(int i);


private:
	int m_i;
};

Integer::Integer(int i):m_i(i) {
}

int main() {
	Integer u(5);
}


/*
- Initialization list can be used to initialize non-static data members only.
- Attempting to initialize static data member in initialization result in 
	compilation error.
- To initialize Data members, Between initialization list and body of  constructor 
	Always prefer initialization List.
*/