#include <iostream>
using namespace std;

#define R 2
#define C 2

void print(int m[][C], int rows);

int main() {
	int m[R][C] = { {1, 2}, {3, 4} };
	print(m, R);
}

void print(int m[][C], int rows) {
	int cols = C;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << m[i][j] << endl;
		}
	}
}
