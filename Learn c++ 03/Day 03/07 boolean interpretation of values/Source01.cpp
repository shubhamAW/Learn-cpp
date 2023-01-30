int main() {
	bool u = false;

	u = static_cast<bool>(-123);
	u = 0;
	u = static_cast<bool>(123);

	u = static_cast<bool>(-3.14);
	u = 0.0;
	u = static_cast<bool>(3.14);
}

/*
How numbers are interpreted from boolean point of view?
* Except 0, all +ve or -ve numbers are interpreted as true.
* 0 is interpreted as false.
*/