void main() {
	signed int a = 123;
	unsigned int b = 123U;
	long int c = 123L;
	short int d = 123;
	unsigned long int e = 123UL;
	unsigned short int f = 123;
	signed long int g = 123;
	signed short int h = 123;
}

/*
* By default int is signed.
* signed and unsigned are mutually exclusive hence we can use only one of them at a time.
* Similarly, long and short are also mutually exclusive hence we can use only one of them at a time.
* When signed, unsigned, long, short is used, then mentioning of int is optional.
  If int is not mentioned, variable is assumed to be int.
* All type modifiers (signed, unsigned, long, short) can be applied to int.
* Size of int and long int is 4 bytes. So there is no difference between int and long int.
* Size of short int is 2 bytes.
*/