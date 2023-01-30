int i = 1;

void f();
void k();

int main() {
	i = 5;
	f();
	k();
}

void f() {
	i = 10;
}


/*
- While working with global variable, we define global variable
  in one implementation file (.cpp) and declare in header file.
  And we include that header in other implementation files as needed.
- The declaration of a global variable is done with the help of 'extern' keyword.
- Note only global variable can be declared i.e. local variable cannot be declared,
  it can only be defined.
- What is the difference between declaration and defintion?
  When a symbol is defined, memory resource is consumed.
  When a symbol is declared, no memory resource is consumed.
*/