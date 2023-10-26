#ifndef Book_H
#define Book_H

#include "Author.h"

class Book {
private:
    int book_id;
    std::string title;
    const Author& author;
    std::string genre;
    int available_quantity;
    int total_quantity;
    static int book_count;

public:
    Book(int id, const std::string title, const Author& author, const std::string genre, int available_quantity, int total_quantity);
    void BorrowBook();
    void ReturnBook();
    static void getBookCount();
};

#endif