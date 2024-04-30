#ifndef ITEM_H
#define ITEM_H

class Item {
public:
    virtual void BorrowBook() = 0;
    virtual void ReturnBook() = 0;
    virtual bool isAvailable() const = 0;
};

#endif
