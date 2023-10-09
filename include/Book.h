#ifndef Book_H
#define Book_H

#include "Author.h"

class Book {
private:
    int book_id;
    std::string title;
    Author author;
    std::string genre;
    int available_quantity;
    int total_quantity;

public:
    void BorrowBook();
    void ReturnBook();
};

#endif