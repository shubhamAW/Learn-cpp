#include <iostream>
using namespace std;

struct Person {
	char name[60];
	int age;
};

int main() {
	Person person = { "Kshitij", 35 };
	cout << "Name: " << person.name << " Age: " << person.age << endl;

	Person persons[] = { {"Varun", 35}, {"Shekhar", 39} };
	for (size_t i = 0; i < sizeof(persons) / sizeof(Person); i++) {
		cout << "Name: " << persons[i].name << " Age: " << persons[i].age << endl;
	}
}

/*
- Just as a scalar can be a member of a structure, so can an array. 
*/