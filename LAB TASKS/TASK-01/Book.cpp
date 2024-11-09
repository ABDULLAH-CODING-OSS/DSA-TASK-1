#include "Book.h"
#include<iostream>
#include<string>
using namespace std;
Book::Book(string title , string isbn , int year) : title(title),isbn(isbn),year(year) {
};
Book::~Book() {};

void Book::displayBookDetails() const {
	cout << "The Book Name : " << title << " " << " ISBN no : " << " " << "Year is  : " << year << endl;

}