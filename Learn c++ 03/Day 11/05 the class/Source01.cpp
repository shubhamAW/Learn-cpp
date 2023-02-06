class Dummy {
public:
	int n;
};

int main() {
	Dummy u;
	u.n = 1;
}

/*
- The default access of struct is public.
- The default access of class is private.
- The default access of struct or class can be overriden with the 
  help of suitable access specifiers.
*/