int main() {
	/* struct definition */
	struct Point {
		int x;
		int y;
	};

	struct Point3D {
		int x;
		int y;
		int z;
	};

	/* struct variable definition and initialization */
	Point a = { 0, 0 };
	Point b = { 1, 5 }, c = { -10, -3 };

	/* accessing struct members */
	int x = a.x;
	int y = a.y;

	/* struct variable assignment */
	a = b;

	Point3D d = { 1, -1, -1 };
	// c = d; // Error variables are of dissimilar struct types
	c.x = d.x; // OK
	c.y = d.y; // OK

	/* defining pointer to struct */
	Point* pa = &a;

	/* accesing struct members using pointer - method 1 */
	(*pa).x = -3;
	(*pa).y = 7;

	/* accesing struct members using pointer - method 2 */
	pa->x = 8;
	pa->y = 2;

	/* dynamically allocating struct */
	size_t count = 2;
	pa = new Point[count]{ {-1, -1},  {1, 1} };
	x = pa[0].x;
	y = pa[0].y;
	delete[] pa;
	pa = nullptr;

	/* reference to struct */
	Point& ra = a;
	ra.x = 5;
	ra.y = -5;
}

/*
- The structure 'Point' is called as user defined type (UDT).
- The 'x' and 'y' are called as data members.
- Preferrably struct is declared globally, so that it is available to
  all functions of that translation unit.
- Typically structs are declated in header file. And header file is included
  at the top of the .cpp file.
- When variables in an assignment are of same udt then the assignment can be done
  directly between them.
- When variables in an assignment are of different udts then the assignment is to be done
  member-wise.
- Use '.' operator while accessing members using variable/reference.
- Use '->' operator while accessing members using pointer.
*/