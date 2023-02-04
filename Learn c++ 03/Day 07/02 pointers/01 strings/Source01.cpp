int main() {
	char s[] = "Hello, World";
	const char* ps = "Hello, World";
	const char* ps2 = "Hello, World";
	s[7] = 'w';
   // ps[7] = 'w'; // results into compilation error
}

/*
- The string literal such as "Hello, World" is stored in constant memory.
- It is terminated by a null character.
- When char s[] = "Hello, World" statment is executed, a copy of
  "Hello, World" is stored in an array. Thus there exist two
  "Hello, World" strings in the process, one in the constant
  memory and other in the array 's' in stack memory.
  The string stored in 's' can be modified.
- When const char * ps = "Hello, World" statement is executed, the pointer
  'ps' is filled with the address of memory location where
  "Hello, World" string literal is located in constant memory.
  Thus no local copy of "Hello, World" is created like 's'.
  The string cannot be modified, since it is stored in constant memory which is 'read only'.

- Why string stored in constant memory is not allowed to modify?
  It's possible to have more than one pointer to point to string stored in constant memory.
  If modification is allowed, they all will see the modification.
  And probably, this is what a developer doesn't want.
  Hence modifications to string literals is not allowed.
  Such string literals are called as immutable strings.
*/