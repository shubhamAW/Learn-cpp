int main() {
	int *pn = new int(1);
	delete pn;
	pn = nullptr;
}

/*
- The argument passed after the type in new expression is used 
  to initialize memory block allocated by new.

  NULL -> macro.
  nullptr -> keyword
*/