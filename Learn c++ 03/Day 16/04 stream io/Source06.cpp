#include <fstream>
#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	ifstream fin("point.bin", ios::in | ios::binary);
	if (!fin) {
		cout << "File is not opened. Exiting the application.";
		return 0;
	}

	Point p = { 0, 0 };

	fin.read(reinterpret_cast<char*>(&p), sizeof(Point));

	fin.close();
}

/*
- Above program reads object from file.
*/