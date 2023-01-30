#include <ctime>
#include <cstdlib>

#define R 3
#define C 3

void main() {
	int a[R][C] = { 0 };
	int i = 0, r = 0, c = 0;

	for (i = 1; i <= R * C; i++) {
		while (1) {
			r = rand() % R;
			c = rand() % C;
			if (a[r][c] != 0)
				continue;
			a[r][c] = i;
			break;
		}
	}
}

/*
* Nested loop
*/