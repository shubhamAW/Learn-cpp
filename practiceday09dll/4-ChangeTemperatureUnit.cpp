#include"Header.h"

void Fahrenheit(Temperature& t) {
	//first check if it is in fahrenheit
	if (t.unit == "Fahrenheit") return;
	//celsius to fahrenheit
	t.value = 1.8 * t.value + 32;
}

void Celsius(Temperature& t) {
	//first check if is in celsius 
	if (t.unit == "Celsius") return;
	//change Fahrenheit to celsius
	t.value = (t.value-32)*(5/9);
}

void ChangeTemperatureUnit(Temperature& t, void (*fill)(Temperature t) {
	fill(t);
}