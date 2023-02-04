int main() {
	int a = 1;
	const int b = 1;

	int& ra = a; // a non-const reference can refer to non-const referent
	int& rb = b; // a non-const reference cannot refer to const referent

	const int& cra = a; // a const reference can refer to non-const referent
	const int& crb = b; // a const reference can refer to const referent
}

/*
- non-const reference can refer to non-const referent only.
- const reference can refer to const as well as non-const referent.
*/


/*
* int main() {
	int& i = nullptr; // lvalue reference cannot be assigned nullptr
	int&& j = nullptr; // rvalue reference cannot be assigned nullptr
	int& k = 1; // rvalue cannot be assigned to lvalue reference
	const int& l = 1; // but it can be assigned to const lvalue reference
	int&& m = 0; // though, nullptr cannot be assigned to rvalue reference, 0 or any other number can be assigned
	int& arr[3]; // array of references not possible
}

/*
- What is lvalue?
  lvalue is an expression whose address can be taken.
- What is rvalue?
  rvalue is an expression whose address can not be taken.
- A reference that can refer to lvalue is known as lvalue reference and is written with
  single '&' (ref).
- A reference that can refer to rvalue is known as rvalue reference and is written with
  double '&' (ref).
- Note, lvalue reference can refer to lvalue and rvalue reference can refer to rvalue.
  Following rule however is an exception: In absence of rvalue reference 
  a const lvalue refernce can refer to rvalue.
- null
*/