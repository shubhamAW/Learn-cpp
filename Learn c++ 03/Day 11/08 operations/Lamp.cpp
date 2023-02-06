#include "Lamp.h"


Lamp::Lamp() {
	m_LampState = OffState;
}

void Lamp::SwitchOn() {
	m_LampState = OnState;
}

void Lamp::SwitchOff() {
	m_LampState = OffState;
}

SwitchState Lamp::GetState() {
	return m_LampState;
}
