#include <assert.h>

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

Integer::Integer() : m_i(0) {}

Integer::Integer(int i) : m_i(i) {}

int Integer::Get() const {
	return m_i;
}

void Integer::Set(int i) : m_i(i) {}

int main() {
	Integer u;
	assert(u.Get() == 1);
}

/*
- Initialization list can be used only with constructors.
- It cannot be used with any other member function.
*/
