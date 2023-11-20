#include <iostream>
#include <vector>
#include "include/Author.h"
#include "include/Admin.h"
#include "include/Book.h"
#include "include/Member.h"
#include "include/User.h"

using namespace std; 

void displayMenu();

int main() {
    // Create instances of Authors, Books, Admins, and Members
    vector<Book*> libraryBooks;
    Author author1(1, "John Doe");
    Admin admin1(1, "admin", "admin@gmail.com", "adminpass");
    Member member1(2, "member", "member@gmail.com", "memberpass");
    author1.display();
    libraryBooks.push_back(new Book(1, "Book 1", author1, "Genre 1", 5, 10));
    libraryBooks.push_back(new Book(2, "Book 2", author1, "Genre 2", 3, 7));
    // Author::getAuthorCount();
    // Member::getMemberCount();
    // Book::getBookCount();

    // Display a menu and handle user input
    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                // List Books
                // Implement the logic for listing book
                break;
            case 2:
                // Borrow a Book
                // Implement the logic for borrowing a book
                break;
            case 3:
                // Return a Book
                // Implement the logic for returning a book
                break;
            case 4:
                for(auto book : libraryBooks) {
                    delete book;
                }
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 4);

    // To be implemented in future milestones
    return 0;
}

 void displayMenu() {
    cout << "Library Management System" << endl;
    cout << "1. List Books" << endl;
    cout << "2. Borrow a Book" << endl;
    cout << "3. Return a Book" << endl;
    cout << "4. Exit" << endl;
    cout << "Select an option: ";
}