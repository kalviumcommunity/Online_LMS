#include <iostream>
#include "include/Author.h"
#include "include/Admin.h"
#include "include/Book.h"
#include "include/Member.h"
#include "include/User.h"

using namespace std; 

int main() {
    // Create instances of Authors, Books, Admins, and Members
    Author author1(1, "John Doe");
    Admin admin1(1, "admin", "admin@gmail.com", "adminpass");
    Member member1(2, "member", "member@gmail.com", "memberpass");
    author1.display();
    Author author2(author1);
    author2.display();

    // To be implemented in future milestones
    return 0;
}
