#include <iostream>
using namespace std;

int main() {
	int i = 1, j = 1;
	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

	cout << a << endl;
	cout << "&a[i] = " << &a[i] << ", a + i = " << a + i << endl;
	cout << "&a[i][0] = " << &a[i][0] << ", *(a + i) = " << *(a + i) << endl;
	cout << "&a[i][j] = " << &a[i][j] << ", *(a + i) + j = " << *(a + i) + j << endl;
	cout << "a[i][j] = " << a[i][j] << ", *(*(a + i) + j) = " << *(*(a + i) + j) << endl;
	return 0;
}
