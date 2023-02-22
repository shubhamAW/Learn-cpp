#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ifstream fin("dictionary.txt"); // the file will be opened in ios::in mode
	if (!fin) {
		cout << "File is not opened. Exiting the application.";
		return 0;
	}

	int ch = 0;
	while (!fin.eof()) {
		ch = fin.get();
		cout << static_cast<char>(ch) << endl;
	}

	fin.close();
}

/*
- Above program reads input file, character by character.
*/