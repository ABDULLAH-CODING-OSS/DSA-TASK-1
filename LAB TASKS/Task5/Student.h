#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;



class Student
{
private:
	string name;
	int age;
	string section;
	int phone;
public:
	Student();
	~Student();
	Student(string n, int a, string s, int p);
	string getName()const;
	int getAge()const;
	string getSection()const;
	int getPhone()const;

	void display() const;


};

#endif

