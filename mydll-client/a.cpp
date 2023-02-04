#include<cstdio>

#include "b.h"

int main() {
	int result = 0;
	result = Add(3, 2);
	printf("%d", result);
	//printf("PI=%lf\n", PI);

}

/*
* _declspec(dllimport) is known as decorator.
* The symbol on which _declspec(dllimport) is written, implies that the symbol is imported from some DLL.
*/

/*
* When linker is invoked with /DLL switch, it results into 3 files viz. .dll, .exp and .lib.
* The .lib file is known as import library.
* Import library is different from static library. Typical, static library contains binary code of symbols.
* Import library contains names of the symbols exported from DLL. It does't contain symbol code.
* Actual definition of symbols is present in .dll.
*/



/*
* cl /c b.cpp /DB_EXPORTS
* cl /c b.cpp  -> make a b.obj file
* link /DLL b.obj -> b.exp b.dll b.lib
*		b.lib -> index(content) -> small in size
*		b.dll -> contain all code.
*		b.exp -> 
* 
* cl /c a.cpp -> make a a.obj file
*link a.obj b.lib /OUT:myexe.exe 
* 
*/


/*
* command shells for a Static Link Library..
* 
* cl /c b.cpp -> makes b.obj file
* lib b.obj -> makes b.lib file
* 
* cl /c a.cpp -> makes a.obj file
* 
* link a.obj b.lib -> link a.obj file to b.lib library file.
* 
* 
* link a.obj b.lib /OUT:myexe.exe -> makes myexe.exe
* 
* lib b.obj c.obj  d.obj /OUT:mylib.lib
* 
*/