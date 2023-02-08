#include <assert.h>
#include "Integer.h"

int main() {
	Integer a = 5;
	Integer b = a;
	assert(a.Get() == b.Get());

}
