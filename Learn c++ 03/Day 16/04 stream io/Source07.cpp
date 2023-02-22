#include <sstream>
#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

int main()
{
	ostringstream os;
	os << "the sum of 5 + 2 is " << 7 << endl;
	cout << "the sum of 5 + 2 is " << 7 << endl;
	string s = os.str();
	MessageBoxA(NULL, os.str().c_str(), "Learn C++", MB_OK);
	OutputDebugStringA(os.str().c_str());
	cout << s;

	istringstream is("100 200");
	int a, b;
	is >> a >> b;

	return 0;
}

