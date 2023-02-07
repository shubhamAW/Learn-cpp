#include <crtdbg.h>
#include <assert.h>

#include "Integer.h"

int main() {
	{
		Integer a;
		a.Set(5);
		assert(a.Get() == 5);
	}
	_CrtDumpMemoryLeaks();
}

/*
- Resource is some aid that object would require to perform its own functions.
- During lifetime of an object, it may acquire resource at any point of time.
- One possible case could be at the begining of its lifetime i.e. in the constructor.
- Note it's not compulsory for an object to acquire resources in the constructor.
- It can acquire in any other function as well.
- Its obligation on object to release acquired resources.
- Again it can be performed at any point of time during lifetime of an object.
- It must however be completed before object is released.
- If not done the resource would get leaked.
- The last chance to release resources is in destructor,
  though it can be released in any other member function before.
*/
