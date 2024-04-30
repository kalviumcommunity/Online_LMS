#include "Book.h"

int Book::book_count = 0;

Book::Book(int id, const std::string title, const Author& author, const std::string genre, int available_quantity, int total_quantity)
    : book_id(id), title(title), author(author), genre(genre), available_quantity(available_quantity), total_quantity(total_quantity) {
    book_count++;
}

void Book::BorrowBook() {
    // Implement book borrowing logic
}

void Book::ReturnBook() {
    // Implement book returning logic
}

void Book::getBookCount() {
    std::cout << "Total number of Books: " << book_count << std::endl; 
}

bool Book::isAvailable() const {
    return available_quantity > 0;
}