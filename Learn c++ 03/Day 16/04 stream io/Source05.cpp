#include <fstream>
#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	Point p = { 1, 2 };

	ofstream fout("point.bin", ios::out | ios::binary);
	if (!fout) {
		cout << "File is not opened. Exiting the application.";
		return 0;
	}

	fout.write(reinterpret_cast<const char*>(&p), sizeof(Point));

	fout.close();
}

/*
- Above program writes an object to a file.
*/