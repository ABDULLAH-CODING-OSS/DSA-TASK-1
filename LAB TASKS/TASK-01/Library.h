#ifndef LIBRARY_H
#define LIBRARY_H
#include"Book.h"
#include"Author.h"


class Library
{
public:
	Book* books[20];
	Author* authors[10];
	int bookcount;
	int authorcount;
	Library();
	~Library();
	void addBook(Book* book, Author* author);
	void displayBooksByAuthor(string authorName);
	void displayAllbooks();
};

#endif 