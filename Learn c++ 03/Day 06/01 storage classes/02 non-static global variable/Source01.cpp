int i = 1; 

void f();

int main() {
	i = 5;
	f();
}

void f() {
	i = 10;
}


/*
- A global variable is a variable defined outside all functions.
- 'i' is a global variable.
- The scope and lifetime of the global variable is entire application.
- Global variables cease to exist as soon as application execution terminates.
- An application may be composed of multiple source files.
- Global variable are accessible across all source files.
- Gloabl variables are located in static space (which is also known as data segment)
  or global data space.
*/
