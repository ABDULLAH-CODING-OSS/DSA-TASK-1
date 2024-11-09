#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class Book
{
private:
	string title;
	string isbn;
	int year;
public:
	Book(string title,string isbn,int year);
	~Book();
	void displayBookDetails() const;


};
#endif

