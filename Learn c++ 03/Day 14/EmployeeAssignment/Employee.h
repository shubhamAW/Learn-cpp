#pragma once



class Employee {
public:
	Employee(const char* pname, int age, const char* department);
	~Employee();
	// Employee(const Employee& other); //derived copy constructor
public:
	const char* GetName() const;
	int GetAge() const;
	const char* GetDepartment() const;

	void SetDepartment(const char* department);
	void SetAge(int age);
	void SetName(const char* name);

public:
	//Employee& operator=(const Employee& other);//derived assignment operator

private:
	 char *m_pname;
	 char* m_department;
	 int m_age;
};