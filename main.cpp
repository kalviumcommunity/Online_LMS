#include <iostream>
#include <vector>
#include "include/Author.h"
#include "include/Admin.h"
#include "include/Book.h"
#include "include/Member.h"
#include "include/User.h"

using namespace std; 

int main() {
    // Create instances of Authors, Books, Admins, and Members
    vector<Book> libraryBooks;
    Author author1(1, "John Doe");
    Admin admin1(1, "admin", "admin@gmail.com", "adminpass");
    Member member1(2, "member", "member@gmail.com", "memberpass");
    author1.display();
    libraryBooks.push_back(Book(1, "Book 1", author1, "Genre 1", 5, 10));
    libraryBooks.push_back(Book(2, "Book 2", author1, "Genre 2", 3, 7));
    Author::getAuthorCount();
    Member::getMemberCount();
    Book::getBookCount();

    // To be implemented in future milestones
    return 0;
}
