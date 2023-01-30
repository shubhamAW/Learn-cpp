#define PI 3.1428 // PI is known as macro variable



int main() {
	int radius = 10;
	double area = PI * radius * radius;
	double volume = 4.0 / 3.0 * PI * radius * radius * radius;
}


/*
* When program is compiled, preprocessor replaces PI by its corresponding value.
* Note macro variable is not a memory variable hence no memory is reserved for macro variable.
* Macro variable improves program readability and maintenance.
*/


