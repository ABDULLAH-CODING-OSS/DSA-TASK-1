#include "Student.h"
#include<iostream>
#include<string>
Student::Student(string n,int a,string s ,int p): name(n),age(a),section(s),phone(p) {

}
Student::Student() {

}

Student::~Student() {

}
void Student::display() const {
	cout << "The name is " << name << endl;
	cout << "The age is " << age << endl;
	cout << "The section is " << section << endl;
	cout << "The phone number is " << phone<<endl;

}
string Student::getName()const {
	return name;

}string Student::getSection()const {
	return section;

}
int Student::getAge()const {
	return age;
}int Student::getPhone()const {
	return phone;
}