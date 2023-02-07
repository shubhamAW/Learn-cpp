#include <assert.h>

void F();

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

Integer::Integer() : m_i(F()) /* note we cannot call function 'F' here since its not returning value */ {}

Integer::Integer(int i) : m_i(i) {}

int Integer::Get() const {
	return m_i;
}

void Integer::Set(int i) {
	m_i = i;
}

void F() {}

int main() {
	Integer u;
	assert(u.Get() == 1);
}