#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	int n = 0, sum = 0;
	const char * argv[] = { "49", "45", "5678", "9" };

	size_t argc = sizeof(argv) / sizeof(char*);

	for (size_t i = 0; i < argc; i++) { 
		n = atoi(argv[i]);        
		sum += n;                       
	}                                     

	cout << sum << endl;
}
