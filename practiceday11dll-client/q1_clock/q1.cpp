#include <iostream>
#include<cstring>
#include<assert.h>

#include "Clock.h"

using namespace std;


#define SIZE 9

/* run perfectly fine..*/


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