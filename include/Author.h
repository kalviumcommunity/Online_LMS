#ifndef AUTHOR_H
#define AUTHOR_H

#include <iostream>

class Author {
private:
    int author_id;
    std::string author_name;

public:
    Author(int author_id, std::string author_name);
    Author(const Author& other);
    ~Author();
    void display();
};

#endif
