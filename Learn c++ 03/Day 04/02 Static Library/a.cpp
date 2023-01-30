#include<cstdio>

int Add(int u, int v);

int main() {
	int result = 0;
	result = Add(3, 2);
	printf("%d", result);
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