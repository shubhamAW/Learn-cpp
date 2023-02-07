#include <iostream>
#include<cstring>
#include<assert.h>
using namespace std;

#define SIZE 9

/* run perfectly fine..*/

class Clock {
private:
    int m_hour, m_minute, m_second;

public:
    Clock() {
        m_hour = 0;
        m_minute = 0;
        m_second = 0;
    }

    Clock(int hour, int minute, int second) {
        m_hour = hour;
        m_minute = minute;
        m_second = second;
    }

    void Tick() {
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
    void Time(char* time, int size) {
        snprintf(time, size, "%02d:%02d:%02d", m_hour, m_minute, m_second);
    }
};

int main() {
    Clock wallClock;
    char timeString[SIZE] = { 0 };
    wallClock.Time(timeString, SIZE);
    assert(strcmp(timeString, "00:00:00") == 0);

    for (int i = 0; i < 12345; i++)
        wallClock.Tick();
    wallClock.Time(timeString, SIZE);
    assert(strcmp(timeString, "03:25:45") == 0);

    Clock tableClock(10, 9, 59);
    tableClock.Tick();
    tableClock.Time(timeString, SIZE);
    assert(strcmp(timeString, "10:10:00") == 0);
}