#include "Clock.h"
#include <stdio.h>

Clock::Clock():m_hour(0),m_minute(0),m_second(0){}

Clock::Clock(int hour, int minute, int second) :m_hour(hour), m_minute(minute), m_second(second) {}

void Clock::Tick() {
	m_second++;
	if (m_second >= 60) {
		m_second = 0;
		m_minute++;
		if (m_minute >= 60) {
			m_minute = 0;
			m_hour++;
			if (m_hour >= 24) {
				m_hour = 0;
			}
		}
	}
}

void Clock::Time(char* time, int size) const{
	snprintf(time, size, "%02d:%02d:%02d", m_hour, m_minute, m_second);
}