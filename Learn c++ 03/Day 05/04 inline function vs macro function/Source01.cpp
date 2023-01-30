#define MIN(i, j)(i < j ? i : j)

inline int min(int i, int j) {
	return (i < j ? i : j);
}

int main() {
	int a = 1, b = 2, c = 0;
	c = MIN(++a, ++b); // a = 2, b = 3, c = 2

	int u = 1, v = 2, w = 0;
	w = min(++u, ++v); // u = 2, v = 3, w = 2
}

/*
- Macro expansion is done by preprocessor.
- Inline function expansion is done by compilation phase.
- If expression such as ++a is passed to macro, then that expression
  is substituted as it is whereas in case of inline functio,
  the result of the expression is substituted and not the expression
  itself.
- The parameters of macro function doesn't have data types.
  Whereas inline function parameters have data type specification.
  So inline functions are more type safe then macros.
*/