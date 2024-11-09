#ifndef AUTHOR_H
#define AUTHOR_H
#include <string>
#include"Book.h"
using namespace std;

class Author
{
private:
	string name;
	Book* books[10];
	int bookcount;
public:
	Author(string name);
	~Author();
	void addBook(Book* book);
	void displayBooks();
	string getName() const { 
		return name; 
	}


};
#endif

