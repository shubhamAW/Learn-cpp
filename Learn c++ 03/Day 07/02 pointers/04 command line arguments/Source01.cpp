#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
	for (int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
	}
}

/*
- Note argc and argv are not keywords.
- argc and argv can be replaced by any other name.
- Command line arguments can be inputted from Visual Studio.
  Click Project > Properties > Debugging. 
  Specify arguments in Command Line Arguments property.
- Note program always receive command line arguments as strings
  i.e. an integer, a real number, boolean value, date or any other
  value is received as string.
  Hence to process such argument type conversion is required from
  string to corresponding type.
- First argument is always full name of the executable.
*/