#pragma once

enum SwitchState {
	OffState,
	OnState,
};

class Lamp {
public:
	Lamp();
	void SwitchOn();
	void SwitchOff();

	SwitchState GetState() const;

private:
	SwitchState m_switchState;
};