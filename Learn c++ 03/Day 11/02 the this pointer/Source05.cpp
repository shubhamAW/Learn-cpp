#include <iostream>
using namespace std;

struct Circle {
	int m_radius;

	void Print() {
		cout << this->m_radius << endl;
	}
};

int main() {
	Circle a = { 5 };
	a.Print();

	Circle b = { 10 };
	b.Print();
}
