#pragma once

class Clock {
private:
	int m_hour, m_minute, m_second;

public:
	Clock();
	Clock(int hour, int minute, int second);

	void Tick();
	void Time(char* time, int size) const;
};