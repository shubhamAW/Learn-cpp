#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	ifstream fin("dictionary.txt"); // the file will be opened in ios::in mode
	if (!fin) {
		cout << "File is not opened. Exiting the application.";
		return 0;
	}

	const size_t size = 100;
	char buffer[size] = { 0 };
	while (!fin.eof()) {
		fin.getline(buffer, size, '\n');
		cout << buffer << endl;
	}

	fin.close();
}

/*
- Above program reads input file, line by line.
*/