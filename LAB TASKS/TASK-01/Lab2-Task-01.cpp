

#include "Author.h"
#include "Book.h"
#include <iostream>
using namespace std;

int main() {
    Author author1("Abdullah Javed");

   
    Book book1("ALICE", "978-0439708180", 1997);
    Book book2("MURDER MYSTERY", "978-0439708181", 1998);

    author1.addBook(&book1);
    author1.addBook(&book2);

    author1.displayBooks();  

    return 0;
}
