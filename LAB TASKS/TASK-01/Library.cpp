#include "Library.h"
#include<iostream>
#include"Book.h"
#include"Author.h"
using namespace std;
Library::Library() :bookcount(0), authorcount(0) {

}
Library::~Library() {

}
void Library::addBook(Book* book, Author* author) {
	if (bookcount < 20) {
		books[bookcount++] = book;
	}
	else {
		cout << "cannot add more book library is full " << endl;
	}
	bool flag = false;
	for (int i = 0; i < authorcount; i++) {
		if (authors[i] == author) {
			flag = true;
			break;
		}
	}
	if (!flag && authorcount < 10) {
		authors[authorcount++] = author;
	}
	author->addBook(book);
}
void Library:: displayBooksByAuthor(string authorName) {
	bool found = false;
	for (int i = 0; i < authorcount; i++) {
		if (authors[i]->getName() == authorName) {
			authors[i]->displayBooks();
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "No book founds " << authorName << endl;
	}
}
void Library :: displayAllbooks() {
	cout << "All books in library: " << endl;
	for (int i = 0; i < bookcount; i++) {
		books[i]->displayBookDetails();
	}
}
