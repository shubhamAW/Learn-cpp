#include <algorithm>

class X {
public:
	X() : i(0) {}
	int operator()() {
		i = i + 1;
		return i;
	}
private:
	int i;
};

int main() {
	int a[3];
	X u;
	std::generate(a, a + 3, u);
}