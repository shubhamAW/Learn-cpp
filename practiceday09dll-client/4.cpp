#include "Header.h"
#include<assert.h>



int main() {
    Temperature t{ 37.5, Celsius};
    ChangeTemperatureUnit(t, Fahrenheit);
    assert(t.value == 99.5 && t.unit == "Fahrenheit");
}
