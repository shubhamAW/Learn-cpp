class A {
public:
	int m_i;
protected:
	int m_j;
private:
	int m_k;
public:
	void f() {
		m_i = 1;
		m_j = 2;
		m_k = 3;
	}
};


class B : protected A {
public:
	void g() {
		m_i = 1;
		m_j = 2;
		m_k = 3; //E
	}
};

class C : public B {
public:
	void h() {
		m_i = 1; 
		m_j = 2; 
		m_k = 3; //E
	}
};

int main() {
	A u;
	u.m_i = 1;
	u.m_j = 2; //E
	u.m_k = 3; //E

	B v;
	v.m_i = 1; 
	v.m_j = 2; //E
	v.m_k = 3; //E

	C w;
	w.m_i = 1; 
	w.m_j = 2; //E
	w.m_k = 3; //E
}