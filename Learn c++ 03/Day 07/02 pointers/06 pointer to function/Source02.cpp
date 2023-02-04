void f() {

}

void g() {

}

int h() {
	return 1;
}

int main() {
	void(*func_ptr)() = f;
	func_ptr();

	func_ptr = g;
	func_ptr();

	func_ptr = h; // Error because, the function pointer
					// signature is not compatible with
					// the signature of 'h' function.
}
