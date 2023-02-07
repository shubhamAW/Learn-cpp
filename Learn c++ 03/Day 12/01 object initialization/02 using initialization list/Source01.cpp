#include <assert.h>
#include "Integer.h"

int main() {
	Integer u(5);
	assert(u.Get() == 5);

	u.Set(10);
	assert(u.Get() == 10);
}