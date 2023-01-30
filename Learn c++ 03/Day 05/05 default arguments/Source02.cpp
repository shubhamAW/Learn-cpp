int add(int u, int v = 0) {
	return u + v;
}

int main() {
	int result = 0;
	result = add(1, 2);
	result = add(5);
}

/*
- C++ has a feature called default argument using which default value can be given
  to the parameter (as given to 'v' of 'add' in the above program).
- Assigning default value to the parameter makes that parameter optional.
- If specific argument is mentioned to that parameter in the call,
  then that value is assigned to that paramter.
- If no argument is mentioned to that parameter in the call,
  then default value is assinged to that parameter.
*/
