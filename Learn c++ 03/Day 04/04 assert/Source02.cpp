#include<assert.h>

int Add(int u, int v);

int main() {
	int result = Add(2, 3);
	assert(result == 5);

}

int Add(int u, int v) {
	return u - v;
}