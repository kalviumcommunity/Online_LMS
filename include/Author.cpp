#include "Author.h"

int Author::author_count = 0; // Initialize the static member variable

Author::Author(int author_id, std::string author_name) {
    this->author_id = author_id;
    this->author_name = author_name;
    std::cout << "Parameterized constructor called" << std::endl;
    author_count++;
}

Author::Author(const Author &other)
    : author_id(other.author_id), author_name(other.author_name) {
    std::cout << "Author Copy constructor called" << std::endl;
    author_count++;
}

Author::~Author() {
    std::cout << "Author Destructor called" <<  std::endl;
    author_count--;
}

void Author::display() {
    std::cout << this->author_id << std::endl;
    std::cout << this->author_name << std::endl;
}

void Author::getAuthorCount() {
    std::cout << "Total Number of Authors: " << author_count << std::endl;
}