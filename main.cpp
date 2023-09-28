#include <iostream>
using namespace std;

class Author {
private:
    int author_id;
    string author_name;

public:
    Author(int id, string name) : author_id(id), author_name(name) {}
};

class Book {
private:
    int book_id;
    string title;
    Author author;
    string genre;
    int available_quantity;
    int total_quantity;

public:
    void BorrowBook() {
        // Implement book borrowing logic
    }

    void ReturnBook() {
        // Implement book returning logic
    }
};

class User {
protected:
    int user_id;
    string name;
    string email;
    string password;

public:
    User(int id, string name, string email, string pass)
        : user_id(id), name(name), email(email), password(pass) {}

    void Login() {
        
    }

    void Register() {
        
    }
};

class Admin : public User {
public:
    Admin(int id, string name, string email, string pass)
        : User(id, name, email, pass) {}

    // Implement admin-specific functionality
    void AddBook() {
        // Implement book addition logic
    }

    void DeleteUser() {
        // Implement user deletion logic
    }
};

class Member : public User {
public:
    Member(int id, string name, string email, string pass)
        : User(id, name, email, pass) {}

    // Implement member-specific functionality
};

int main() {
    // Create instances of Authors, Books, Admins, and Members
    Author author1(1, "John Doe");
    Admin admin1(1, "admin", "admin@gmail.com", "adminpass");
    Member member1(2, "member", "member@gmail.com", "memberpass");

    // To be implemented in future milestones
    return 0;
}
