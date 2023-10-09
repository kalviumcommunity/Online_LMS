#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
    int id;
    std::string name;
    std::string email;
    std::string password;

public:
    User(int id, std::string name, std::string email, std::string password); // Constructor
    virtual void Login() = 0; // Pure virtual function
    virtual void Logout() = 0; // Pure virtual function
};

#endif

