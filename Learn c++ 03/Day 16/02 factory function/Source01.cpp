#include <crtdbg.h>
#include <assert.h>

#include "PointFactory.h"

int main() {
	PointFactory pointFactory;

	IPoint* ppoint = static_cast<IPoint*>(pointFactory.CreatePoint());
	assert(ppoint->GetX() == 0 && ppoint->GetY() == 0);

	ppoint->SetX(1);
	ppoint->SetY(5);
	assert(ppoint->GetX() == 1 && ppoint->GetY() == 5);

	IPoint* ppoint2 = ppoint;
	ppoint2->AddRef();
	assert(ppoint2 == ppoint);
	assert(ppoint2->GetX() == 1 && ppoint2->GetY() == 5);

	ppoint->Release();
	ppoint = nullptr;

	ppoint2->Release();
	ppoint2 = nullptr;

	_CrtDumpMemoryLeaks();
}

/*
- 'IPoint' is an interface class.
- 'Point' is an implementation class.
*/

