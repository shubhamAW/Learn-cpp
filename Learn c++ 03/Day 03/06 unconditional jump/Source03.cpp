#include <iostream>
using namespace std;

#define R 2
#define C 3

int main() {
	int n[R][C] = { {4, 5, 1}, {2, 7, 8} };
	int u = 0;

	cout << "Enter a Number: ";
	cin >> u;

	bool found = false;

	for (int r = 0; r < R; r++) {
		for (int c = 0; c < C; c++) {
			if (u == n[r][c]) {
				found = true;
				goto PRINT_MESSAGE;
			}
		}
	}

PRINT_MESSAGE:
	if (found)
		cout << "Number is present is the array" << endl;
	else
		cout << "Number is not present is the array" << endl;

}

/*
- Avoid goto.
- If at all you want to use it then use it for forward jump only.
- Overuse of goto results into tangled code.
*/
