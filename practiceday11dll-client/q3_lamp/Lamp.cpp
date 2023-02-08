#include "Rectangle.h"

Lamp::Lamp():m_switchState(OffState){}

void Lamp::SwitchOn() {
	m_switchState = OnState;
}

void Lamp::SwitchOff() {
	m_switchState = OffState;
}

SwitchState Lamp::GetState() const {
	return m_switchState;
}
