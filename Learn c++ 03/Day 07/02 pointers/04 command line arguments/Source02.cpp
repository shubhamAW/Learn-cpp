#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int n = 0, sum = 0;

	for (int i = 1; i < argc; i++) {
		n = atoi(argv[i]);
		sum += n;
	}

	cout << sum << endl;
}
