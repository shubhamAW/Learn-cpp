#include<cstdio>

#include "b.h"



int main() {
	int result = 0;
	result = Add(1,2);
	printf("%d", result);
	printf("PI=%lf", PI);
}

/*
* command shells
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
*/