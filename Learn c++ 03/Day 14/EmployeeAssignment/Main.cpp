
#include "Employee.h"
#include <cassert>
#include <crtdbg.h>
#include<string>

int main() {
	Employee u("Abc", 25, "Accounts");
	assert(strcmp(u.GetName(), "Abc") == 0);
	assert(u.GetAge() == 25);
	assert(strcmp(u.GetDepartment(), "Accounts") == 0);

	Employee v("Defgh", 27, "Legal");
	assert(strcmp(u.GetName(), "Defgh") == 0);
	assert(u.GetAge() == 27);
	assert(strcmp(u.GetDepartment(), "Legal") == 0);

	Employee w(v);
	w = u;

	_CrtDumpMemoryLeaks();
}