#include "b.h"

const double PI = 3.14;

int Add(int u, int v) {
	return u + v;
}

/*
- _declspec(dllexport) is known as decorator.
- The symbol on which _declspec(dllexport) is written, such symbol is exported from the DLL.

- For symbol to be accessible from other modules, it has to be exported from DLL.

- Symbols which are NOT written with _declspec(dllexport) are called as 'private symbols'.
- Private symbols are not directly accesible to other modules.
- Usually private symbols are written to help exported symbols.
*/