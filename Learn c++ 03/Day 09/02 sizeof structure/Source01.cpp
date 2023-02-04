struct Point {
	int x;
	int y;
};

struct Dummy {
	int n;
	char ch;
};

int main() {
	Point a = { 1, 1 };
	size_t aSize = sizeof(a);			// object passed as an argument to sizeof operator
	size_t pointSize = sizeof(Point);	// type passed as an argument to sizeof operator
	size_t dummySize = sizeof(Dummy);	// type passed as an argument to sizeof operator
}

/*
- The sizeof operator can be used with an object or type.
- Never rely on manually calculated size of a structure/structure variable.
- Always use sizeof operator to calculate size of a structure/structure variable.
*/
