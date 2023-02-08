#include "Dice.h"
#include <stdlib.h>

void Dice::Roll() {
	m_faceValue = (rand() % 6) + 1;
}

int Dice::GetFaceValue() const {
	return m_faceValue;
}