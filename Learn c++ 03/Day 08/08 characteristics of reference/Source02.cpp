int main() {
	int &j = nullptr;
	int &k = 1;
	int&& r = 1;
	int& arr[3];
}

/*
Sandeep Godbole  to  Everyone 10:32
/*
- Reference cannot be null.
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
- Array of references not possible.
*/

*/
