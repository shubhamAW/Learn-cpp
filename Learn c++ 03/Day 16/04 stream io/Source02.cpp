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

	string s;
	fin >> s;
	do {
		cout << s << endl;
		fin >> s;
	} while (!fin.eof());


	fin.close();
}

/*
- Above program reads input file, word by word.
*/