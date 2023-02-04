#include <iostream>
#include <cstring>
using namespace std;

#include"Header.h"


int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";
    char* result = appendString(str1, str2);
    cout << result << endl;
    delete[] result;
    return 0;
}