int main() {
	int i = 1;
	int* pi = &i;

	double d = 3.14;
	double* pd = &d;


	pi = &d;
}

/*
- Assuming 'i' is located at 100, there are two facts associated with it:
  - 100 is an address.
  - @ 100, int is stored.
- Why we could assign address of 'i' to 'pi'?
  It is because 'pi' is compatible with the facts of the address 100.
- Assuming 'd' is located at 104, there are two facts associated with it:
  - 104 is an address.
  - @ 104, double is stored.
- Why we could assign address of 'd' to 'pd'?
  It is because 'pd' is compatible with facts of the address 104.
- Why we couldn't assign address of 'd' to 'pi'?
  'pi' is not compatible with facts of address 104.
*/