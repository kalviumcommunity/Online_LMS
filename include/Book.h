#ifndef Book_H
#define Book_H

#include "Item.h"
#include "Author.h"

class Book : public Item {
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
    bool isAvailable() const override;
};

#endif