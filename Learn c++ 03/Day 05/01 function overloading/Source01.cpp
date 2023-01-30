int add(int n1, int n2 );
double add(double n1, double n2);

int main() {
	int a = 1, b = 2, c = 0;
	c = add(a, b);

	double i = 1.0, j = 2.0, k = 0.0;
	k = add(i, j);
}

int add(int n1, int n2) {
	return n1 + n2;
}

double add(double n1, double n2) {
	return n1 + n2;
}

/*
* Function overloading is a feature of c++.
* When two or more functions share same name but differ in
  parameter list, then those functions are said to form function overloading.
* The difference in the parameter list must be in the terms of 
  type difference of parameters or number of parameters or
  the order of their types and not in terms of their names.
* When C++ compiler compiles CPP code, it modifies function name.
  This phenomenon is known as name mangling(or name decoration). While mangling name,
  it considers following aspects of the function:
  1. Name of the function
  2. Number of Parameters
  3. Types of Parameters
  4. Order of Parameters Types
  5. Namespace
  6. const clause and access speicifer in case member functions etc.
* C++ uses name mangling to provide function overloading feature.
*/