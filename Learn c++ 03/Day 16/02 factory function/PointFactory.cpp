#include "PointFactory.h"

void* PointFactory::CreatePoint() {
	return new Point;
}