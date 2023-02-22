#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream fout("dictionary.txt");
	if (!fout) {
		cout << "File is not opened. Exiting the application.";
		return 0;
	}

	fout << "F" << '\t' << "A.dll" << endl;
	fout << "G" << '\t' << "A.dll" << endl;
	fout << "H" << '\t' << "B.dll" << endl;
	fout << "K" << '\t' << "B.dll" << endl;

	fout.close();
}

/*
- By default, when mode is not mentioned, ofstream object opens file
  in ios::out mode. Note ios::out is a overwrite mode. All the data present in the
  file is lost and there is no way to get it back.
- The ofstream object mode can be one of following: ios::out, ios::app and
  ios::ate. ios::out and ios::ate opens file in overwrite mode, while ios::app
  opens file in append mode.
- In append mode, previous contents are preserved, and new contents get appended to\
  the file.
- ! operator has been overloaded in both ofstream and ifstream classes.
  When used alongwith object of ofstream, it tells us if the file was opened
  successfully or was it a failure.
*/