#include "Author.h"

Author::Author(int author_id, std::string author_name) {
    this->author_id = author_id;
    this->author_name = author_name;
    std::cout << "Parameterized constructor called" << std::endl;
}

void Author::display() {
    std::cout << this->author_id << std::endl;
    std::cout << this->author_name << std::endl;
}

