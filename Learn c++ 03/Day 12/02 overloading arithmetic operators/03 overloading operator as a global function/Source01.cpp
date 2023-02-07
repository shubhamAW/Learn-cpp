#include <assert.h>
#include "Integer.h"

int main() {
	Integer u(5), v(10), w;
	w = u + v; // w = u + v; executed as w = u.operator+(v);
}
