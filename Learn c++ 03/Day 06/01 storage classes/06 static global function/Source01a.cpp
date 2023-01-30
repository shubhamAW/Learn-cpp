void f();

int main() {
	f();
}

/*
- Like global variable, a global function can also be declared as static. 
- Static function is available to all other functions of the same translation unit
  in which it is defined.
- It is not available to functions which are defined in other translation units.
- static global functions / variables exhibit internal linkage.
- non-static global functions / variables exhibit external linkage.
*/
