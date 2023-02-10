#pragma once
class Person {
public:
	Person(const char* pname, int age);
	Person(const Person& obj);
	~Person();
public:
	int GetAge() const;
	const char* GetName() const;
	void SetAge(int age); // age > 0 and age < m_maxAge
	void SetName(const char* pname); // pname != nullptr
	Person& operator=(const Person& p);
	
private:
	char* m_pname;
	int m_age;
private:
	static int m_maxAge;
};



