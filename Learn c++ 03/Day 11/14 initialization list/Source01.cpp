class Integer {

public:
	Integer(int i);

private:
	int m_i;
};

Integer::Integer(int i) {
	m_i = i;  
}

int main() {
	Integer u(5);
}


