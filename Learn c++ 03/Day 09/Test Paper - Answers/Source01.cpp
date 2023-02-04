// 0.5 mark
#include<stdio.h>

// 1.5 marks
struct Complex {
	int r;
	int i;
};

// 3 marks
Complex Add(const Complex &u, const Complex &v) {
	Complex t;
	t.r = u.r + v.r;
	t.i = u.r + v.r;
	return t;
}

int main() {
	Complex a{ 1, 1 }, b{ 2, 2 }, c{ 0, 0 };
	c = Add(a, b);
	printf("c.r = %d, c.i = %d\n", c.r, c.i);
}
