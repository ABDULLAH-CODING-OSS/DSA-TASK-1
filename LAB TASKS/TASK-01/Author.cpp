#include "Author.h"
#include<iostream>
#include "Book.h"
using namespace std;
Author::Author(string n):name(n),bookcount(0) {

}
Author::~Author(){}
void Author::addBook(Book*book){
	if (bookcount < 10) {
		books[bookcount++]=book;

	}
	else {
		cout << "Cannot add more books" << endl;
	}

}
void Author::displayBooks(){
	cout << "Books by  : " << name << " : " << endl;
	for (int i = 0; i < bookcount; i++) {
		books[i]->displayBookDetails();
	}

}