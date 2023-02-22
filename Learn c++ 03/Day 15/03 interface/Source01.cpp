#include "TriangleFactory.h"

#define RELEASE(ptr) ptr->Release(); ptr = nullptr;

int main() {
	TriangleFactory triangleFactory;
	IRender * prender = triangleFactory.CreateInstance();
	prender->AddRef();
	prender->Draw();

	ISize *psize = dynamic_cast<ISize*>(prender);
	psize->AddRef();
	psize->GetHeight();
	psize->GetWidth();

	psize->Release();
	psize = nullptr;

	prender->Release();
	prender = nullptr;
}

/*
An interface is an abstract class in which exist only public pure virtual
functions. Thus every interface is an abstract class, however every
abstract class is not an interface.

In Microsoft programming, interface name is prefixed with letter 'I'. In CAA
programming, interface name is prefixed with 'CATI'.
*/
