#include <assert.h>

int F();

class Integer {
public:
	Integer();
	Integer(int i);
public:
	int Get() const;
	void Set(int i);
private:
	int m_i;
};

Integer::Integer() : m_i(F()) /* note we are calling function 'F' to initialize m_i */ {}

Integer::Integer(int i) : m_i(i) {}

int Integer::Get() const {
	return m_i;
}

void Integer::Set(int i) {
	m_i = i;
}

int F() { return 1; }

int main() {
	Integer u;
	assert(u.Get() == 1);
}
